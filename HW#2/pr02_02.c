#include <stdio.h>
#include <stdlib.h>

extern int subnum(int a, int b);

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int sub;
    sub = subnum(a, b);
    printf("%d - %d = %d\n", a, b, sub);
}

