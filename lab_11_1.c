#include <stdio.h>

// Функция для нахождения максимального четного элемента в столбце
int f(int matrix[][100], int M, int st) {
    int maxch = -1; 

    for (int l = 0; l < M; l++) {
        if (matrix[l][st] % 2 == 0) { 
            if (matrix[l][st] > maxch) {
                maxch = matrix[l][st];
            }
        }
    }

    return maxch; 
}

int main() {
    int M, N;

    printf("Введите количество строк M: ");
    scanf("%d", &M);
    printf("Введите количество столбцов N: ");
    scanf("%d", &N);

    int matrix[100][100]; // Матрица (для примера)

    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int j = 0; j < N; j++) {
        int maxch = f(matrix, M, j);
        if (maxch == -1) {
            printf("В столбце %d нет четных элементов.\n", j+1);
        } else {
            printf("Максимальный четный элемент в столбце %d: %d\n", j+1, maxch);
        }
    }

    return 0;
}