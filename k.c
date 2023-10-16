#include <stdio.h>
#include <cs50.h>

int main(void)

{
    string s = get_string("a ");
    printf("%p\n", s);
    printf("%p\n", &s[0]);
}