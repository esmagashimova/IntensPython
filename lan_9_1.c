#include <stdio.h>

int AizB(int A, int B) {
    int DigitA, DigitB;

    while (A > 0) {
        DigitA = A % 10; 
        A /= 10;
        
        // Ищем эту цифру в числе B
        int f = 0;
        while (B > 0) {
            DigitB = B % 10; 
            B /= 10; 
            
            if (DigitA == DigitB) {
                f = 1; 
                break;
            }
        }

        if (!f) {
            return 0;
        }
    }
    
    return 1; 
}

int main() {
    int A, B;

    printf("Введите число A: ");
    scanf("%d", &A);

    printf("Введите число B: ");
    scanf("%d", &B);

    if (AizB(A, B)) {
        printf("ДА\n");
    } else {
        printf("НЕТ\n");
    }

    return 0;
}