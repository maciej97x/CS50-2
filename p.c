#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)

{
   char *s = get_string("s: ");

   char *t = malloc(strlen(s) + 1);

   for (int i = 0; i < strlen(s) + 1; i++)

   printf("s: %s\n", s);
   printf("t: %s\n", t);



}


