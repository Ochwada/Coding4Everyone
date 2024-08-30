#include <stdio.h>
#include "header.h"

void fahren2celcius() {
    int fahrenheit;
    int celcius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celcius = (fahrenheit - 32) * 5 / 9;
    printf("\n %d fahrenheit is %d celcius \n", fahrenheit, celcius);
}