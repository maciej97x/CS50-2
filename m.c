#include <stdio.h>
#include <cs50.h>

int main(void)

{
    char *s = "HI";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));

}