#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    do
    {
        get_int("Start size: ");
    }
    while (start < 1);

    int end;
    do
    {
        get_int("End size: ");
    }
    while (end < start);

    int years = 0;
    do
    {
        start = start + start/3 - start/4;
        years++;
    }
    while (start < end);

    printf("Years: %i/n", years);
}
