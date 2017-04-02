#include <iostream>
#include <cmath>
#include "Polynom.h"
#include <algorithm>

Polynom::Polynom (){} //конструктор по умолчанию для класса Полином

Polynom::Polynom(size_t N) :number(N), ptrcoefArr(nullptr) //конструктор от размерности полинома
{
	ptrcoefArr = new(std::nothrow) double[number]; //инициализируем пустой массив коэффициентов, в случае ошибки возвращаем нулевой указатель
	if (ptrcoefArr != nullptr) //проверка на нулевой указатель
	{
		for (size_t i = 0; i<number; i++) //заполняем массив коэффициентов нулями
		{
			ptrcoefArr[i] = 0;
		}
	}
	else
		number = 0; //задаем размерность равной 0

}

Polynom::Polynom(const Polynom& P):number(P.number), ptrcoefArr(nullptr) //копирующий конструктор
{
	ptrcoefArr = new(std::nothrow) double[number]; //инициализируем пустой массив коэффициентов, в случае ошибки возвращаем нулевой указатель
	if (ptrcoefArr != nullptr)
		for (size_t i = 0; i<number; i++) //заполняем массив коэффициентов нулями
		{
			ptrcoefArr[i] = P.ptrcoefArr[i];
		}
		//memcpy(ptrcoefArr, P.ptrcoefArr, number); //копируем массив коэффициентов
	else
		number = 0; //задаем размерность равной 0
}

Polynom::~Polynom() //деструктор
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr; //уничтожаем массив коэффициентов
}

size_t Polynom::GetPow() //метод получения размерности (степени) полинома
{
	return number;
};

double Polynom::operator ()(double x) //оператор вычисления значения в точке x
{
	double result =0; //инициализация нулем переменной для хранения суммы членов полинома

	for (size_t i = 0; i < number; i++)
	{
		result += ptrcoefArr[i] * pow(x, static_cast<double>(i)); //суммируем члены полинома при х=...
	}

	return result;
}

double & Polynom::operator[](size_t i) //оператор получения значения коэффициента полинома
{
	return ptrcoefArr[i];
}

double & Polynom::operator[](size_t i) const //константный оператор получения значения коэффициента полинома
{
	return ptrcoefArr[i];
}

Polynom Polynom::operator +(const Polynom& P) //оператор суммы
{
	Polynom result(std::max(number,P.number)); //инициализация полинома-результата операции

	for (size_t i = 0; i<std::min(number, P.number); i++) //расчет коэффициентов
	{
		result[i] = ptrcoefArr[i] + P[i];
	}

	return result;
}

Polynom Polynom::operator -(const Polynom& P) //оператор разности
{
	Polynom result(number); //инициализация полинома-результата операции

	for (size_t i = 0; i<number; i++) //расчет коэффициентов
	{
		result[i] = ptrcoefArr[i] - P[i];
	}

	return result;
}

Polynom Polynom::operator*(const Polynom & P) //оператор произведения полиномов
{
	size_t m(number), n(P.number), number_new = m + n-1; //инициализация размерностей полиномов
	Polynom result(number_new); //инициализация полинома-результата операции

	for (size_t k=0; k<(number_new); k++) //расчет коэффициентов
	{
		for (size_t i=(std::max<size_t>(0,k-n));i<=(std::min(k,m));i++)
		{
			result[k]+=ptrcoefArr[i]*P[k-i];
		}
	}

	return result;
}


Polynom Polynom::diff() //метод дифференцирования полиномов
{
	Polynom result(number-1); //инициализация полинома-результата операции

	for (size_t i= 1; i<number; i++) //расчет коэффициентов
	{
		result[i-1]=ptrcoefArr[i] * i;
	}

	return result;
}