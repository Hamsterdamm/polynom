#ifndef _POLYNOM_H_
#define _POLYNOM_H_

class Polynom
{
	private: 
		size_t number;
		float Sum; //переменные для размерности полинома и значения суммы
		int* ptrcoefArr; //указатель на массив коэффициентов

	public:
		Polynom();//конструктор
		Polynom (size_t N); //конструктор
		~Polynom();//деструктор
		float operator ()(float x); //значение в точке
		float operator [](size_t i); 
		float operator +(float left,float right); 
		float operator -(float left,float right); 
		float operator *(float left,float right);
};

#endif //_POLYNOM_H_