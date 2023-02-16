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
	cout <<"Исходное число: "<< number << endl;
	//a
	int n, m, p, q;
	n = number / 100; 
	m = (number - n * 100) / 10;
	p = number % 10;
	q = 100 * p + 10 * m + n;
	cout << "Число в обратном порядке: " << q << endl;
	//b
	int w;
	double r;
	w = n * m * p;
	r = pow(w, 1. / 3);
	cout << "Среднее геометрическое: " << r << endl;
	//c
	int z, x, y, v;
	if (n % 2 ==0)  z = 1;
	else z = 0;
	if (m % 2 == 0)  x = 1;
	else x = 0;
	if (p % 2 == 0)  y = 1;
	else y = 0;
	v = z + x + y;
	cout <<"Количество четных цифр: "<< v << endl;
	 
	//2
	switch (n)
	{
	case 1: cout << "Сто ";
		break;
	case 2: cout << "Двести ";
		break;
	case 3: cout << "Триста ";
		break;
	case 4: cout << "Четыреста ";
		break;
	case 5: cout << "Пятьсот ";
		break;
	case 6: cout << "Шестьсот ";
		break;
	case 7: cout << "Семьсот ";
		break;
	case 8: cout << "Восемьсот ";
		break;
	case 9: cout << "Девятьсот ";
		break;
	}

	if (m == 1) {
		switch (p)
		{
		case 0: cout << "десять " << endl;
			break;
		case 1: cout << "одиннадцать " << endl;
			break;
		case 2: cout << "двенадцать " << endl;
			break;
		case 3: cout << "тринадцать " << endl;
			break;
		case 4: cout << "четырнадцать " << endl;
			break;
		case 5: cout << "пятнадцать " << endl;
			break;
		case 6: cout << "шестнадцать " << endl;
			break;
		case 7: cout << "семнадцать " << endl;
			break;
		case 8: cout << "восемнадцать " << endl;
			break;
		case 9: cout << "девятнадцать " << endl;
			break;
		}
	}
	else {
		switch (m)
		{
		case 2: cout << "двадцать ";
			break;
		case 3: cout << "тридцать ";
			break;
		case 4: cout << "сорок ";
			break;
		case 5: cout << "пятьдесят ";
			break;
		case 6: cout << "шестьдесят ";
			break;
		case 7: cout << "семьдесят ";
			break;
		case 8: cout << "восемьдесят ";
			break;
		case 9: cout << "девяноста ";
			break;
		}

		switch (p)
		{
		case 1: cout << "один " << endl;
			break;
		case 2: cout << "два " << endl;
			break;
		case 3: cout << "три " << endl;
			break;
		case 4: cout << "четыре " << endl;
			break;
		case 5: cout << "пять " << endl;
			break;
		case 6: cout << "шесть " << endl;
			break;
		case 7: cout << "семь " << endl;
			break;
		case 8: cout << "восемь " << endl;
			break;
		case 9: cout << "девять " << endl;
			break;
		}


	}

   //3
	int d=2,t;
	cout << "Простые числа в интервале [2; " << number << "]:" << endl;
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