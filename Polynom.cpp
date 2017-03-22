#include <iostream>
#include <cmath>
#include "Polynom.h"

//описываем класс Полином

Polynom::Polynom (){}//конструктор

Polynom::Polynom (size_t N):number(N)//конструктор
{
	ptrcoefArr=new int [number]; //создаем пустой массив коэффициентов

	for (size_t i= 0; i<number; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент A"<<i<<std::endl;
		std::cin>>ptrcoefArr[i];
	}
}

Polynom::~Polynom()
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

float Polynom::operator ()(double x) //считаем сумму
{
	Sum=0;

	for (size_t i=0; i<number; i++) //заполняем пустой массив членов полинома
	{
	Sum+= ptrcoefArr[i] * pow(x,static_cast<double>(i)); //считаем сумму
			
	}
		
	return Sum;
}
