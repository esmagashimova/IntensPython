#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    float a, b, radian, ugol_gr, bok_storona, height, P, S;

    // Ввод данных
    cout << "Введите длину большего основания a:\n ";
    cin >> a; 
    cout << "Введите длину меньшего основания b:\n ";
    cin >> b;  
    cout << "Введите угол при большем основании (в радианах):\n ";
    cin >> radian;
    
    ugol_gr = radian * (180/3.14);
    height = ((a - b) / 2) * tan(ugol_gr);
    bok_storona = sqrt(pow((a - b) / 2, 2) + pow(height, 2));

    P = a + b + 2 * bok_storona;
    S = 0.5 * (a + b) * height;

    cout<<"Периметр трапеции: "<< P << endl;
    cout<<"Площадь трапеции: " << S << endl;

    float ugol2 = 180 - ugol_gr;        

    cout << "Два угла при большем основании: " << ugol_gr << " градусов" << endl;
    cout << "Два угла при меньшем основании: " << ugol2 << " градусов" << endl;

    if (a > b) 
        cout << "Трапеция равнобедренная." << endl;
    else 
        cout << "Трапеция не равнобедренная." << endl;

    return 0;
}