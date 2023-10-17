#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    for (int i = 0; i < height; i ++)

        {
            printf("#");

            //k adds the left hand spaces in the pyramid
        }
}