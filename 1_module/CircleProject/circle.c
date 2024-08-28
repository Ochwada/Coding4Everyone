#include <stdio.h>
#include "add.h"  // Include the header file

int main() {
    printf("Calling add function:\n");
    add();  // Call the function defined in add.c

    circle();  // Call the function defined in circle.c
    
    return 0;
}

// gcc -g circle.c -o circle && ./circle
//gcc -g circle.c add.c -o circle && ./circle

