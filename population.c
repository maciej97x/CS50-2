#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int start;
 do
 start = get_int("Start ");
 while (start < 2);

int end;
do
end = get_int("End ");
while (end > 8);

int years = 0;
while (start < end)
{
  start = start + start / 4 - start / 3;
  years++;
}
printf("Years; %i", years);
}
