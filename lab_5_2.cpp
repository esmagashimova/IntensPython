#include <iostream>
using namespace std;

int main() {
    string correctparol = "111";  // Правильный пароль
    string inputparol;  // Строка для ввода пароля

    int popitka = 0;  

    while (popitka < 6) {
        cout << "Введите пароль (попытка " << popitka + 1 << " из 6): ";
        cin >> inputparol;  

        if (inputparol == correctparol) {
            cout << "Молодец!" << endl;
            break; 
        } else {
            cout << "Неправильный пароль. Попробуйте снова." << endl;
        }

        popitka++;
    }
    if (popitka == 6) {
        cout << "Вы использовали все попытки." << endl;
    }
    
    return 0;
}