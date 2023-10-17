#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Number ");
    }
    while (height < 1);

    for (i = 0; i < height; i++)
    printf("# \n");
}