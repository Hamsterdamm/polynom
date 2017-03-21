#include <iostream>

class Polynom
{
private:
	int number, Sum;
	int* ptrcoefArr;
	int* ptrmulArr;

public:
	Polynom (int N)
	{
		number=N;
		ptrcoefArr=new int [number];
		for (int i= 0; i<number; i++)
		{
			std::cout<<"Введите коэффициент A"<<i<<std::endl;
			std::cin>>ptrcoefArr[i];
		}
		
	}

	int CalcSum(int x)
	{
		ptrmulArr=new int [number];
		Sum=0;

		for (int i=0; i<number; i++)
		{
		ptrmulArr[i]=ptrcoefArr[i]*x^i;
		Sum+=ptrmulArr[i];

		}
		
		return Sum;
	}




};

int main ()
{

	int N, x, SUM;


	std::cout<<"Введите размерность полинома N:"<<std::endl;
	std::cin>>N;
	
	Polynom P = Polynom(N);
	std::cout<<"Введите значение переменной X"<<std::endl;
	std::cin>>x;
	SUM=P.CalcSum(x);

	std::cout<<"Сумма полинома: "<<SUM<<std::endl;

	system("pause");

	return 0;
}
