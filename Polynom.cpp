#include <iostream>
#include <cmath>
#include "Polynom.h"

//описываем класс Полином

Polynom::Polynom (){}//конструктор

Polynom::Polynom (size_t N):number(N)//конструктор
{
	ptrcoefArr=new double [number]; //создаем пустой массив коэффициентов

	for (size_t i= 0; i<number; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент A"<<i<<std::endl;
		std::cin>>ptrcoefArr[i];
	}
}

Polynom::Polynom (size_t N, double* ptrcoefDiffArr):number(N),ptrcoefArr(ptrcoefDiffArr)//конструктор для производной
{
}

Polynom::~Polynom()
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

double Polynom::operator ()(double x) //считаем сумму
{
	double Sum=0;

	for (size_t i=0; i<number; i++) //заполняем пустой массив членов полинома
	{
	Sum+= ptrcoefArr[i] * pow(x,static_cast<double>(i)); //считаем сумму
			
	}
		
	return Sum;
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