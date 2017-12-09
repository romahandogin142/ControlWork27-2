#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <cmath>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
start:
	int nz = 0;
	cout << "Введите номер задания : ";
	cin >> nz;
	system("cls");

	// Дана величина Z, выражающая объем информации в байтах. Перевести Z в более крупные единицы измерения информации
	if (nz == 1)
	{
		char in = 0;
		cout << " Из чего переводим a-бит; b-байт; c-килобит: ";
		cin >> in;

		char out = 0;
		cout << " В какое переводим a-бит; b-байт; c-килобит: ";
		cin >> out;

		float number;
		cout << "Введите число: ";
		cin >> number;
		number = abs(number);

		float result = 0;
		if (in == 'a' && out == 'a')
		{
			cout << number << " бит = " << result << " бит";
			result = number / 1;
		}


		else if (in == 'a' && out == 'b')
		{
			result = number / 8;
			cout << number << " бит = " << result << " байт";
		}
		else if (in == 'a' && out == 'c')
		{
			result = number / 1000;
			cout << number << " бит = " << result << " килобит";
		}
		else if (in == 'b' && out == 'a')
		{
			result = number * 8;
			cout << number << " байт = " << result << " бит";
		}
		else if (in == 'b' && out == 'b')
		{
			result = number * 1;
			cout << number << " байт = " << result << " байт";
		}
		else if (in == 'b' && out == 'c')
		{
			result = number * 8 / 1000;
			cout << number << " байт = " << result << " килобит";
		}
		else if (in == 'c' && out == 'a')
		{
			result = number * 1000;
			cout << number << " килобит = " << result << " бит";
		}
		else if (in == 'c' && out == 'b')
		{
			result = number * 1024;
			cout << number << " килобит = " << result << " бaйт";
		}
		else if (in == 'c' && out == 'c')
		{
			result = number * 1;
			cout << number << " килобит = " << result << " килобит";
		}
		system("pause");
		system("cls");
		goto start;

	}

	else if (nz == 2)
	{
		// Задано расстояние L в сантиметрах.Найти количество полных метров в нем, используя операцию деления нацело.
		float a, c;
		cout << "Введите число в сантиметрах = ";
		cin >> a;
		a = c / 100;
		cout << "Количество полных метров = " << a << " метра" << endl;
	}
	
	// С начала суток прошло N секунд 
	//(N — целое). Найти количество полных минут, прошедших с начала суток.
	else if (nz == 3)
	{
		float a, b;
		cout << "Введите количество секунд : ";
		cin >> a;
		b = a / 60;
		cout << "Количество минут прошло с начала суток : " << b << " минут(-а)(-ы)" << endl;
	}


	// Даны два неотрицательных числа a и b.Найти их среднее геометрическое.
	else if (nz == 4)
	{
		
		int a, b, с;
		cout << "Введите число а : ";
		cin >> a;
		cout << "Введите число b : ";
		cin >> b;
		с = sqrt(a*b);
		cout << "Среднее геометрическое  " << с << endl;
	}

	else if (nz == 5)
	{
	zad:
#define e 6.3
		//   Задание: составить структурную схему алгоритма и проект программы вычисления функции, 
		//  один параметр ввести с клавиатуры, а другой задать как константу, все вычисляемые значения вывести на экран
		int xx;
		float x, b, a, c, y, k, p, t, m, n;
		cout << "Введите номер варианта пятого задания : ";
		cin >> xx;
		if (xx == 1)
		{
			b = 0.4;
			x = 3.5;
			a = log(x);
			cout << "a= " << a << endl;
			c = pow(a, 2) + sqrt(b*x);
			cout << "c= " << c << endl;
			y = pow(e, 2 * x) + pow(9.7, c);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 2)
		{
			x = 1.3;
			k = 4;
			a = log(fabs(x));
			cout << "a= " << a << endl;
			b = pow(e, 2 * x) + a*x;
			y = x*pow(a, 3) + pow(b, 2);
			cout << "y= " << y << endl;
			cout << "b= " << b << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 3)
		{
			x = 2.1;
			p = 1;
			a = pow(e, sqrt(fabs(x)));
			cout << "a= " << a << endl;
			b = (sin(pow(p, 2)) + pow(x, 3));
			cout << "b= " << b << endl;
			y = pow(a, 3) / pow(b, 2);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 4)
		{
			x = 2.7;
			t = -6;
			a = log(x);
			cout << "a= " << a << endl;
			b = sqrt(pow(x, 2) + pow(t, 2));
			cout << "b= " << b << endl;
			y = pow(fabs(a - b*x), 1 / 5);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 5)
		{
			t = 4.1;
			p = 3;
			k = sqrt(p*t);
			cout << "k= " << k << endl;
			x = p*pow(t, 2) + sqrt(k);
			cout << "x= " << x << endl;
			y = pow(tan(pow(x, 2)), 3) + k*t;
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 6)
		{
			m = 2;
			x = 1.1;
			a = sqrt(fabs(x));
			cout << "a= " << a << endl;
			b = pow(x, 4) + pow(m, 2);
			cout << "b= " << b << endl;
			y = sin(2)*(a + tan(3)*b);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 7)
		{
			x = 8.52;
			c = 9;
			b = x + pow(c, 2);
			cout << "b= " << b << endl;
			a = pow(fabs(b + c), 1 / 3);
			cout << "a= " << a << endl;
			y = cos(2)*b + b*cos(4)*pow(a, 2);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 8)
		{
			x = 0.9;
			t = 2;
			b = log(2)*fabs(x);
			cout << "b= " << b << endl;
			a = t*x + sqrt(fabs(b));
			cout << "a= " << a << endl;
			y = cos(3)*(a + pow(b, 3));
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 9)
		{
			x = -8;
			b = 9.5;
			a = sqrt(fabs(x)) + pow(e, sqrt(b));
			cout << "a= " << a << endl;
			c = log(a + pow(b, 2));
			cout << "c= " << c << endl;
			y = pow(a, 3) / cos(c);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 10)
		{
			x = 4;
			a = 3.7;
			t = pow(x, 2) + pow(a, 2);
			cout << "t= " << t << endl;
			p = pow(x, 2) - sqrt(fabs(x));
			cout << "p= " << p << endl;
			y = x*pow(p, 2) + pow(t, 5);
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 11)
		{
			x = 1.4;
			p = 1.6;
			a = log(fabs(x));
			cout << "a= " << a << endl;
			b = pow(x, 4) + log(pow(p, 3));
			cout << "b= " << b << endl;
			y = sin(3)*a*x + sqrt(b)*cos(pow(x, 2));
			cout << "y= " << y << endl;
			system("pause");
			system("cls");
			goto start;
		}
		else if (xx == 12)
		{
			n = 7.1;
			b = 2.6;
			x = pow(n, b) + pow(b, 2);
			cout << "x= " << x << endl;
			a = sin(pow(x, 2) + pow(b, 2));
			cout << "a= " << a << endl;
			y = log(a) / log(pow(b, 3));
			cout << "y= " << y << endl;
		}
		else if (xx >= 0)
		{
			cout << "Такого задания несуществует!\n";
			system("pause");
			system("cls");
			goto zad;
		}

	}

	else if (nz == 6)
	{
	zady:
		//  Задание: составить структурную схему алгоритма и проект программы, исходные данные ввести с клавиатуры, результат вывести на экран
		int xx;
		cout << "Введите номер варианта 6-ого задания : ";
		cin >> xx;


		 /*Тело движется по закону S =t3 – 3t2 + 2. Вычислить скорость тела в момент времени t. Значение t
		ввести с клавиатуры (Функция скорости есть производная от функции расстояния по времени).*/
		if (xx == 1)
		{
			int a, b;
			cout << "Введите A : ";
			cin >> a;
			b = pow(a, 3) - 3 * pow(a, 2) + 2;
			cout << "Число  B = " << b << endl;
		}

		 /*Найти корни квадратного уравнения a·x2 + b·x + c = 0, введя 
		с экрана коэффициенты a, b, c (коэффициент a не равен 0), для которых дискриминант положителен*/
		else if (xx == 2)
		{
			
			float a, b, c, d;
			cout << "Введите a : ";
			cin >> a;
			cout << "Введите b : ";
			cin >> b;
			cout << "Введите c : ";
			cin >> c;
			d = pow(b, 2) - 4 * a*c;
			cout << "Корни квадратного уровнения = " << d << endl;
			system("pause");
			system("cls");
			goto start;
		}


		//// Вычислить корень уравнения 2x/a +b-12=0 
		//при различных значениях параметров a, b. Значения a, b ввести с экрана
		else if (xx == 3)
		{
			float a, b, c;
			cout << "Введите a";
			cin >> a;
			cout << "Введите  ";
			cin >> b;
			c = ((12 - b)*a) / 2;
			cout << "Корень уровнения равен " << c << endl;
			
		}


		else if (xx == 4)

		{
			//  Вычислить рентабельность работы предприятия за месяц по формуле рент = прибыль/себестоимость?100%, 
			//  если себестоимость продукции в текущем месяце уменьшилась по сравнению с прошлым на 5 %. Значение прибыли и себестоимости за прошлый месяц ввести с экрана
			system("pause");
			system("cls");
			goto start;
		}

		//// Идет k-я секунда суток. Определить, сколько целых часов (Н) и 
		//целых минут (М) прошло с начала суток. Вывести на экран фразу: «Эточасовминут». 
		//// Вместо многоточий поставить вычисленные значения Н и М.
		else if (xx == 5)
		{
			
			int a, b, c;
			cout << "Введите количество секунд от начала суток: ";
			cin >> c;
			a = c / 3600;
			b = c / 70 / a;
			cout << "Это: " << a << " Часов " << b << " Минут" << endl;
		}



		else if (xx >= 0)
		{
			cout << "Такого варианта нету " << endl;
			system("pause");
			system("cls");
			
		}
	}

	else if (nz >= 0)
	{
		cout << "Такого задания несуществует!\n";
		system("pause");
		system("cls");
		goto start;

	}
}