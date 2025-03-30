#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *src = "11111111111111111111111111111\n";
    char sink[20];

    printf("src = %p, sink = %p\n", src, sink);
    char *m1 = src;
    char *m2 = m1;
    char *m3 = m2;
    memcpy(sink, src, 20);
    sink[2] += 1;

    sink[10] += 1;

    sink[14] += 1;

    return 0;
}