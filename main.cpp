#include <iostream>
#include <cmath>


//��������� ����� �������
class Polynom
{
	private: 
		size_t number;
		float Sum; //���������� ��� ����������� �������� � �������� �����
		int* ptrcoefArr; //��������� �� ������ �������������


	public:
		Polynom (size_t N):number(N)//�����������
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

		float CalcSum(float x) //������� �����
		{
			Sum=0;

			for (int i=0; i<number; i++) //��������� ������ ������ ������ ��������
			{
			Sum+= ptrcoefArr[i] * pow(x,i); //������� �����
			
			}
		
			return Sum;
		}
};

int main ()
{

	size_t N;
	float x;
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
