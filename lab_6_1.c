#include <stdio.h>

int main() {
    int n, sum, i;
    sum = 0;
    i=0;
    printf("Введите число n: ");
    scanf("%d", &n);

    do {
        sum += i;
        i++;
    } while (i <= n);

    // Вывод результата
    printf("Сумма чисел от 1 до %d: %d\n", n, sum);

}