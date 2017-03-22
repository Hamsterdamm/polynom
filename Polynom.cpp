#include <iostream>
#include <cmath>
#include "Polynom.h"

//��������� ����� �������

Polynom::Polynom (){}//�����������

Polynom::Polynom (size_t N):number(N)//�����������
{
	ptrcoefArr=new double [number]; //������� ������ ������ �������������

	for (size_t i= 0; i<number; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>ptrcoefArr[i];
	}
}

Polynom::Polynom (size_t N, double* ptrcoefDiffArr):number(N),ptrcoefArr(ptrcoefDiffArr)//����������� ��� �����������
{
}

Polynom::~Polynom()
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

double Polynom::operator ()(double x) //������� �����
{
	double Sum=0;

	for (size_t i=0; i<number; i++) //��������� ������ ������ ������ ��������
	{
	Sum+= ptrcoefArr[i] * pow(x,static_cast<double>(i)); //������� �����
			
	}
		
	return Sum;
}

Polynom Polynom::diff()
{
	size_t num(number);
	ptrcoefDiffArr=new double [num]; //������� ������ ������ �������������

	for (size_t i= 1; i<num; i++) //��������� ������ �������������
	{
		ptrcoefDiffArr[i-1]=ptrcoefArr[i] * i;
	}

	Polynom Diff = Polynom(num, ptrcoefDiffArr);

	return Diff;
}