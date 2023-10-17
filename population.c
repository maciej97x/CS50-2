#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int start;
  {
    start = get_int("Start size: ");
  }

  int end;

  {
    end = get_int("End size: ");
  }

  int years = 0;

  if (start != end)
  do
  {
    start = start + start / 3 - start /4;
    years++;
  }
  while (start < end);
  printf("Years: %i\n", years);




}
