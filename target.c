#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 2;
    int b = 3;
    int c = a + b;
    printf("a @ %p\n", &a);
    printf("b @ %p\n", &b);
    printf("c @ %p\n", &c);

    return 0;
}
