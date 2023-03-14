#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    int x, y, z;
    x = number % 10;
    y = (number / 10) % 10;
    z = number / 100;
    int sum = 0;
    sum = x + y + z;
    cout << sum << endl;
    system("pause");
}
