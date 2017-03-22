#include <iostream>
#include <cmath>
#include "Polynom.h"

int main ()
{
	size_t N;
	double x;
	double SUM;

	std::cout<<"Введите размерность полинома N:"<<std::endl;
	std::cin>>N; //задаем размерность полинома
	
	Polynom P = Polynom(N); //создаем объект класса Полином

	std::cout<<"Введите значение переменной X"<<std::endl;
	std::cin>>x; //вводим значение переменной X

	SUM=P(x);

	std::cout<<"Сумма полинома: "<<SUM<<std::endl; //вывод значения суммы

	system("pause");
	return 0;
}
