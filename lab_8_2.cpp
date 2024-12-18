#include <iostream>

using namespace std;

int main() {
    int M, N;
    
    cout << "Введите количество строк M: ";
    cin >> M;
    cout << "Введите количество столбцов N: ";
    cin >> N;
    
    int matrix[M][N];
    cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    // Переменная, чтобы хранить максимальный элемент из минимальных элементов строк
    int max_min;
    
    // Прохожусь по строкам матрицы
    for (int i = 0; i < M; i++) {
        int line_min = matrix[i][0];
        
        // Ищем мин. элемент в текущей строке
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] < line_min) {
                line_min = matrix[i][j];
            }
        }
        
        if (i == 0) {
            max_min = line_min;
        }
        // Сравниваю мин. элемент строки с текущим макс.
        else {
            if (line_min > max_min) {
                max_min = line_min;
            }
        }
    }

    cout << "Максимальный среди минимальных элементов строк: " << max_min << endl;

    return 0;
}