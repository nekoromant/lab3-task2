// C Вариант 1
// Дано три целых числа. Вывести количество отричальных и чётных чисел

#include <iostream>

    int main() {
        setlocale(LC_ALL, "rus");
        using namespace std;
        int num1, num2, num3;
        int evenNum = 0;
        int negativуNum = 0;

        // Ввод трех натуральных чисел
        cout << "Введите три натуральных числа: "<< endl;
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите второе число: ";
        cin >> num2;
        cout << "Введите третье число: ";
        cin >> num3;
        // Проверка каждого числа на чёрное и отрицательное
        if (num1 % 2 == 0) {
            evenNum++;
        }
        if (num2 % 2 == 0) {
            evenNum++;
        }
        if (num3 % 2 == 0) {
            evenNum++;
        }
        if (num1 < 0) {
            negativуNum++;
        }
        if (num2 < 0) {
            negativуNum++;
        }
        if (num3 < 0) {
            negativуNum++;
        }

        // Вывод результата
        cout << "Количество чёрных чисел: " << evenNum << endl;
        cout << "Количество отрицательных чисел: " << negativуNum << endl;

        return 0;
    }


