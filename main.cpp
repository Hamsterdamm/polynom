#include <iostream>
#include <cmath>


//описываем класс Полином
class Polynom
{
	private: 
		size_t number;
		float Sum; //переменные для размерности полинома и значения суммы
		int* ptrcoefArr; //указатель на массив коэффициентов


	public:
		Polynom (size_t N):number(N)//конструктор
		{
			ptrcoefArr=new int [number]; //создаем пустой массив коэффициентов

			for (size_t i= 0; i<number; i++) //заполняем пустой массив коэффициентов
			{
				std::cout<<"Введите коэффициент A"<<i<<std::endl;
				std::cin>>ptrcoefArr[i];
			}
		}

		~Polynom()
		{
			if (ptrcoefArr!= nullptr)
				delete[] ptrcoefArr;
		}

		float CalcSum(float x) //считаем сумму
		{
			Sum=0;

			for (int i=0; i<number; i++) //заполняем пустой массив членов полинома
			{
			Sum+= ptrcoefArr[i] * pow(x,i); //считаем сумму
			
			}
		
			return Sum;
		}
};

int main ()
{

	size_t N;
	float x;
	float SUM;

	std::cout<<"Введите размерность полинома N:"<<std::endl;
	std::cin>>N; //задаем размерность полинома
	
	Polynom P = Polynom(N); //создаем объект класса Полином

	std::cout<<"Введите значение переменной X"<<std::endl;
	std::cin>>x; //вводим значение переменной X

	SUM=P.CalcSum(x);

	std::cout<<"Сумма полинома: "<<SUM<<std::endl; //вывод значения суммы

	system("pause");
	return 0;
}
