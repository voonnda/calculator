#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    double a, b;
    char operation;

    cout << "Введи перше число: ";
    cin >> a;

    cout << "Введи операцію (+ - * /): ";
    cin >> operation;

    cout << "Введи друге число: ";
    cin >> b;

    switch (operation) {
    case '+':
        cout << "Результат: " << a + b;
        break;
    case '-':
        cout << "Результат: " << a - b;
        break;
    case '*':
        cout << "Результат: " << a * b;
        break;
    case '/':
        if (b != 0)
            cout << "Результат: " << a / b;
        else
            cout << "Помилка: ділення на нуль!";
        break;
    default:
        cout << "Невідома операція!";
    }

    return 0;
}
