#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<math.h>
using namespace std;
void main()

{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n;
	cout << "Введите номер задания";
	cin >> n;
	switch (n)
	{// 1.	Дано целое число в двоичной системе счисления, т.е. последовательность цифр  0 и 1. 
		//Составить программу перевода этого числа в десятичную систему счисления
	case 1: {

		int a, i = 19, m[20], k = 0;
		cout << "введите число а:";
		cin >> a;
		while (a > 0)
		{

			if (a % 2 != 0)

				m[i] = 1;

			else
				m[i] = 0;


			a = a / 2;

			i--;

		}

		for (i = 0; i < 20; i++)
		{
			if (m[i] >= 0)
			{
				cout << m[i] << endl;
				k++;
			}
		}
		cout << k << endl;
		a = 0;
		int j = 19;
		for (i = 0; i < k; i++)
		{
			a += m[j] * pow(2, i);
			j--;
		}

		cout << " a= " << a << endl;
	}
			break;

			// 2.	В прямоугольной матрице найти наибольший из минимальных элементов строк матрицы

	case 2: {
		int m[4][4] = { {0},{0} }, b[4];
		int min;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				m[i][j] = 0 + rand() % 100;
			}
		}

		for (int i = 0; i < 4; i++)
		{
			min = m[i][0];
			for (int j = 0; j < 4; j++)
			{
				cout << m[i][j] << "\t";

				if (min > m[i][j])
				{
					min = m[i][j];
				}
			}

			b[i] = min;
			cout << min << endl;
		}

		for (int i = 0; i < 4; i++)
		{
			for (int j = 3; j >= 0; j--)
			{
				if (b[j] < b[j - 1])
				{
					int k = b[j - 1];
					b[j - 1] = b[j];
					b[j] = k;
				}
			}

			cout << b[i] << endl;
		}


		cout << "MAX from MIN " << b[3] << endl;


	}
			break;

			//3.	Ввести массив, состоящий из 15-ти элементов (двузначные целые числа). 
			//Изменить разрядность цифр, образующих элементы исходного массива и, таким образом, сформировать новый массив. 
			//Например, исходный массив: 25 71 84…, новый массив: 52 17 48….
	case 3:	{
		
		int m[15] = {0};
				
		for ( int j = 0; j <= 14; j++)
		{
			
				m[j] = 10 + rand()% 99;
				cout << m[j] << "\t";
		}
		
		cout << endl;
		for (int j = 0; j <= 14; j++)
		{

			int k = m[j] / 10;
			int k1 = m[j] % 10;
			m[j] = k1 * 10 + k;
			cout << m[j] << "\t";
		}
		cout << endl;

	}break;

	case 4:
	{
		//4.	Ввести массив, состоящий из 9 элементов (девять двузначных чисел в восьмеричной системе счисления) .
		//Сформировать новый массив  путем перевода значений элементов исходного массива в десятичную систему счисления

		int m[5][3] = { {0},{0},{0} };
		for (int j = 0; j <= 4; j++)
		{
			m[j][0] = 10 + rand() % 99;
			m[j][1] = m[j][0] / 10;
			m[j][2] = m[j][0] % 10;
			cout << m[j] << "\t";
		}
		cout << endl;
		int sum = 0, I = 0;
		for (int j = 0; j <= 4; j++)
		{
			sum = 0;
			for (int i = 0; i < 3; i++)
				cout << m[j][i] << "\t";
			I = 1;
			for (int i = 1; i >= 0; i--)
			{
				sum += m[j][I] * pow(8, i);
				I++;
				cout << sum << endl;


			}

		}
	}break;

	}

}
