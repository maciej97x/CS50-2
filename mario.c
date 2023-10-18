#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Numbes of rows: ");
    }
    while (height < 2 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int spaces = height - 1; spaces > i; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes <= i; hashes++)
        {
            printf("#");
        }
        printf(" ");
        for(int hashes2 = 0; hashes2 <= i; hashes2++)
        {
            printf("#");
        }
        printf("\n");
    }

}