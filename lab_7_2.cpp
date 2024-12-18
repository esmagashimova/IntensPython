#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;  // Ввод размера массива
    int A[N];
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 1; i < N; i++) {
        bool pred = A[i - 1] % 2 == 0; 
        bool tek = A[i] % 2 == 0;      
        
        if (pred == tek) {
            cout << i + 1 << endl;  
            return 0;
        }
    }
    
    cout << 0 << endl;   
    return 0;
}