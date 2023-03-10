#include<stdio.h>

int countZero(int);
int fact(int);
void nbrOfFactorialZero(int);

int main()
{
    int n=10;
    nbrOfFactorialZero(n);
}

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int countZero(int x)
{
    if(x%10!=0)
    return 0;
    else
    return 1+countZero(x/10);
}

void nbrOfFactorialZero(int n)
{
    printf("%d",countZero(fact(n)));
}