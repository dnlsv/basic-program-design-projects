#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void main()
{
    setlocale(LC_ALL, ".UTF8");

    //1
    int a, b;
    cin >> a >> b;
    srand(time(NULL));
    int secret_number = rand() % (b - a + 1) + a;  //int number = rand() % (b-a+1)+a;
    cout << "Введите число" << endl;
    int number;
    int j = 0;
    do {
        cin >> number;
        j++;
        if (number > b || number < a) {
            cout << "Неверный ввод" << endl;
        }
        else {
            if (secret_number > number) {
                cout << "Загаданное больше" << endl;
            }
            else if (secret_number < number) {
                cout << "Загаданное меньше" << endl;
            }
        }
    } while (secret_number != number);
    cout << "Вы угадали!" << endl;
    cout << "Количетсво попыток = " << j << endl;


    //2
    int num;
    num = secret_number;

    int sum = 0;
    while (secret_number != 0) {
        sum = sum + (secret_number % 10);
        secret_number = secret_number / 10;
    }
    cout << "Сумма цифр = " << sum << endl;

    //3
    int i;
    int factorial = 1;
    for (i = 2; i <= num; i++) {
        factorial = factorial * i;
    }
    cout << "Факториал = " << factorial << endl;

    //4
    int p = 2;
    bool flag = true;
    while (p <= sqrt(num) && flag) {
        if (num % p == 0) flag = false;
        p++;
    }
    if (num == 1) cout << "1  -ни простое, ни составное" << endl;
    else if (flag) cout << "Простое" << endl;
    else {
        int q = 1;
        cout << "Составное" << endl;
        while (q <= num / 2) {
            q++;
            if (num % q == 0) {
                cout << "Делитель:";
                cout << q << endl;
            }
        }
    }

    system("pause");
}
