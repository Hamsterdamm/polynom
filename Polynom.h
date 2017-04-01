#ifndef _POLYNOM_H_
#define _POLYNOM_H_

//double* ptrcoefSumArr;

class Polynom
{
	private: 
		size_t number;
		double* ptrcoefArr; //указатель на массив коэффициентов

	public:
		Polynom(); //конструктор по умолчанию для класса Полином
		Polynom(const Polynom & P); //копирующий конструктор
		//конструктор

		Polynom (size_t N); //конструктор от размерности полинома
		~Polynom(); //деструктор
		double operator ()(double x); //значение в точке
		double & operator [](size_t i); //оператор получения значения коэффициента полинома
		double & operator [](size_t i) const; //константный оператор получения значения коэффициента полинома
		Polynom operator +(const Polynom& P); //оператор суммы
		Polynom operator -(const Polynom& P); //оператор разности
		Polynom operator *(const Polynom& P); //оператор произведения полиномов
		Polynom diff(); //метод дифференцирования полиномов
		size_t GetPow(); //метод получения размерности (степени) полинома
};

#endif //_POLYNOM_H_