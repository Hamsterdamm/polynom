#include <iostream>
#include <cmath>
#include "Polynom.h"




int main ()
{

	size_t N;
	float x;
	float SUM;

	std::cout<<"������� ����������� �������� N:"<<std::endl;
	std::cin>>N; //������ ����������� ��������
	
	Polynom P = Polynom(N); //������� ������ ������ �������

	std::cout<<"������� �������� ���������� X"<<std::endl;
	std::cin>>x; //������ �������� ���������� X

	SUM=P.FuncAtX(x);

	std::cout<<"����� ��������: "<<SUM<<std::endl; //����� �������� �����

	system("pause");
	return 0;
}
