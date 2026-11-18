#include <stdio.h>

struct ponto {
    int x;
    int y;
};

void move(struct ponto *p, int dx, int dy) {
    p->x += dx;
    p->y += dy;
}

int main(void) {
    struct ponto p = {1, 1};

    move(&p, 4, 2);

    printf("(%d, %d)\n", p.x, p.y);

    return 0;
}