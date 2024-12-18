#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления квадрата расстояния от точки до начала координат
int f(int x, int y) {
    return x * x + y * y;
}

// Функция нахождения ближайшей точки
void d(int x1, int y1, int x2, int y2, int x3, int y3, int& closX, int& closY) {
    int d1 = f(x1, y1);
    int d2 = f(x2, y2);
    int d3 = f(x3, y3);

    if (d1 <= d2 && d1 <= d3) {
        closX = x1;
        closY = y1;
    } else if (d2 <= d1 && d2 <= d3) {
        closX = x2;
        closY = y2;
    } else {
        closX = x3;
        closY = y3;
    }
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    int closX, closY;

    cout << "Введите координаты первой точки (x и y): ";
    cin >> x1 >> y1;

    cout << "Введите координаты второй точки (x и y): ";
    cin >> x2 >> y2;

    cout << "Введите координаты третьей точки (x и y): ";
    cin >> x3 >> y3;

    d(x1, y1, x2, y2, x3, y3, closX, closY);

    cout << "Точка, ближайшая к началу координат: (" << closX << ", " << closY << ")\n";

    return 0;
}