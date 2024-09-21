#include <stdio.h>
int main() {
    int LA[3] = {};
    int i;

    printf("Array Before insertion: \n");
    for ( i = 0; i <= 2; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    printf("The Array element after insertion: \n");
    for ( i = 0; i <= 2; i++) {
        LA[i] = i + 2;
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    return 0;
}