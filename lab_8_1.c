#include <stdio.h>
#define LIM 30  // Максимальный размер матрицы
int main() {
    int N, m;
    
  
    printf("Введите размер матрицы N: ");
    scanf("%d", &N);
    
    printf("Введите номер строки m (1 <= m <= N): ");
    scanf("%d", &m);
    m--;  // Для удобства работы с индексами 
    

    int A[LIM][LIM];
    printf("Введите элементы матрицы A:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Поиск строки с максимальным элементом на главной диагонали
    int max_diagonal_value = A[0][0];
    int max_diagonal_line = 0;
    for (int i = 1; i < N; i++) {
        if (A[i][i] > max_diagonal_value) {
            max_diagonal_value = A[i][i];
            max_diagonal_line = i;
        }
    }
    
    // Перестановка строк
    if (max_diagonal_line != m) {
        for (int j = 0; j < N; j++) {
            int t = A[max_diagonal_line][j];
            A[max_diagonal_line][j] = A[m][j];
            A[m][j] = t;
        }
    }
    
    printf("Матрица после перестановки:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}