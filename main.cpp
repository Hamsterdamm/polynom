#include <iostream>
#include <cmath>
#include "Polynom.h"
#include <locale.h>

int main ()
{
	setlocale(LC_ALL,"RUS");
	size_t N;
	double x;
	double SUM;

	std::cout<<"������� ����������� N �������� a:"<<std::endl;
	std::cin>>N; //������ ����������� ��������
	
	Polynom a(N); //������� ������ ������ �������

	for (size_t i= 0; i<N; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>a[i];
	}

	std::cout << "������� ����������� N �������� b:" << std::endl;
	std::cin >> N; //������ ����������� ��������

	Polynom b(N); //������� ������ ������ �������
	for (size_t i= 0; i<N; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>b[i];
	}

	std::cout << "������� ����������� N �������� c:" << std::endl;
	std::cin >> N; //������ ����������� ��������

	Polynom c = Polynom(N); //������� ������ ������ �������
	for (size_t i= 0; i<N; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>c[i];
	}

	/*std::cout<<"������� �������� ���������� X"<<std::endl;
	std::cin>>x; //������ �������� ���������� X

	SUM=a(x);

	std::cout<<"����� ��������: "<<SUM<<std::endl; //����� �������� �����*/

	system("pause");
	return 0;
}
