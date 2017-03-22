#ifndef _POLYNOM_H_
#define _POLYNOM_H_

class Polynom
{
	private: 
		size_t number;
		float Sum; //���������� ��� ����������� �������� � �������� �����
		int* ptrcoefArr; //��������� �� ������ �������������

	public:
		Polynom();//�����������
		Polynom (size_t N); //�����������
		~Polynom();//����������
		float operator ()(float x); //�������� � �����
		float operator [](size_t i); 
		float operator +(float left,float right); 
		float operator -(float left,float right); 
		float operator *(float left,float right);
};

#endif //_POLYNOM_H_