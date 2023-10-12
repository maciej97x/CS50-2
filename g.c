#include<stdio.h>
#include<cs50.h>


int tr(int n);
int main(void)

{
    if (n == 1)
    {
    return 0;
    }
    else if ((n % 2) == 0)
    {
    return 1 + tr(n/2);
    }
    else
    {
    return 1 + tr(3*n - 1);
    }

}