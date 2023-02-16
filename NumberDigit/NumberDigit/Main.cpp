#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	int count = 1;
	cout << "Введи число = ";
	cin >> number;
	while (number / 10 != 0)
	{
		number /= 10;
		count++;
	} 
	cout << "Рязрядность числа = " << count << endl;
	system("pause");
	return 0;
}