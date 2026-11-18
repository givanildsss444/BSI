#include <stdio.h>

union bytes {
    int i;
    unsigned char b[4];
};

int main(void) {
    union bytes u;

    u.i = 0x01020304;

    printf("%02X %02X %02X %02X\n",
           u.b[0], u.b[1], u.b[2], u.b[3]);

    return 0;
}