#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Numbes of rows: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int spaces = height - 1; spaces > i; spaces--)
        else 
        {
            printf(" ");
        }
        for (int hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }

}