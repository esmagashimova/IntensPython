#include <iostream>
using namespace std;
#define MAX_LENGTH 60

class Autobus {
public:
    char startpoint[MAX_LENGTH];
    char endpoint[MAX_LENGTH];
    int mrshnumber;
    float traveltime;

    void InputA() {
        cout << "Введите название начального пункта: ";
        cin >> startpoint;

        cout << "Введите название конечного пункта: ";
        cin >> endpoint;

        do {
            cout << "Введите номер маршрута: ";
            cin >> mrshnumber;
        } while (mrshnumber <= 0);

        do {
            cout << "Введите время поездки (в минутах): ";
            cin >> traveltime;
        } while (traveltime <= 0);
    }
    void OutputA() {
        cout << "\nИнформация о маршруте:\n";
        cout << "Начальный пункт: " << startpoint << endl;
        cout << "Конечный пункт: " << endpoint << endl;
        cout << "Номер маршрута: " << mrshnumber << endl;
        cout << "Время поездки: " << traveltime << " мин.\n";
    }
};

int main() {
    Autobus bus;
    cout << "Программа формирования данных о маршруте автобуса\n";
    bus.InputA();
    bus.OutputA();
    return 0;
}