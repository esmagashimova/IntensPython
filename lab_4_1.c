#include <stdio.h>

int main() {
    int i;
    for ( i = 10; i < 100; i++) {
        if (i % 4 == 0 && i % 6 != 0)
        printf("%d ", i);  
        
    }
}