/*--------------------*/

// You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
// See the sample input and output for more clarification.

/*--------------------*/

#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);
    if(a%2 == 1) {
        printf("odd");
    }
    else {
        printf("even");
    };
    return 0;
}