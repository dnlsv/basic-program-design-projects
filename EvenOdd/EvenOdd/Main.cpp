#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    int number;
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Четное" << endl;
    }
    else
    {
        cout << "Нечетное" << endl;
    }
    system("pause");
    return 0;
}
