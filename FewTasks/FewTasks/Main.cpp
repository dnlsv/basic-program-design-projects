#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");

	//1
	srand(time(NULL));
	int a = 100;
	int b = 999;
	int number = 414;// rand() % (b - a + 1) + a;
	cout <<"�������� �����: "<< number << endl;
	//a
	int n, m, p, q;
	n = number / 100; 
	m = (number - n * 100) / 10;
	p = number % 10;
	q = 100 * p + 10 * m + n;
	cout << "����� � �������� �������: " << q << endl;
	//b
	int w;
	double r;
	w = n * m * p;
	r = pow(w, 1. / 3);
	cout << "������� ��������������: " << r << endl;
	//c
	int z, x, y, v;
	if (n % 2 ==0)  z = 1;
	else z = 0;
	if (m % 2 == 0)  x = 1;
	else x = 0;
	if (p % 2 == 0)  y = 1;
	else y = 0;
	v = z + x + y;
	cout <<"���������� ������ ����: "<< v << endl;
	 
	//2
	switch (n)
	{
	case 1: cout << "��� ";
		break;
	case 2: cout << "������ ";
		break;
	case 3: cout << "������ ";
		break;
	case 4: cout << "��������� ";
		break;
	case 5: cout << "������� ";
		break;
	case 6: cout << "�������� ";
		break;
	case 7: cout << "������� ";
		break;
	case 8: cout << "��������� ";
		break;
	case 9: cout << "��������� ";
		break;
	}

	if (m == 1) {
		switch (p)
		{
		case 0: cout << "������ " << endl;
			break;
		case 1: cout << "����������� " << endl;
			break;
		case 2: cout << "���������� " << endl;
			break;
		case 3: cout << "���������� " << endl;
			break;
		case 4: cout << "������������ " << endl;
			break;
		case 5: cout << "���������� " << endl;
			break;
		case 6: cout << "����������� " << endl;
			break;
		case 7: cout << "���������� " << endl;
			break;
		case 8: cout << "������������ " << endl;
			break;
		case 9: cout << "������������ " << endl;
			break;
		}
	}
	else {
		switch (m)
		{
		case 2: cout << "�������� ";
			break;
		case 3: cout << "�������� ";
			break;
		case 4: cout << "����� ";
			break;
		case 5: cout << "��������� ";
			break;
		case 6: cout << "���������� ";
			break;
		case 7: cout << "��������� ";
			break;
		case 8: cout << "����������� ";
			break;
		case 9: cout << "��������� ";
			break;
		}

		switch (p)
		{
		case 1: cout << "���� " << endl;
			break;
		case 2: cout << "��� " << endl;
			break;
		case 3: cout << "��� " << endl;
			break;
		case 4: cout << "������ " << endl;
			break;
		case 5: cout << "���� " << endl;
			break;
		case 6: cout << "����� " << endl;
			break;
		case 7: cout << "���� " << endl;
			break;
		case 8: cout << "������ " << endl;
			break;
		case 9: cout << "������ " << endl;
			break;
		}


	}

   //3
	int d=2,t;
	cout << "������� ����� � ��������� [2; " << number << "]:" << endl;
	for (d = 2; d<= number; d++) {
		int q = 2;
		bool flag = true;
		while (q <= sqrt((double)d) && flag)
		{
			if (d%q == 0)  flag = false;
			q++;
		}
		if (flag) cout << d << " " ;
	}
	
	system("pause");
}