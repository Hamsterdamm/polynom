#include <iostream>
#include <math.h>


//��������� ����� �������
class Polynom
{
	private: 
		size_t number;
		float Sum; //���������� ��� ����������� �������� � �������� �����
		int* ptrcoefArr; //��������� �� ������ �������������


	public:
		Polynom (int N):number(N)//�����������
		{
			ptrcoefArr=new int [number]; //������� ������ ������ �������������

			for (size_t i= 0; i<number; i++) //��������� ������ ������ �������������
			{
				std::cout<<"������� ����������� A"<<i<<std::endl;
				std::cin>>ptrcoefArr[i];
			}
		}

		~Polynom()
		{
			if (ptrcoefArr!= nullptr)
				delete[] ptrcoefArr;
		}

		float CalcSum(int x) //������� �����
		{
			Sum=0;

			for (size_t i=0; i<number; i++) //��������� ������ ������ ������ ��������
			{
			Sum+= ptrcoefArr[i] * std::pow(x,i); //������� �����
			
			}
		
			return Sum;
		}
};

int main ()
{

	int N, x;
	float SUM;

	std::cout<<"������� ����������� �������� N:"<<std::endl;
	std::cin>>N; //������ ����������� ��������
	
	Polynom P = Polynom(N); //������� ������ ������ �������

	std::cout<<"������� �������� ���������� X"<<std::endl;
	std::cin>>x; //������ �������� ���������� X

	SUM=P.CalcSum(x);

	std::cout<<"����� ��������: "<<SUM<<std::endl; //����� �������� �����

	system("pause");
	return 0;
}
