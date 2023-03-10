#include<stdio.h>

int sumToN(int);

int main()
{
    int n=4;
    printf("%d",sumToN(n));
    return 0;
}

int sumToN(int n)
{
    if(n==1)
    return 1;
    else
    return n+sumToN(n-1);
}