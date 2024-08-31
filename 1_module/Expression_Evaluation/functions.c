#include <stdio.h>
#include "header.h"

void expression_evaluation() {
    int a = 5;
    int b = 7;
    int c = 0;
    int d = 0;

    c = a - b;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a / b; d = b / a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a % b; d = b % a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = -a - b; d = -b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = ++a + b++; d += 5;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

}

void type_declaration_assign() {
    // declare and initialize a variable
 int a = 5;
 int b = 7;
 int c = 6;

 double average = 0.0;// good practice

 printf("a = %d, b = %d, c = %d\n", a, b, c);

 average = (a + b + c) / 3.0;
 printf("average = %lf\n", average);
 
}