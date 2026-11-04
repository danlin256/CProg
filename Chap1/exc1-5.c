#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    
    printf("This program converts fahrenheit to celsius\n");
    for (double i = UPPER; i >= LOWER; i -= STEP) {
        printf("%3.0f\t%6.1f\n", i, (5.0 / 9.0) * (i - 32.0));
    }
    return 0;
}