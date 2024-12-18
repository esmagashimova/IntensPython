#include <iostream>
using namespace std;

#define MAX_ITEMS 1000   
#define MAX_LENGTH 50 

struct Prise {
    char productName[MAX_LENGTH]; 
    char storeName[MAX_LENGTH];  
    float price;                  
};
int main() {
    Prise items[MAX_ITEMS];
    int n;                 
    cout << "Введите количество товаров (не более " << MAX_ITEMS << "): ";
    cin >> n;
    if (n <= 0 || n > MAX_ITEMS) {
        cout << "Некорректное количество товаров. Программа завершена." << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        cout << "\nВведите данные для товара " << i + 1 << ":\n";
        cout << "Название товара: ";
        cin >> items[i].productName;

        cout << "Название магазина: ";
        cin >> items[i].storeName;

        cout << "Стоимость товара: ";
        cin >> items[i].price;

        if (items[i].price < 0) {
            cout << "Стоимость не может быть отрицательной. Программа завершена." << endl;
            return 1;
        }
    }
    cout << "\nСписок товаров:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nТовар " << i + 1 << ":\n";
        cout << "Название товара: " << items[i].productName << endl;
        cout << "Название магазина: " << items[i].storeName << endl;
        cout << "Стоимость товара: " << items[i].price << " руб.\n";
    }

}