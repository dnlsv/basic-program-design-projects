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
		cout << "Введите число"<<endl;
		cin >> guess;
	} while (number != guess);
	cout <<"Вы угадали!" << endl; 
	system("pause");
}