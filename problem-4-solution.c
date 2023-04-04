/*--------------------*/

// You need to take one integer value as input and tell if the value is positive or negative or zero.
// See the sample input and output for more clarification.


/*--------------------*/

#include <stdio.h>

int main () {

    int a;
    scanf("%d", &a);
    if(a == 0) {
        printf("zero\n");
    }
    else if(a > 0) {
        printf("positive\n");
    }
    else {
        printf("negative\n");
    }
    return 0;
}