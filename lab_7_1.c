#include <stdio.h>
int main() {
    int N;
    printf("Введите размер массива: ");
    scanf("%d", &N);
    int A[N];
    printf("Введите элементы массива: ");
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    int max = A[0]; 
    for (int i = 1; i < N; i += 2) {  
        if (A[i] > max) {
            max = A[i];
        }
    }
    printf("Максимальный элемент среди элементов с нечетными номерами: %d\n", max);
    return 0;
}