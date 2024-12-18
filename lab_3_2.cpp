#include <iostream>

using namespace std;

int main() {
    int n; 
    cout << "Введите стоимость товара в копейках: ";
    cin >> n;

    int rub = n / 100;
    int kopecks = n % 100;

    cout << rub;
    switch (rub % 10) {
        case 1:
            if (rub % 100 != 11) {
                cout << " рубль ";
            } else {
                cout << " рублей ";
            }
            break;
        case 2: case 3: case 4:
            if ((rub % 100 < 10) || (rub % 100 >= 20)) {
                cout << " рубля ";
            } else {
                cout << " рублей ";
            }
            break;
        default:
            cout << " рублей ";
            break;
    }

    cout << kopecks;
    switch (kopecks % 10) {
        case 1:
            if (kopecks % 100 != 11) {
                cout << " копейка";
            } else {
                cout << " копеек";
            }
            break;
        case 2: case 3: case 4:
            if ((kopecks % 100 < 10) || (kopecks % 100 >= 20)) {
                cout << " копейки";
            } else {
                cout << " копеек";
            }
            break;
        default:
            cout << " копеек";
            break;
    }

    return 0;
}