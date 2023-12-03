#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    height = get_int("height ");
    while(height < 2);

    for(int i = 0; i < height; i++)
    {
        for(int hash = 0; hash <= i; hash++)
        {
        printf("#");
        }
        printf("\n");

    }
}