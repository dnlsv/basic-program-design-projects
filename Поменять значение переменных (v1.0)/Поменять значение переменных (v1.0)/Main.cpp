#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c;
	cout << " Введите a = ";
	cin >> a;
	cout << " Введите b = ";
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << " Новое значение a = " << a << endl;
	cout << " Новое значение b = " << b << endl;
	system("pause");
}