#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "������" << endl;
	}
	else
	{
		cout << "��������" << endl;
	}
	system("pause");
	return 0;
}