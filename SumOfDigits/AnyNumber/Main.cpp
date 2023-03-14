#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
    setlocale(LC_ALL, ".UTF8");
    int n;
    int sum = 0;

    cout << "please, enter n = ";
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "sum = " << sum << endl;
    system("pause");
}
