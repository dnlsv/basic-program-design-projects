#include <iostream>

using namespace std;

void main()
{
    setlocale(LC_ALL, ".UTF8");
    int number;
    cout << "Введите число" << endl;
    cin >> number;
    int i = 2;
    bool flag = true;
    while (i <= sqrt(number) && flag)
    {
        if (number % i == 0) flag = false;
        i++;
    }
    if (number == 1) cout << "1 - ни простое, ни составное" << endl;
    else if (flag) cout << "Простое" << endl;
    else cout << "Составное" << endl;
    system("pause");
}
