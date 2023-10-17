#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;

    //Asks the user to provide a number between 1 nad 8 inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);

    for (int i = 0; i < height; i ++)
    {
        for (int k = 1; k < height - i; k++)
        {
            printf("*");

            //k adds the left hand spaces in the pyramid
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
            //i and j loops pint our the right hand pyramid
        }

        printf("\n");
    }
}