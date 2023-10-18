#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Numbers of rows ");
    }
    while (height > 1 || height < 9);

    for (height = 0; i < height; i++)
    {
        for (space = height - 1; space > i; space--)
        {
            printf(" ");
        }
        for (hash = 0; hash <= i; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}