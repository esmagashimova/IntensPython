#include <iostream>
using namespace std;

int f(int str[], int N) {
    int min_el = str[0]; 
    for (int j = 1; j < N; j++) {
        if (str[j] < min_el) {
            min_el = str[j];
        }
    }
    return min_el;
}

int main() {
    int M, N;

    cout << "Введите количество строк M: ";
    cin >> M;
    cout << "Введите количество столбцов N: ";
    cin >> N;
    int matrix[100][100]; 

    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxmin = matrix[0][0];
    for (int i = 0; i < M; i++) {
        int min_el = f(matrix[i], N); 
        if (i == 0 || min_el > maxmin) {
            maxmin = min_el;
        }
    }
    cout << "Максимальный среди минимальных элементов строк: " << maxmin << endl;
    return 0;
}