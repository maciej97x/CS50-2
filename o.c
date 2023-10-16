#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
   char *s = get_string("s: ");

   char *t = s;

   s [0] = toupper(s[0]);

   printf("s: %s\n", t);


}


