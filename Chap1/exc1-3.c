#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    double fahr, celsius;
    
    fahr = LOWER;
    
    printf("This program converts fahrenheit to celsius\n");
    for (int i = LOWER; i <= UPPER; i += STEP) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += STEP;
    }
    return 0;
}