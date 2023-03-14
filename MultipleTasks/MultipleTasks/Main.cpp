#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
    setlocale(LC_ALL, ".UTF8");

    //1
    int guess, a, b;
    cout << "Введите a и b" << endl;
    cin >> a >> b;
    srand(time(NULL));
    int number = rand() % (b - a + 1) + a;  //интервал
    int p = 0;
    do {
        cout << "Введите число" << endl;

        p++;
        cin >> guess;
        if (number > guess) cout << "Загаданное больше" << endl; else if (number < guess) cout << "Загаданное меньше" << endl;
    } while (number != guess);
    cout << "Вы угадали!" << endl;
    cout << "Количество попыток = " << p << endl;
    int number1;
    number1 = number;
    //2
    int sum = 0;
    while (number != 0) {
        sum = sum + (number % 10);
        number = number / 10;
    }
    cout << "Сумма цифр = " << sum << endl;

    //3
    double factorial = 1;
    for (int i = 2; i <= number1; i++)
    {
        factorial *= i;
    }
    cout << "Факториал = " << factorial << endl;

    //4
    int q = 2;
    int w;
    bool flag = true;
    while (q <= sqrt(number1) && flag)
    {
        if (number1 % q == 0)  flag = false;
        q++;
    }
    if (number1 == 1) cout << "1 - ни простое, ни составное" << endl;
    else if (flag) cout << "Простое" << endl;
    else {
        cout << "Составное" << endl;
        cout << "Делители числа: " << endl;
        for (int w = 1; w <= number1 / 2; w++) {
            if (number1 % w == 0)
                cout << w << endl;
        }
    }

    system("pause");
}
