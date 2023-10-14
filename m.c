#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)

{
   string t = get_string("t ");
   string j = get_string("j: ");


   if (strcmp(t, j) == 0)

   {
    printf("Same \n");
   }

   else

   {
    printf("Different \n");

   }


}