#include<stdio.h>

int main ()
{
    char a = -54;
    char b = 94;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("b << 1: %d\n", b << 1);
    printf("b >> 1: %d\n", b >> 1);
    printf("a >> 1: %d\n", a >> 1);
    printf("(unsigned char)a >> 1: %d\n", (unsigned char)a >> 1);
}