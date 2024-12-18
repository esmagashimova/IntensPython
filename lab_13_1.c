#include <stdio.h>
#define MAX_PRINTERS 5
#define MAX_LEN 50

struct Printer {
    char country[MAX_LEN]; 
    int printspeed;           
    int printquality;        
    float price;            
};

int main() {
    struct Printer printers[MAX_PRINTERS];
    int n;

    printf("Введите количество принтеров (не более %d): ", MAX_PRINTERS);
    scanf("%d", &n);
    if (n > MAX_PRINTERS || n <= 0) {
        printf("Некорректное количество принтеров. Программа завершена.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nВведите данные для принтера %d:\n", i + 1);

        printf("Страна-производитель: ");
        scanf(" %[^\n]", printers[i].country);

        printf("Скорость печати (страниц в минуту): ");
        scanf("%d", &printers[i].printspeed);

        do {
            printf("Качество печати (от 1 до 10): ");
            scanf("%d", &printers[i].printquality);
        } while (printers[i].printquality < 1 || printers[i].printquality > 10);

        printf("Цена (в долларах): ");
        scanf("%f", &printers[i].price);
    }

    // Вывод данных о принтерах
    printf("\nДанные о принтерах:\n");
    for (int i = 0; i < n; i++) {
        printf("\nПринтер %d:\n", i + 1);
        printf("Страна-производитель: %s\n", printers[i].country);
        printf("Скорость печати: %d стр./мин\n", printers[i].printspeed);
        printf("Качество печати: %d/10\n", printers[i].printquality);
        printf("Цена: $%.2f\n", printers[i].price);
    }

    return 0;
}