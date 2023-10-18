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
        for (int space = height - 1; space > i; space--)
        {
            printf(" ");
        }
        for (int hash = 0; hash <= i; hash++)
        {
            printf("#");
        }
        printf(" ");

          for (int space3 = height - 1; space3 > i; space3--)
        {
            printf(" ");
        }

        printf("\n");

    }

}
