#include <stdio.h>
#define MAX_HEIGHT 100 
#define MAX_PRICE 100000 

struct Table {
    char material[50]; 
    char country[50];  
    float height;      
    float price;       
};

int main() {
    struct Table T;
    printf("Программа формирования структуры Table\n");
    printf("По запросам программы вводите данные о столе\n");
    printf("Введите страну-производителя: ");
    scanf("%s", T.country);

    printf("Введите материал стола: ");
    scanf("%s", T.material);

    do {
        printf("Введите высоту стола (в см, 0 < высота <= %d): ", MAX_HEIGHT);
        scanf("%f", &T.height);
    } while (T.height <= 0 || T.height > MAX_HEIGHT);


    do {
        printf("Введите цену стола (в рублях, 0 < цена <= %d): ", MAX_PRICE);
        scanf("%f", &T.price);
    } while (T.price <= 0 || T.price > MAX_PRICE);


    printf("\nИнформация о столе:\n");
    printf("Страна-производитель: %s\n", T.country);
    printf("Материал: %s\n", T.material);
    printf("Высота: %.2f см\n", T.height);
    printf("Цена: %.2f руб.\n", T.price);
    return 0;
}