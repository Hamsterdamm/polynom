#ifndef _POLYNOM_H_
#define _POLYNOM_H_

//double* ptrcoefSumArr;

class Polynom
{
	private: 
		size_t number;
		double* ptrcoefArr; //указатель на массив коэффициентов
		Polynom::Polynom (size_t N, double* ptrArr);

	public:
		Polynom();
		Polynom(const Polynom & P);
		//конструктор

		Polynom (size_t N); //конструктор
		~Polynom();//деструктор
		double operator ()(double x); //значение в точке
		double & operator [](size_t i);
		double & operator [](size_t i) const;
		std::ostream &operator<<(std::ostream& out);
		std::istream &operator>>(std::istream& in);
		Polynom operator +(const Polynom& P); 
		Polynom operator -(const Polynom& P); 
		Polynom operator *(const Polynom& P); 
		Polynom diff();
		size_t GetPow();
};

#endif //_POLYNOM_H_