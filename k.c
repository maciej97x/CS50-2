#include <stdio.h>
#include <cs50.h>

int main(void)

{
    char *s = "HI";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
}