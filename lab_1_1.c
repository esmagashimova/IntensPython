#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c; 
    float mediana_a, mediana_b, mediana_c;  
    printf("Программа вычисления длины медианы треугольника по данным сторон треугольника a,b,c\n");
    printf("Введите длины сторон треугольника a, b, c\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    mediana_a = sqrt(2*b*b + 2*c*c - a*a)/2;
    mediana_b = sqrt(2*a*a + 2*c*c - b*b)/2;
    mediana_c = sqrt(2*b*b + 2*a*a - c*c)/2;
    printf("Медиана, проведенная к стороне a: %6.2f\n", mediana_a);
    printf("Медиана, проведенная к стороне b: %6.2f\n", mediana_b);
    printf("Медиана, проведенная к стороне c: %6.2f\n", mediana_c);
    return 0;
}
