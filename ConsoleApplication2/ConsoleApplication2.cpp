// C Вариант 1
// Дано три целых числа. Вывести количество отричальных и чётных чисел

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n[4];
    int a=0;
    int b=0;
    for (int i = 1; i <= 3; i++) {
        cout << "Введите " << i << "-е число: ";
        cin >> n[i];
    }
    for (int i = 1; i <= 3; i++) { 
        if (n[i] <= 0) a++;
        if (n[i] % 2 == 0) b++;
    }

    cout << "Количество отрицательных чисел: " << a << endl;
    cout << "Количество четных чисел: " << b << endl;

    system("pause");
    return 0;
}


