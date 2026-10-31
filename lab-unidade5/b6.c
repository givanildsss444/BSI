#include <stdio.h>

int main(void) {
    int v[10];

    for (int i = 0; i < 10; i++) {
        v[i] = i;
    }

    v[10] = 100;

    printf("v[10] = %d\n", v[10]);

    return 0;
}