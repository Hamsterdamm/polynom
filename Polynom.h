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
		float FuncAtX(float x); //�������� � �����
};

#endif //_POLYNOM_H_