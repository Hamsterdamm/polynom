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
		float operator ()(double x); //значение в точке
		float operator [](size_t i); 
		/*float operator +(double left,double right); 
		float operator -(double left,double right); 
		float operator *(double left,double right);*/
};

#endif //_POLYNOM_H_