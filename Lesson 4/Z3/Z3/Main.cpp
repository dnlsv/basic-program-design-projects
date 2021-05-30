#include <iostream>

using namespace std;
void main()
{
	int number;
	double factorial = 1;
	cin >> number;
	for (int i = 2; i <= number; i++)
	{
		factorial *= i;
	}
	cout << factorial << endl;
	system("pause");
}
