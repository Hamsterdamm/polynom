#include <iostream>
#include <cmath>
#include "Polynom.h"

Polynom::Polynom (){}//конструктор класса Полином

Polynom::Polynom(const Polynom& P):number(P.number), ptrcoefArr(nullptr) {}//копирующий конструктор

Polynom::Polynom (size_t N):number(N)//конструктор от размерности полинома
{
	ptrcoefArr=new double [number]; //создаем пустой массив коэффициентов

	for (size_t i= 0; i<number; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент A"<<i<<std::endl;
		std::cin>>ptrcoefArr[i];
	}
}

Polynom::Polynom(size_t N, double* ptrArr) :number(N), ptrcoefArr(ptrArr) {}//конструктор для результата операции

Polynom::~Polynom() //деструктор
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

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
	// TODO: вставьте здесь оператор return
}

std::ostream & Polynom::operator«(std::ostream & out)
{
	// TODO: вставьте здесь оператор return
}

std::istream & Polynom::operator»(std::istream & in)
{
	// TODO: вставьте здесь оператор return
}

//double Polynom::&operator [](size_t i) 
//{
//
//}

Polynom Polynom::operator +(const Polynom& P) //оператор суммы
{

	ptrcoefSumArr=new double [number]; //создаем пустой массив коэффициентов

	for (size_t i= 0; i<number; i++) //заполняем массив коэффициентов
	{
		ptrcoefSumArr[i]=ptrcoefArr[i] +P.ptrcoefArr[i];
	}

	Polynom Sum = Polynom(number, ptrcoefSumArr);

	return Sum;
}

Polynom Polynom::operator -(const Polynom& P) //оператор разности
{

	ptrcoefSumArr = new double[number]; //создаем пустой массив коэффициентов

	for (size_t i = 0; i<number; i++) //заполняем массив коэффициентов
	{
		ptrcoefSumArr[i] = ptrcoefArr[i] - P.ptrcoefArr[i];
	}

	Polynom Sum = Polynom(number, ptrcoefSumArr);

	return Sum;
}

Polynom Polynom::operator*(const Polynom & P)
{
	return Polynom();
}


Polynom Polynom::diff()
{
	size_t num(number);
	ptrcoefDiffArr=new double [num]; //создаем пустой массив коэффициентов

	for (size_t i= 1; i<num; i++) //заполняем массив коэффициентов
	{
		ptrcoefDiffArr[i-1]=ptrcoefArr[i] * i;
	}

	Polynom Diff = Polynom(num, ptrcoefDiffArr);

	return Diff;
}