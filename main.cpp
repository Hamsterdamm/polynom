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

	std::cout <<"Полином a:"<< std::endl;
	for (size_t i = 0; i<a.GetPow(); i++) //
	{
		std::cout << a[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Введите размерность N полинома b:" << std::endl;
	std::cin >> N; //задаем размерность полинома

	//Polynom b(a);

	Polynom b(N); //создаем объект класса Полином
	for (size_t i= 0; i<N; i++) //заполняем пустой массив коэффициентов
	{
		std::cout<<"Введите коэффициент B"<<i<<std::endl;
		std::cin>>b[i];
	}

	std::cout << "Полином b:" << std::endl;
	for (size_t i = 0; i<b.GetPow(); i++) //
	{
		std::cout << b[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom sum( a + b);

	std::cout << "Полином a+b:" << std::endl;
	for (size_t i = 0; i<sum.GetPow(); i++) //
	{
		std::cout << sum[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom dif = a - b;

	std::cout << "Полином a-b:" << std::endl;
	for (size_t i = 0; i<dif.GetPow(); i++) //
	{
		std::cout << dif[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom mul = a * b;

	std::cout << "Полином a*b:" << std::endl;
	for (size_t i = 0; i<mul.GetPow(); i++) //
	{
		std::cout << mul[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom der = a.diff();

	std::cout << "Полином a':" << std::endl;
	for (size_t i = 0; i<der.GetPow(); i++) //
	{
		std::cout << der[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	std::cout<<"Введите значение переменной x"<<std::endl;
	std::cin>>x; //вводим значение переменной x

	result=a(x);

	std::cout<<"Сумма полинома: "<<result<<std::endl; //вывод значения суммы

	system("pause");
	return 0;
}
