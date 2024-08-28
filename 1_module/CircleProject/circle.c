#include <stdio.h>

int main(void) {
    float a;
    float b;
    float sum;
    printf("Input two floats: ");

    scanf("%f %f", &a, &b);
    printf("a=%f b=%f\n ", a, b);

    sum = a + b;
    printf("Sum: %f\n\n", sum);

    return 0;


}
// gcc -g circle.c -o circle && ./circle

