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

	std::cout<<"������� ����������� N �������� a:"<<std::endl;
	std::cin>>N; //������ ����������� ��������
	
	Polynom a(N); //������� ������ ������ �������

	for (size_t i= 0; i<N; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>a[i];
	}

	std::cout <<"������� a:"<< std::endl;
	for (size_t i = 0; i<a.GetPow(); i++) //
	{
		std::cout << a[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "������� ����������� N �������� b:" << std::endl;
	std::cin >> N; //������ ����������� ��������

	//Polynom b(a);

	Polynom b(N); //������� ������ ������ �������
	for (size_t i= 0; i<N; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� B"<<i<<std::endl;
		std::cin>>b[i];
	}

	std::cout << "������� b:" << std::endl;
	for (size_t i = 0; i<b.GetPow(); i++) //
	{
		std::cout << b[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom sum( a + b);

	std::cout << "������� a+b:" << std::endl;
	for (size_t i = 0; i<sum.GetPow(); i++) //
	{
		std::cout << sum[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom dif = a - b;

	std::cout << "������� a-b:" << std::endl;
	for (size_t i = 0; i<dif.GetPow(); i++) //
	{
		std::cout << dif[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom mul = a * b;

	std::cout << "������� a*b:" << std::endl;
	for (size_t i = 0; i<mul.GetPow(); i++) //
	{
		std::cout << mul[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	Polynom der = a.diff();

	std::cout << "������� a':" << std::endl;
	for (size_t i = 0; i<der.GetPow(); i++) //
	{
		std::cout << der[i] << "*x^" << i << '+';
	}
	std::cout << std::endl;

	std::cout<<"������� �������� ���������� x"<<std::endl;
	std::cin>>x; //������ �������� ���������� x

	result=a(x);

	std::cout<<"����� ��������: "<<result<<std::endl; //����� �������� �����

	system("pause");
	return 0;
}
