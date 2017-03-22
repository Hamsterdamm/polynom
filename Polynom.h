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
		float FuncAtX(float x); //значение в точке
};

#endif //_POLYNOM_H_