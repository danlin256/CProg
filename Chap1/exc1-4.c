#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    double fahr, celsius;
    
    celsius = LOWER;
    
    printf("This program converts celsius to fahrenheit\n");
    for (int i = LOWER; i <= UPPER; i += STEP) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += STEP;
    }
    return 0;
}