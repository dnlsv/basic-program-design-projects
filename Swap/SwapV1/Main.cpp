#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c;
	cout << " ������� a = ";
	cin >> a;
	cout << " ������� b = ";
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << " ����� �������� a = " << a << endl;
	cout << " ����� �������� b = " << b << endl;
	system("pause");
}