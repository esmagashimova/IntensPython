#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Введите длину первого отрезка:  ";
    cin >> a;
    cout << "Введите длину второго отрезка:  ";
    cin >> b;
    cout << "Введите длину третьего отрезка: ";
    cin >> c;

    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
        cout << "Из этих отрезков можно построить треугольник." << endl;
    else
        cout << "Из этих отрезков нельзя построить треугольник." << endl;
    return 0;
}