#include <stdio.h>

int main() {
    char *s = "Hello, World!";

    for (int i = 0; s[i] != '\0'; i++) {
        putchar(s[i]);
    }
    printf("\n");
    return 0;
}