#include <stdio.h>
#include "header.h"

void distanceInYards() {
    int miles = 26;
    int yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %lf kilometers.\n \n", kilometers);
}