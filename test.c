#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int space = height - 2; space > i; space--)
        {
            printf("a");
        }
        for (int hash = 0; hash <= i; hash++)
        {
            printf("#");
        }
        printf(" ");

        for (int hash2 = 0; hash2 <= i; hash2++)
        {
            printf("#");
        }
        printf("\n");

    }

}
