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
	cout << "������� ����� ������� : ";
	cin >> nz;
	system("cls");

	// ���� �������� Z, ���������� ����� ���������� � ������. ��������� Z � ����� ������� ������� ��������� ����������
	if (nz == 1)
	{
		char in = 0;
		cout << " �� ���� ��������� a-���; b-����; c-�������: ";
		cin >> in;

		char out = 0;
		cout << " � ����� ��������� a-���; b-����; c-�������: ";
		cin >> out;

		float number;
		cout << "������� �����: ";
		cin >> number;
		number = abs(number);

		float result = 0;
		if (in == 'a' && out == 'a')
		{
			cout << number << " ��� = " << result << " ���";
			result = number / 1;
		}


		else if (in == 'a' && out == 'b')
		{
			result = number / 8;
			cout << number << " ��� = " << result << " ����";
		}
		else if (in == 'a' && out == 'c')
		{
			result = number / 1000;
			cout << number << " ��� = " << result << " �������";
		}
		else if (in == 'b' && out == 'a')
		{
			result = number * 8;
			cout << number << " ���� = " << result << " ���";
		}
		else if (in == 'b' && out == 'b')
		{
			result = number * 1;
			cout << number << " ���� = " << result << " ����";
		}
		else if (in == 'b' && out == 'c')
		{
			result = number * 8 / 1000;
			cout << number << " ���� = " << result << " �������";
		}
		else if (in == 'c' && out == 'a')
		{
			result = number * 1000;
			cout << number << " ������� = " << result << " ���";
		}
		else if (in == 'c' && out == 'b')
		{
			result = number * 1024;
			cout << number << " ������� = " << result << " �a��";
		}
		else if (in == 'c' && out == 'c')
		{
			result = number * 1;
			cout << number << " ������� = " << result << " �������";
		}
		system("pause");
		system("cls");
		goto start;

	}

	else if (nz == 2)
	{
		// ������ ���������� L � �����������.����� ���������� ������ ������ � ���, ��������� �������� ������� ������.
		float a, c;
		cout << "������� ����� � ����������� = ";
		cin >> a;
		a = c / 100;
		cout << "���������� ������ ������ = " << a << " �����" << endl;
	}
	
	// � ������ ����� ������ N ������ 
	//(N � �����). ����� ���������� ������ �����, ��������� � ������ �����.
	else if (nz == 3)
	{
		float a, b;
		cout << "������� ���������� ������ : ";
		cin >> a;
		b = a / 60;
		cout << "���������� ����� ������ � ������ ����� : " << b << " �����(-�)(-�)" << endl;
	}


	// ���� ��� ��������������� ����� a � b.����� �� ������� ��������������.
	else if (nz == 4)
	{
		
		int a, b, �;
		cout << "������� ����� � : ";
		cin >> a;
		cout << "������� ����� b : ";
		cin >> b;
		� = sqrt(a*b);
		cout << "������� ��������������  " << � << endl;
	}

	else if (nz == 5)
	{
	zad:
#define e 6.3
		//   �������: ��������� ����������� ����� ��������� � ������ ��������� ���������� �������, 
		//  ���� �������� ������ � ����������, � ������ ������ ��� ���������, ��� ����������� �������� ������� �� �����
		int xx;
		float x, b, a, c, y, k, p, t, m, n;
		cout << "������� ����� �������� ������ ������� : ";
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
			cout << "������ ������� ������������!\n";
			system("pause");
			system("cls");
			goto zad;
		}

	}

	else if (nz == 6)
	{
	zady:
		//  �������: ��������� ����������� ����� ��������� � ������ ���������, �������� ������ ������ � ����������, ��������� ������� �� �����
		int xx;
		cout << "������� ����� �������� 6-��� ������� : ";
		cin >> xx;


		 /*���� �������� �� ������ S =t3 � 3t2 + 2. ��������� �������� ���� � ������ ������� t. �������� t
		������ � ���������� (������� �������� ���� ����������� �� ������� ���������� �� �������).*/
		if (xx == 1)
		{
			int a, b;
			cout << "������� A : ";
			cin >> a;
			b = pow(a, 3) - 3 * pow(a, 2) + 2;
			cout << "�����  B = " << b << endl;
		}

		 /*����� ����� ����������� ��������� a�x2 + b�x + c = 0, ����� 
		� ������ ������������ a, b, c (����������� a �� ����� 0), ��� ������� ������������ �����������*/
		else if (xx == 2)
		{
			
			float a, b, c, d;
			cout << "������� a : ";
			cin >> a;
			cout << "������� b : ";
			cin >> b;
			cout << "������� c : ";
			cin >> c;
			d = pow(b, 2) - 4 * a*c;
			cout << "����� ����������� ��������� = " << d << endl;
			system("pause");
			system("cls");
			goto start;
		}


		//// ��������� ������ ��������� 2x/a +b-12=0 
		//��� ��������� ��������� ���������� a, b. �������� a, b ������ � ������
		else if (xx == 3)
		{
			float a, b, c;
			cout << "������� a";
			cin >> a;
			cout << "�������  ";
			cin >> b;
			c = ((12 - b)*a) / 2;
			cout << "������ ��������� ����� " << c << endl;
			
		}


		else if (xx == 4)

		{
			//  ��������� �������������� ������ ����������� �� ����� �� ������� ���� = �������/�������������?100%, 
			//  ���� ������������� ��������� � ������� ������ ����������� �� ��������� � ������� �� 5 %. �������� ������� � ������������� �� ������� ����� ������ � ������
			system("pause");
			system("cls");
			goto start;
		}

		//// ���� k-� ������� �����. ����������, ������� ����� ����� (�) � 
		//����� ����� (�) ������ � ������ �����. ������� �� ����� �����: ��������������. 
		//// ������ ���������� ��������� ����������� �������� � � �.
		else if (xx == 5)
		{
			
			int a, b, c;
			cout << "������� ���������� ������ �� ������ �����: ";
			cin >> c;
			a = c / 3600;
			b = c / 70 / a;
			cout << "���: " << a << " ����� " << b << " �����" << endl;
		}



		else if (xx >= 0)
		{
			cout << "������ �������� ���� " << endl;
			system("pause");
			system("cls");
			
		}
	}

	else if (nz >= 0)
	{
		cout << "������ ������� ������������!\n";
		system("pause");
		system("cls");
		goto start;

	}
}