#include <iostream>
#include <cmath>
#include "Polynom.h"

int main ()
{
	size_t N;
	double x;
	double SUM;

	std::cout<<"Введите размерность N полинома a:"<<std::endl;
	std::cin>>N; //задаем размерность полинома
	
	Polynom a = Polynom(N); //создаем объект класса Полином

	std::cout << "Введите размерность N полинома b:" << std::endl;
	std::cin >> N; //задаем размерность полинома

	Polynom b = Polynom(N); //создаем объект класса Полином

	std::cout << "Введите размерность N полинома c:" << std::endl;
	std::cin >> N; //задаем размерность полинома

	Polynom c = Polynom(N); //создаем объект класса Полином

	/*std::cout<<"Введите значение переменной X"<<std::endl;
	std::cin>>x; //вводим значение переменной X

	SUM=a(x);

	std::cout<<"Сумма полинома: "<<SUM<<std::endl; //вывод значения суммы*/

	system("pause");
	return 0;
}
