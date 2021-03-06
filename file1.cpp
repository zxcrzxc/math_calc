#include "stdafx.h"
#include "iostream"
#include "conio.h"
#include <fstream>
#include <iostream>
#include <cstringt.h>
#include <iomanip>
#include <cmath>

enum menu {
	EXIT, ADDITION, SUBTRACTION,
	MULTIPLICATION, DIVISION, RISE_TO_THE_DEGREE,
	CALCULATING_THE_ROOT, SOLUTION_OF_THE_SQUARE_EQUATION,
	END
};
int Menu();
struct IMAGINARY
{
	double real;
	double im;
};
struct COMPLEX
{
	double real;
	double idle;
};
void _tmain()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int CmdMenu;		// команды меню
	for (;;)
	{
		CmdMenu = Menu();
		switch (CmdMenu)
		{
			// Bыход
		case EXIT:
			return;
			break;
		case ADDITION:
		{
			int choise = 3;
			while (choise != 1 || choise != 2)
			{
				std::cout << "Введите 1 если необходимо сложить действительные числа ";
				std::cout << "\nВведите 2 если необходимо сложить комплексные числа ";
				std::cin >> choise;
				if (choise == 1)
				{
					double a, b, c;
					std::cout << "\nВведите 2 числа для сложения"
						<< std::endl;
					std::cin >> a >> b;
					c = a + b;
					std::cout << "Результат вычислений: " << c
						<< std::endl << std::endl;
					break;
				}
				if (choise == 2)
				{
					double Real1, Real2, Idle1, Idle2;
					COMPLEX Sum;
					std::cout << "\nВведите действительную часть первого числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real1 >> Idle1;
					std::cout << "\nВведите действительную часть второго числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real2 >> Idle2;
					Sum.real = Real1 + Real2;
					Sum.idle = Idle1 + Idle2;

						if (Sum.real == 0 && Sum.idle == 0)
						{
							std::cout << "Ответ:" << "0" << std::endl;
						}
						if (Sum.real == 0 && Sum.idle != 0)
						{
							std::cout << "Ответ: " << Sum.idle << 'i'
								<< std::endl;
						}

						if (Sum.real != 0 && Sum.idle == 0)
						{
							std::cout << "Ответ: " << Sum.real << std::endl;
						}

						if (Sum.real != 0 && Sum.idle > 0)
						{
							std::cout << "Ответ: " << Sum.real << "+" << Sum.idle
								<< 'i' << std::endl;
						}

						if (Sum.real != 0 && Sum.idle < 0)
						{
							std::cout << "Ответ: " << Sum.real << Sum.idle << 'i'
								<< std::endl;
						}

						else
						{
							std::cout << "Неверное действие" << std::endl;
						}

				system("pause");
				break;
				}
			}
		}

		case SUBTRACTION:
		{
			int choise = 3;
			while (choise != 1 || choise != 2)
			{
				std::cout << "Введите 1 если необходимо совершить вычитание действительных чисел ";
				std::cout << "\nВведите 2 если необходимо совершить вычитание комплексных чисел ";
				std::cin >> choise;
				if (choise == 1)
				{
					double a, b, c;
					std::cout << "\nВведите уменьшаемое число и вычитаемое"
						<< std::endl;
					std::cin >> a >> b;
					c = a - b;
					std::cout << "Результат вычислений: " << c
						<< std::endl << std::endl;
					break;
				}

				if (choise == 2)
				{
					double Real1, Real2, Idle1, Idle2;
					COMPLEX Sub;
					std::cout << "\nВведите действительную часть первого числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real1 >> Idle1;
					std::cout << "\nВведите действительную часть второго числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real2 >> Idle2;

					Sub.real = Real1 - Real2;
					Sub.idle = Idle1 - Idle2;

					if (Sub.real == 0 && Sub.idle == 0)
					{
						std::cout << "Ответ:" << "0" << std::endl;
					}
					if (Sub.real == 0 && Sub.idle != 0)
					{
						std::cout << "Ответ: " << Sub.idle << 'i' << std::endl;
					}

					if (Sub.real != 0 && Sub.idle == 0)
					{
						std::cout << "Ответ: " << Sub.real << std::endl;
					}

					if (Sub.real != 0 && Sub.idle > 0)
					{
						std::cout << "Ответ: " << Sub.real << "+" << Sub.idle << 'i'
							<< std::endl;
					}

					if (Sub.real != 0 && Sub.idle < 0)
					{
						std::cout << "Ответ: " << Sub.real << Sub.idle << 'i'
							<< std::endl;
					}

					else
					{
						std::cout << "Неверное действие" << std::endl;
					}

				system("pause");
				break;
				}
			}
		}

		case MULTIPLICATION:
		{
			int choise = 3;
			while (choise != 1 || choise != 2)
			{
				std::cout << "Введите 1 если необходимо совершить умножение действительных чисел ";
				std::cout << "\nВведите 2 если необходимо совершить умножение комплексных чисел ";
				std::cin >> choise;
				if (choise == 1)
				{
					double a, b, c;
					std::cout << "\nВведите 2 числа для умножения"
						<< std::endl;
					std::cin >> a >> b;
					c = a * b;
					std::cout << "Результат вычислений: " << c
						<< std::endl << std::endl;
					break;
				}

				if (choise == 2)
				{
					double Real1, Real2, Idle1, Idle2;
					COMPLEX Mult;
					std::cout << "\nВведите действительную часть первого числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real1 >> Idle1;
					std::cout << "\nВведите действительную часть второго числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real2 >> Idle2;

					Mult.real = (Real1 * Real2) - (Idle1 * Idle2);
					Mult.idle = (Idle1 * Real2) + (Real1 * Idle2);

					if (Mult.real == 0 && Mult.idle == 0)
					{
						std::cout << "Ответ:" << "0" << std::endl;
					}
					if (Mult.real == 0 && Mult.idle != 0)
					{
						std::cout << "Ответ: " << Mult.idle << 'i' << std::endl;
					}

					if (Mult.real != 0 && Mult.idle == 0)
					{
						std::cout << "Ответ: " << Mult.real << std::endl;
					}

					if (Mult.real != 0 && Mult.idle > 0)
					{
						std::cout << "Ответ: " << Mult.real << "+" << Mult.idle << 'i'
							<< std::endl;
					}

					if (Mult.real != 0 && Mult.idle < 0)
					{
						std::cout << "Ответ: " << Mult.real << Mult.idle << 'i'
							<< std::endl;
					}

					else
					{
						std::cout << "Неверное действие" << std::endl;
					}

					break;
				}
			}
		}

		case DIVISION:
		{
			int choise = 3;
			while (choise != 1 || choise != 2)
			{
				std::cout << "Введите 1 если необходимо совершить деление действительных чисел ";
				std::cout << "\nВведите 2 если необходимо совершить деление комплексных чисел ";
				std::cin >> choise;
				if (choise == 1)
				{
					double a, b, c;
					std::cout << "\nВведите делимое число" << std::endl;
					std::cin >> a;
					std::cout << "Введите делитель" << std::endl;
					std::cin >> b;
					c = a / b;
					std::cout << "Результат вычислений: " << c
						<< std::endl << std::endl;
					break;
				}
				if (choise == 2)
				{
					double Real1, Real2, Idle1, Idle2;
					COMPLEX Divis;
					std::cout << "\nВведите действительную часть первого числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real1 >> Idle1;
					std::cout << "\nВведите действительную часть второго числа и его мнимую часть "
						<< std::endl;
					std::cin >> Real2 >> Idle2;

					Divis.real = (Real1 * Real2 + Idle1 * Idle2) /
						(Real2 * Real2 + Idle2 * Idle2);
					Divis.idle = (Idle1 * Real2 - Real1 * Idle2) /
						(Real2 * Real2 + Idle2 * Idle2);

					if (Divis.real == 0 && Divis.idle == 0)
					{
						std::cout << "Ответ:" << "0" << std::endl;
					}
					if (Divis.real == 0 && Divis.idle != 0)
					{
						std::cout << "Ответ: " << Divis.idle << 'i' << std::endl;
					}

					if (Divis.real != 0 && Divis.idle == 0)
					{
						std::cout << "Ответ: " << Divis.real << std::endl;
					}

					if (Divis.real != 0 && Divis.idle > 0)
					{
						std::cout << "Ответ: " << Divis.real << "+" << Divis.idle
							<< 'i' << std::endl;
					}

					if (Divis.real != 0 && Divis.idle < 0)
					{
						std::cout << "Ответ: " << Divis.real << Divis.idle << 'i'
							<< std::endl;
					}

					else
					{
						std::cout << "Неверное действие" << std::endl;
					}

					break;
				}
			}
		}
		case RISE_TO_THE_DEGREE:
		{
			double a, b, c;
			std::cout << "\nВведите возводимое в степень число" << std::endl;
			std::cin >> a;
			std::cout << "Введите степень" << std::endl;
			std::cin >> b;
			c = pow(a, b);
			std::cout << "Результат вычислений: " << c
				<< std::endl << std::endl;
			break;
		}
		case CALCULATING_THE_ROOT:
		{
			double a, b, c;
			std::cout << "\nВведите подкоренное число" << std::endl;
			std::cin >> a;
			std::cout << "Введите степень корня" << std::endl;
			std::cin >> b;
			b = 1 / b;
			c = pow(a, b);
			std::cout << "Результат вычислений: " << c
				<< std::endl << std::endl;
			break;
		}
		case SOLUTION_OF_THE_SQUARE_EQUATION:
		{
			double a, b, c;
			std::cout << "Введите коэффициенты квадратного уравнения"
				<< std::endl;
			//axx+bx+c=0
			std::cin >> a >> b >> c;
			if (a == 0)
			{
				double x;
				//bx+c=0 bx=-c x=-c/b
				x = -c / b;
				std::cout << x;
			}
			else
				if (b == 0)
				{
					//axx+c=0 axx=-c xx=-c/a x=+-c/a
					double xx, x1, x2;
					xx = -c / a;
					x1 = sqrt(xx);
					x2 = -1 * sqrt(xx);
					std::cout << "Первый корень: " <<
						x1 << "Второй корень: " << x2;;
				}
				else
					if (c == 0)
						std::cout << "Корень=0";
					else
						if (a == 0 && b == 0)
							std::cout << c << "Неверное условие";
						else
						{
							double dis;
							IMAGINARY x;
							dis = b * b - 4 * a * c;
							if (dis < 0)
							{
								double d;
								d = sqrt(dis * (-1));
								x.real = b / (2 * a);
								x.im = d / (2 * a);

								std::cout << "Первый корень:"
									<< x.real << "+" << x.im << "i"
									<< std::endl <<
									"Второй корень:"
									<< x.real << "-" << x.im << "i"
									<< std::endl;
							}
							else
								if (dis == 0)
								{
									double x;
									x = -b / (2 * a);
									std::cout << "Корень: "
										<< x;
								}
								else
								{
									double x1, x2;
									x1 = (-b + sqrt(dis)) / (2 * a);
									x2 = (-b - sqrt(dis)) / (2 * a);
									std::cout
										<< "Первый корень:"
										<< x1
										<< std::endl
										<< "Второй корень:"
										<< x2
										<< std::endl;
								}
						}
			break;
		}
		}
	}
}

int Menu()
{
	int CmdMenu;
	using namespace std;

	cout << "МЕНЮ: " << endl;
	for (;;)
	{
		cout << "";
		cout << EXIT << " - выход";
		cout << endl;
		cout << ADDITION << " - сложение ";
		cout << endl;
		cout << SUBTRACTION << " - вычитание";
		cout << endl;
		cout << MULTIPLICATION << " - умножение";
		cout << endl;
		cout << DIVISION << " - деление";
		cout << endl;
		cout << RISE_TO_THE_DEGREE << " - возведение в степень";
		cout << endl;
		cout << CALCULATING_THE_ROOT << " - вычисление корня";
		cout << endl;
		cout << SOLUTION_OF_THE_SQUARE_EQUATION << " - вычисление корня";
		cout << endl;

		cout << "Номер команды меню >> ";
		CmdMenu = _getch() - '0';
		cout << CmdMenu << endl;
		if (CmdMenu < 0 || CmdMenu >= END)
		{
			cout << " error - (такой команды нет)";
			cout << endl;
			continue;
		}
		else
			return CmdMenu;
	}
	return CmdMenu;
}
