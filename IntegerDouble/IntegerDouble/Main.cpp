#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    double a;
    cin >> a;
    if (a == int(a))
    {
        cout << "Целое";
    }
    else
    {
        cout << "Вещественное";
    }
    cout << endl;
    system("pause");
    return 0;
}
