#include <stdio.h>

void input_to_output() {
    int c;

    printf("EOF: %d\n", EOF);

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

// Copy the input to the output
int main() {
    input_to_output();
    return 0;
}