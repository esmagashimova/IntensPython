#include <iostream>
#include <algorithm>
using namespace std;

// Функция для проверки возможности построить параллелограмм
bool p(int s[]) {
    sort(s, s + 4);
    return (s[0] == s[1] && s[2] == s[3]);
}

int main() {
    int s[4]; 

    cout << "Введите длины четырех отрезков (a, b, c, d): ";
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }
    
    if (p(s)) {
        cout << "Можно построить параллелограмм." << endl;
    } else {
        cout << "Нельзя построить параллелограмм." << endl;
    }

    return 0;
}