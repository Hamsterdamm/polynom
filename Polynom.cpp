#include <iostream>
#include <cmath>
#include "Polynom.h"

//��������� ����� �������

Polynom::Polynom (){}//�����������

Polynom::Polynom (size_t N):number(N)//�����������
{
	ptrcoefArr=new int [number]; //������� ������ ������ �������������

	for (size_t i= 0; i<number; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>ptrcoefArr[i];
	}
}

Polynom::~Polynom()
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

float Polynom::operator ()(double x) //������� �����
{
	Sum=0;

	for (size_t i=0; i<number; i++) //��������� ������ ������ ������ ��������
	{
	Sum+= ptrcoefArr[i] * pow(x,static_cast<double>(i)); //������� �����
			
	}
		
	return Sum;
}
