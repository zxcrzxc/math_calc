
#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include <fstream>
#include <iostream>
#include <cstringt.h>
#include <iomanip>
#include <cmath>

enum menu	{EXIT,	ADDITION,	SUBTRACTION,	
			 MULTIPLICATION,	DIVISION,	RISE_TO_THE_DEGREE,
			 CALCULATING_THE_ROOT,SOLUTION_OF_THE_SQUARE_EQUATION,
			 END};
int Menu ();
struct IMAGINARY
{
	double real;
	double im;
};
void _tmain()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int CmdMenu;		// команды меню
	for (;;)
	{
	CmdMenu = Menu (); 
	switch (CmdMenu)
	{
		// Bыход
		case EXIT:
			return;
			break;
		case ADDITION:
			{
				int choise=3;
				while (choise!=1 || choise!=2)
				{
					std::cout<<"Введите 1 если...";
					std::cin>>choise;
					if (choise==1)
					{
						double a,b,c;
						std::cout<<"\nВведите 2 числа для сложения"
							<<std::endl;
						std::cin>>a>>b;
						c=a+b;
						std::cout<<"Результат вычислений: "<<c
							<<std::endl<<std::endl;
						break;
					}
					if (choise==2)
					{
						break;
					}
				}
			}

		case SUBTRACTION:
			{
				double a,b,c;
				std::cout<<"\nВведите 2 числа для вычитания"
					<<std::endl;
				std::cin>>a>>b;
				c=a-b;
				std::cout<<"Результат вычислений: "<<c
					<<std::endl<<std::endl;
				break;
			}

		case MULTIPLICATION:
			{
				double a,b,c;
				std::cout<<"\nВведите 2 числа для умножения"
					<<std::endl;
				std::cin>>a>>b;
				c=a*b;
				std::cout<<"Результат вычислений: "<<c
					<<std::endl<<std::endl;	
				break;
			}

		case DIVISION:
			{
				double a,b,c;
				std::cout<<"\nВведите делимое число"<<std::endl;
				std::cin>>a;
				std::cout<<"Введите делитель"<<std::endl;
				std::cin>>b;
				c=a/b;
				std::cout<<"Результат вычислений: "<<c
					<<std::endl<<std::endl;	
				break;
			}
		case RISE_TO_THE_DEGREE:
			{
				double a,b,c;
				std::cout<<"\nВведите возводимое в степень число"<<std::endl;
				std::cin>>a;
				std::cout<<"Введите степень"<<std::endl;
				std::cin>>b;
				c=pow(a,b);
				std::cout<<"Результат вычислений: "<<c
					<<std::endl<<std::endl;	
				break;
			}
		case CALCULATING_THE_ROOT:
			{
				double a,b,c;
				std::cout<<"\nВведите подкоренное число"<<std::endl;
				std::cin>>a;
				std::cout<<"Введите степень корня"<<std::endl;
				std::cin>>b;
				b=1/b;
				c=pow(a,b);
				std::cout<<"Результат вычислений: "<<c
					<<std::endl<<std::endl;	
				break;
			}
		case SOLUTION_OF_THE_SQUARE_EQUATION:
			{
				double a,b,c;
				std::cout<<"Введите коэффициенты квадратного уравнения"
					<<std::endl;
				//axx+bx+c=0
				std::cin>>a>>b>>c;
				if (a==0)
				{
					double x;
					//bx+c=0 bx=-c x=-c/b
					x=-c/b;
					std::cout<<x;
				}
				else
					if (b==0)
					{
						//axx+c=0 axx=-c xx=-c/a x=+-c/a
						double xx,x1,x2;
						xx=-c/a;
						x1=sqrt(xx);
						x2=-1*sqrt(xx);
						std::cout<<"Первый корень: "<<
							x1<<"Второй корень: "<<x2;;
					}
					else 
						if (c==0)
							std::cout<<"Корень=0";
						else
							if(a==0 && b==0)
								std::cout<<c<<"Неверное условие";
							else
							{
								double dis;
								IMAGINARY x;
								dis=b*b-4*a*c;
								if (dis<0)
								{
									double d;
									d=sqrt(dis*(-1));
									x.real=b/(2*a);
									x.im=d/(2*a);

									std::cout<<"Первый корень:"
										<<x.real<<"+"<<x.im<<"i"
										<<std::endl<<
										"Второй корень:"
										<<x.real<<"-"<<x.im<<"i"
										<<std::endl;
								}
								else
									if (dis==0)
									{
										double x;
										x=-b/(2*a);
										std::cout<<"Корень: "
											<<x;
									}
									else
									{
										double x1,x2;
										x1=(-b+sqrt(dis))/(2*a);
										x2=(-b-sqrt(dis))/(2*a);
										std::cout
											<<"Первый корень:"
											<<x1
											<<std::endl
											<<"Второй корень:"
											<<x2
											<<std::endl;
									}
							}
				break;
			}
  	 }
   }
}

int Menu ()
	{
		int CmdMenu;
		 using namespace std;

		 cout << "МЕНЮ: " << endl;
		 for (;;)
		 {
			 cout <<"";
			 cout <<EXIT<<" - выход";
			 cout<<endl;
			 cout <<ADDITION<<" - сложение ";
			 cout<<endl;
			 cout <<SUBTRACTION<<" - вычитание";
			 cout<<endl;
			 cout <<MULTIPLICATION<<" - умножение";
			 cout<<endl;
			 cout <<DIVISION<<" - деление";
			 cout<<endl;
			 cout <<RISE_TO_THE_DEGREE<<" - возведение в степень";
			 cout<<endl;
			 cout <<CALCULATING_THE_ROOT<<" - вычисление корня";
			 cout<<endl;
			 cout <<SOLUTION_OF_THE_SQUARE_EQUATION<<" - вычисление корня";
			 cout<<endl;
			 
			 cout << "Номер команды меню >> ";
			 CmdMenu = _getch() - '0';
			 cout << CmdMenu<<endl;
			 if (CmdMenu <0 || CmdMenu >= END)
			 {
				 cout <<" error - (такой команды нет)";
				 cout<<endl;
				 continue;
			 }
			 else
				 return CmdMenu;
		 }
		 return CmdMenu;
	}