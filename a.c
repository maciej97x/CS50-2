#include <stdio.h>
#include <cs50.h>

int main (void)
{

string name = get_string("What is your name? ");
int age = get_int("What is your age? ");
string number = get_string("What is your number? ");

printf("Age is %i. Name is %s. Phone number is %s. ", age, name, number);

printf("\n ");

}