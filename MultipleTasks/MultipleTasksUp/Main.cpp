#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
void main()
{
	setlocale(LC_ALL, "rus");
	//1
	int a, b;
	cin >> a >> b;
	srand(time(NULL));
	int secret_number = rand() % (b - a + 1) + a;  //int number = rand() % (b-a+1)+a;
	cout << "������� �����" << endl;
	int number;
	int j = 0;
	do {
		cin >> number;
		j++;
		if (number > b || number < a) {
			cout << "�������� ����" << endl;
		}
		else {
			if (secret_number > number) {
				cout << "���������� ������" << endl;
			}
			else if (secret_number < number) {
				cout << "���������� ������" << endl;
			}
		}
	} while (secret_number != number);
	cout << "�� �������!" << endl;
	cout << "���������� ������� = " << j << endl;
	 

	//2
	int num;
	num = secret_number;

	int sum = 0;
	while (secret_number != 0) {
		sum = sum + (secret_number % 10);                                                                  
		secret_number = secret_number / 10;
	} 
	cout << "����� ���� = " << sum << endl;

	//3
	int i;
	int factorial = 1;
	for (i = 2; i <= num; i++) {
		factorial = factorial * i;
	}
	cout << "��������� = " << factorial << endl;

	//4
	int p = 2;
	bool flag = true;
	while (p <= sqrt(num)&&flag) {
		if (num % p == 0) flag = false;
		p++;
	}
	if (num == 1) cout << "1  -�� �������, �� ���������" << endl;
	else if (flag) cout << "�������" << endl;
	else {
		int q=1;
		cout << "���������" << endl;
		while (q <= num / 2) {
			q++;
			if (num%q == 0) {
				cout << "��������:";
				cout << q << endl;
			}
		}
	}

	system("pause");
}