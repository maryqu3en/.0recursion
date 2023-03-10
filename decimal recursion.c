#include<stdio.h>

int decimal(int);

int main()
{
    int n=1010;
    printf("%d",decimal(n));
    return 0;
}

int decimal(int n)
{
    if(n==1 || n==0)
    return n;
    else 
    return n%10+2*decimal(n/10);
}