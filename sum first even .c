#include<stdio.h>

int sumToN(int);
int countSum(int,int);

int main()
{
    int n=5;
    printf("%d",sumToN(n));
    return 0;
}

int sumToN(int n)
{
    int m=0;
    return countSum(m,n);
}

int countSum(int x,int y)
{
    if(y==1)
    return x;
    else
    return x+countSum(x+2,y-1);
}