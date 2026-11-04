#include <stdio.h>

int main() {
    // No strings in C - only arrays of characters
    // This is a pointer to a string literal, which is stored in read-only memory
    char *c = "hello world";

    printf("%s\n", c);
    return 0;
}