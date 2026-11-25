#include <stdio.h>

int proximo_id(void)

{

    static int id = 1;

    return id++;

}

int main(void)

{

    printf("%d %d %d %d %d\n",

           proximo_id(),

           proximo_id(),

           proximo_id(),

           proximo_id(),

           proximo_id());

    return 0;

}