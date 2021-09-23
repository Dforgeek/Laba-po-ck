#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int input_com;
    long double a, b;
    cout << ("Enter 2 integer numbers\n>");
    cin >> a >> b;
    cout << ("What do you want to do with this numbers?\n");
    cout << ("Enter \"1\", \"2\", \"3\", \"4\" for addition, subtraction, multiplication or dividing \n>");
    cin >> input_com;
    if (input_com == 1) {
        cout << "And the result is:" << (a + b);
    } else if (input_com == 2) {
        cout << "And the result is:" << (a - b);
    } else if (input_com == 3) {
        cout << setprecision(3) << fixed;
        cout << "And the result is:" << (a * b);
    } else if (input_com == 4) {
        cout << setprecision(3) << fixed;
        cout << "And the result is:"  << (a / b);
    }
    return 0;
}
