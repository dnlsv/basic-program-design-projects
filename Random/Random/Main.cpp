#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 void main()
{
	setlocale(LC_ALL, "rus");
	int guess;
	srand(time(NULL)); 
	int number = rand() % 11;
	do {
		cout << "������� �����"<<endl;
		cin >> guess;
	} while (number != guess);
	cout <<"�� �������!" << endl; 
	system("pause");
}