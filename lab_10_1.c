#include <stdio.h>

// Функция разделения числа на цифры и сохранения их в массиве
int f(long long int n, int digits[]) {
    int c = 0;
    while (n > 0) {
        digits[c++] = n % 10; 
        n /= 10;                 
    }
    return c; // Возвращаем количество цифр
}

int main() {
    long long int n;
    printf("Введите натуральное число: ");
    scanf("%lld", &n);

    int digits[20]; // Массив для хранения цифр числа
    int dc;

    dc = f(n, digits);

    printf("Количество цифр в числе: %d\n", dc);

    return 0;
}