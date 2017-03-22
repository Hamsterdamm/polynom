#ifndef _POLYNOM_H_
#define _POLYNOM_H_

class Polynom
{
	private: 
		size_t number;
		double Sum; //���������� ��� ����������� �������� � �������� �����
		int* ptrcoefArr; //��������� �� ������ �������������

	public:
		Polynom();//�����������
		Polynom (size_t N); //�����������
		~Polynom();//����������
		float operator ()(double x); //�������� � �����
		float operator [](size_t i); 
		/*float operator +(double left,double right); 
		float operator -(double left,double right); 
		float operator *(double left,double right);*/
};

#endif //_POLYNOM_H_