#ifndef _POLYNOM_H_
#define _POLYNOM_H_

class Polynom
{
	private: 
		size_t number;
		double Sum; //переменные для размерности полинома и значения суммы
		int* ptrcoefArr; //указатель на массив коэффициентов

	public:
		Polynom();//конструктор
		Polynom (size_t N); //конструктор
		~Polynom();//деструктор
		double operator ()(double x); //значение в точке
		double &operator [](size_t i); 
		Polynom operator +(Polynom P); 
		Polynom operator -(Polynom P); 
		Polynom operator *(Polynom P); 
};

#endif //_POLYNOM_H_