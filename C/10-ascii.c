#include <stdio.h>

int main() {
    char c;
    printf("Um caractere: ");
    scanf("%c", &c);
    printf("Codigo ASCII de %c: %d\n", c, c);
    return 0;
}