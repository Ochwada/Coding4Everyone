#include <stdio.h>
#include "add.h"  // Include the header file

void add() {
    float a;
    float b;
    float sum;
    printf("Input two floats: ");

    scanf("%f %f", &a, &b);
    printf("a=%f b=%f\n ", a, b);

    sum = a + b;
    printf("Sum: %f\n\n", sum);
}

void circle( ) {
    double area = 0.0;
    double radius = 0.0;


    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("The radius of %lf meters; area is %lf sq. meters\n",radius, area);
}
