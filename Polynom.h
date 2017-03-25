#ifndef _POLYNOM_H_
#define _POLYNOM_H_

//double* ptrcoefSumArr;

class Polynom
{
	private: 
		size_t number;
		double* ptrcoefArr; //��������� �� ������ �������������
		double* ptrcoefDiffArr; //��������� �� ������ ������������� �����������
		Polynom::Polynom (size_t N, double* ptrArr);

	public:
		Polynom();//�����������
		Polynom (size_t N); //�����������
		~Polynom();//����������
		double operator ()(double x); //�������� � �����
		double &operator [](size_t i);
		std::ostream& operator�(std::ostream& out);
		std::istream& operator�(std::istream& in);
		Polynom operator +(const Polynom& P); 
		Polynom operator -(const Polynom& P); 
		Polynom operator *(const Polynom& P); 
		Polynom diff();
};

#endif //_POLYNOM_H_