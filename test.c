#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Start ");
    }
    while (start < 1);

    int end;
    do
    {
        end = get_int("End ");
    }
    while (end > 8);

    int years = 0;
    do
    {
        start = start + start / 3 - start / 4;
        years++;
    }
    while (start < end);
    printf("Years %i", years);
}
