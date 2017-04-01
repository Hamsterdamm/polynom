#include <iostream>
#include <cmath>
#include "Polynom.h"
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"RUS");
	size_t N;
	double x;
	double result;

	std::cout<<"Введите размерность N полинома a:"<<std::endl;
	std::cin>>N; //задаем размерность полинома
	
	Polynom a(N); //создаем объект класса Полином

	for (size_t i= 0; i<N; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент A"<<i<<std::endl;
		std::cin>>a[i];
	}

	std::cout << "Введите размерность N полинома b:" << std::endl;
	std::cin >> N; //задаем размерность полинома

	Polynom b(N); //создаем объект класса Полином
	for (size_t i= 0; i<N; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент B"<<i<<std::endl;
		std::cin>>b[i];
	}

	std::cout << "Введите размерность N полинома c:" << std::endl;
	std::cin >> N; //задаем размерность полинома

	Polynom c = Polynom(N); //создаем объект класса Полином
	for (size_t i= 0; i<N; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент C"<<i<<std::endl;
		std::cin>>c[i];
	}

	std::cout<<"Введите значение переменной x"<<std::endl;
	std::cin>>x; //вводим значение переменной x

	result=a(x);

	std::cout<<"Сумма полинома: "<<result<<std::endl; //вывод значения суммы

	system("pause");
	return 0;
}
