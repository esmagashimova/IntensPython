#include <stdio.h>

int main() {
    int n;
    printf("Программа выводит возраст человека\n");
    printf("Введите возраст: ");
    scanf("%d", &n);

    if (n < 1 || n > 99) {
    printf("Некорректное значение возраста.\n");
    return 0;
    }
    // Проверяю на исключение для чисел от 11 до 14
    if ((n % 100 >= 11) && (n % 100 <= 14))
    printf("Мне %d лет\n", n);
    else
    switch (n % 10) {
        case 1: printf("Мне %d год\n", n); break;
        case 2: printf("Мне %d года\n", n); break;
        case 3: printf("Мне %d года\n", n); break;
        case 4: printf("Мне %d года\n", n); break;
        default:printf("Мне %d лет\n", n); break;

    }

    return 0;
}