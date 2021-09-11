#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    system("chcp 1251");
    int input_com;
    long long a, b;
    cout << ("Впиши два любых целых числа через пробел\n>");
    cin >> a >> b;
    cout << ("Какую операцию между этими двумя числами ты хочешь произвести?\n");
    cout << ("Впиши 1, 2, 3, 4 для сложения, вычитания, умножения, деления соответсвенно\n>");
    cin >> input_com;
    if (input_com == 1) {
        cout << "Результат таков:" << (a + b);
    } else if (input_com == 2) {
        cout << "Результат таков:" << (a - b);
    } else if (input_com == 3) {
        cout << "Результат таков:" << (a * b);
    } else if (input_com == 4) {
        cout << "Результат таков:" << setprecision(3) << (double) (a / b);
    }
    return 0;
}
