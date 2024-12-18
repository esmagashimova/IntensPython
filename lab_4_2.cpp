#include <iostream>

using namespace std;

int main() {
    int sum;
    sum=0;
    for (int i = 1; i <= 50; i++) {
    if (i % 5 == 0 || i % 6 == 0) 
        sum += i;  
        
    }
    cout << "Сумма чисел, делящихся на 5 или на 6: " << sum << endl;

}