#ifndef _POLYNOM_H_
#define _POLYNOM_H_

class Polynom
{
	private: 
		size_t number;
		double* ptrcoefArr; //указатель на массив коэффициентов
		double* ptrcoefDiffArr; //указатель на массив коэффициентов производной
		Polynom::Polynom (size_t N, double* ptrcoefDiffArr);

	public:
		Polynom();//конструктор
		Polynom (size_t N); //конструктор
		~Polynom();//деструктор
		double operator ()(double x); //значение в точке
		double &operator [](size_t i); 
		Polynom operator +(const Polynom& P); 
		Polynom operator -(const Polynom& P); 
		Polynom operator *(const Polynom& P); 
		Polynom diff();
};

#endif //_POLYNOM_H_