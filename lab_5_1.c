#include <stdio.h>

int main() {
    int num, i;

    i = 0;
    while (i < 10) {
        printf("Введите число: ");
        scanf("%d", &num);
        if (num * num < 100) 
        printf("Число: %d, Квадрат: %d\n", num, num * num);
        
        i++;
    }

}