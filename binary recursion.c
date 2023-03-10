#include<stdio.h>

int binary(int);

int main()
{
    int n=10;
    printf("%d",binary(n));
    return 0;
}

int binary(int n)
{
    if(n==1 || n==0)
    return n;
    else 
    return n%2+10*binary(n/2);
}