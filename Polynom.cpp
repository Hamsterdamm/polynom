#include <iostream>
#include <cmath>
#include "Polynom.h"

Polynom::Polynom (){}//����������� ������ �������

Polynom::Polynom(const Polynom& P):number(P.number), ptrcoefArr(nullptr) {}//���������� �����������

Polynom::Polynom (size_t N):number(N)//����������� �� ����������� ��������
{
	ptrcoefArr=new double [number]; //������� ������ ������ �������������

	for (size_t i= 0; i<number; i++) //��������� ������ ������ �������������
	{
		std::cout<<"������� ����������� A"<<i<<std::endl;
		std::cin>>ptrcoefArr[i];
	}
}

Polynom::Polynom(size_t N, double* ptrArr) :number(N), ptrcoefArr(ptrArr) {}//����������� ��� ���������� ��������

Polynom::~Polynom() //����������
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr;
}

double Polynom::operator ()(double x) //����� ���������� �������� � ����� x
{
	double Sum=0;

	for (size_t i=0; i<number; i++) 
	{
	Sum+= ptrcoefArr[i] * pow(x,static_cast<double>(i));
			
	}
		
	return Sum;
}

double & Polynom::operator[](size_t i)
{
	// TODO: �������� ����� �������� return
}

std::ostream & Polynom::operator�(std::ostream & out)
{
	// TODO: �������� ����� �������� return
}

std::istream & Polynom::operator�(std::istream & in)
{
	// TODO: �������� ����� �������� return
}

//double Polynom::&operator [](size_t i) 
//{
//
//}

Polynom Polynom::operator +(const Polynom& P) //�������� �����
{

	ptrcoefSumArr=new double [number]; //������� ������ ������ �������������

	for (size_t i= 0; i<number; i++) //��������� ������ �������������
	{
		ptrcoefSumArr[i]=ptrcoefArr[i] +P.ptrcoefArr[i];
	}

	Polynom Sum = Polynom(number, ptrcoefSumArr);

	return Sum;
}

Polynom Polynom::operator -(const Polynom& P) //�������� ��������
{

	ptrcoefSumArr = new double[number]; //������� ������ ������ �������������

	for (size_t i = 0; i<number; i++) //��������� ������ �������������
	{
		ptrcoefSumArr[i] = ptrcoefArr[i] - P.ptrcoefArr[i];
	}

	Polynom Sum = Polynom(number, ptrcoefSumArr);

	return Sum;
}

Polynom Polynom::operator*(const Polynom & P)
{
	return Polynom();
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