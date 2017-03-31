#include <iostream>
#include <cmath>
#include "Polynom.h"
#include <algorithm>

Polynom::Polynom (){}//конструктор класса Полином

Polynom::Polynom(const Polynom& P):number(P.number), ptrcoefArr(nullptr) {
	ptrcoefArr = new(std::nothrow) double(number);
	if (ptrcoefArr != nullptr)
		memcpy(ptrcoefArr, P.ptrcoefArr, number);
	else
		number = 0;
	
}//копирующий конструктор

Polynom::Polynom (size_t N):number(N), ptrcoefArr(nullptr) //конструктор от размерности полинома
{
	ptrcoefArr=new double [number]; //создаем пустой массив коэффициентов

	if (ptrcoefArr != nullptr)
	{
		for (size_t i= 0; i<number; i++) //заполняем пустой массив коэффициентов
		{
			ptrcoefArr[i]=0;
			}
	}
	else
		number = 0;

}

Polynom::Polynom(size_t N, double* ptrArr) :number(N), ptrcoefArr(ptrArr) {}//конструктор для результата операции

Polynom::~Polynom() //деструктор
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

size_t Polynom::GetPow()
{
	return number;
};

double Polynom::operator ()(double x) //метод вычисления значения в точке x
{
	double Sum=0;

	for (size_t i=0; i<number; i++) 
	{
	Sum+= ptrcoefArr[i] * pow(x,static_cast<double>(i));
			
	}
		
	return Sum;
}

double & Polynom::operator[](size_t i)
{
	return ptrcoefArr[i];
}

double & Polynom::operator[](size_t i) const
{
	return ptrcoefArr[i];
}

std::ostream &Polynom::operator<<(std::ostream & out)
{
	// TODO: вставьте здесь оператор return
	return std::cout;
}

std::istream &Polynom::operator>>(std::istream & in)
{
	// TODO: вставьте здесь оператор return
	return std::cin;
}



Polynom Polynom::operator +(const Polynom& P) //оператор суммы
{

	double* ptrcoefTmpArr=new double [number]; //создаем пустой массив коэффициентов

	for (size_t i= 0; i<number; i++) //заполняем массив коэффициентов
	{
		ptrcoefTmpArr[i]=ptrcoefArr[i] +P.ptrcoefArr[i];
	}

	Polynom Sum = Polynom(number, ptrcoefTmpArr);

	return Sum;
}

Polynom Polynom::operator -(const Polynom& P) //оператор разности
{

	double* ptrcoefTmpArr = new double[number]; //создаем пустой массив коэффициентов

	for (size_t i = 0; i<number; i++) //заполняем массив коэффициентов
	{
		ptrcoefTmpArr[i] = ptrcoefArr[i] - P.ptrcoefArr[i];
	}

	Polynom Sum = Polynom(number, ptrcoefTmpArr);

	return Sum;
}

Polynom Polynom::operator*(const Polynom & P)
{
	size_t m(number),n(P.number);
	size_t number_new=m+n;

	Polynom result(number_new);

	double* ptrcoefTmpArr = new double[m+n];
	for (size_t k=0; k<(number_new); k++)
	{
		for (size_t i=(std::max(1,static_cast<int>(k+1-n)));i<(std::min(k,m));i++)
		{
			result[k]+=this->ptrcoefArr[i]*P[k+1-i];
		}
	}



	return result;
}


Polynom Polynom::diff()
{
	size_t num(number);
	double* ptrcoefTmpArr = new double[number]; //создаем пустой массив коэффициентов
	//ptrcoefDiffArr=new double [num]; //создаем пустой массив коэффициентов

	for (size_t i= 1; i<num; i++) //заполняем массив коэффициентов
	{
		ptrcoefTmpArr[i-1]=ptrcoefArr[i] * i;
	}

	Polynom Diff = Polynom(num, ptrcoefTmpArr);

	return Diff;
}