#include <iostream>
#include <cmath>
#include "Polynom.h"

int main ()
{
	size_t N;
	double x;
	double SUM;

	std::cout<<"������� ����������� N �������� a:"<<std::endl;
	std::cin>>N; //������ ����������� ��������
	
	Polynom a = Polynom(N); //������� ������ ������ �������

	std::cout << "������� ����������� N �������� b:" << std::endl;
	std::cin >> N; //������ ����������� ��������

	Polynom b = Polynom(N); //������� ������ ������ �������

	std::cout << "������� ����������� N �������� c:" << std::endl;
	std::cin >> N; //������ ����������� ��������

	Polynom c = Polynom(N); //������� ������ ������ �������

	/*std::cout<<"������� �������� ���������� X"<<std::endl;
	std::cin>>x; //������ �������� ���������� X

	SUM=a(x);

	std::cout<<"����� ��������: "<<SUM<<std::endl; //����� �������� �����*/

	system("pause");
	return 0;
}
