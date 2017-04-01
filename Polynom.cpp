#include <iostream>
#include <cmath>
#include "Polynom.h"
#include <algorithm>

Polynom::Polynom (){} //����������� �� ��������� ��� ������ �������

Polynom::Polynom(size_t N) :number(N), ptrcoefArr(nullptr) //����������� �� ����������� ��������
{
	ptrcoefArr = new(std::nothrow) double[number]; //�������������� ������ ������ �������������, � ������ ������ ���������� ������� ���������
	if (ptrcoefArr != nullptr) //�������� �� ������� ���������
	{
		for (size_t i = 0; i<number; i++) //��������� ������ ������������� ������
		{
			ptrcoefArr[i] = 0;
		}
	}
	else
		number = 0; //������ ����������� ������ 0

}

Polynom::Polynom(const Polynom& P):number(P.number), ptrcoefArr(nullptr) //���������� �����������
{
	ptrcoefArr = new(std::nothrow) double[number]; //�������������� ������ ������ �������������, � ������ ������ ���������� ������� ���������
	if (ptrcoefArr != nullptr)
		memcpy(ptrcoefArr, P.ptrcoefArr, number); //�������� ������ �������������
	else
		number = 0; //������ ����������� ������ 0
}

Polynom::~Polynom() //����������
{
	if (ptrcoefArr!= nullptr)
		delete[] ptrcoefArr; //���������� ������ �������������
}

size_t Polynom::GetPow() //����� ��������� ����������� (�������) ��������
{
	return number;
};

double Polynom::operator ()(double x) //�������� ���������� �������� � ����� x
{
	double result =0; //������������� ����� ���������� ��� �������� ����� ������ ��������

	for (size_t i = 0; i < number; i++)
	{
		result += ptrcoefArr[i] * pow(x, static_cast<double>(i)); //��������� ����� �������� ��� �=...
	}

	return result;
}

double & Polynom::operator[](size_t i) //�������� ��������� �������� ������������ ��������
{
	return ptrcoefArr[i];
}

double & Polynom::operator[](size_t i) const //����������� �������� ��������� �������� ������������ ��������
{
	return ptrcoefArr[i];
}

Polynom Polynom::operator +(const Polynom& P) //�������� �����
{
	Polynom result(number); //������������� ��������-���������� ��������

	for (size_t i = 0; i<number; i++) //������ �������������
	{
		result[i] = ptrcoefArr[i] + P[i];
	}

	return result;
}

Polynom Polynom::operator -(const Polynom& P) //�������� ��������
{
	Polynom result(number); //������������� ��������-���������� ��������

	for (size_t i = 0; i<number; i++) //������ �������������
	{
		result[i] = ptrcoefArr[i] - P[i];
	}

	return result;
}

Polynom Polynom::operator*(const Polynom & P) //�������� ������������ ���������
{
	size_t m(number), n(P.number), number_new = m + n; //������������� ������������ ���������
	Polynom result(number_new); //������������� ��������-���������� ��������

	for (size_t k=0; k<(number_new); k++) //������ �������������
	{
		for (size_t i=(std::max(1,static_cast<int>(k+1-n)));i<(std::min(k,m));i++)
		{
			result[k]+=ptrcoefArr[i]*P[k+1-i];
		}
	}

	return result;
}


Polynom Polynom::diff() //����� ����������������� ���������
{
	Polynom result(number-1); //������������� ��������-���������� ��������

	for (size_t i= 1; i<number; i++) //������ �������������
	{
		result[i-1]=ptrcoefArr[i] * i;
	}

	return result;
}