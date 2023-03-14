#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int N = 5;

void main()
{
    setlocale(LC_ALL, ".UTF8");
    int arr[N];
    srand(time(NULL));
    int a, b;
    cout << "Укажите интервал" << endl;
    cin >> a >> b;
    cout << "Интервал: [" << a << "," << b << "]" << endl;
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % (b - a + 1) + a;
    }

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = a;
    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Максимальный элемент массива = " << max << endl;

    int min = b;
    for (int i = 0; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Минимальный элемент массива = " << min << endl;

    int i, j, r;
    cout << "По возрастанию:" << endl;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                r = arr[i];
                arr[i] = arr[j];
                arr[j] = r;
            }
        }
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "По убыванию:" << endl;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[i] < arr[j]) {
                r = arr[i];
                arr[i] = arr[j];
                arr[j] = r;
            }
        }
        cout << arr[i] << " ";
    }
    cout << endl;

    int kol = 0;
    for (i = 0; i < N; i++) {
        if (arr[i] % 2 != 0) {
            arr[kol++] = arr[i];
        }
    }
    cout << "Массив без четных элементов:" << endl;
    for (i = 0; i < kol; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
}
