#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declare int here globaly to be used in loops further down:
    int height;
    // Do while loop to get int between 1 and including 8:
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    // Parent for loop for number of rows that will equal the height input:
    for (int rows = 0; rows < height; rows++)
    {
        // Child for loop, to print spaces:
        for (int spaces = height - 1; spaces > rows; spaces--)
        {
            printf(" ");
        }
        // Child for loop, to print hashes:
        for (int hashes = 0; hashes <= rows; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}