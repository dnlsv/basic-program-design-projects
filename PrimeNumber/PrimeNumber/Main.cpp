#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int number;
	cout << "������� �����" << endl;
	cin >> number;
	int i = 2;
	bool flag = true;
	while (i <= sqrt(number) && flag)
	{
		if (number%i == 0) flag = false;
		i++;
	}
	if (number == 1) cout << "1 - �� �������, �� ���������" << endl;
	else if (flag) cout << "�������"<<endl;
	else cout << "���������" << endl;
	system("pause");
}