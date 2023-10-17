#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Numbes of rows: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
    printf("#");
    }
}