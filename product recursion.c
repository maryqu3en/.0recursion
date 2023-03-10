#include<stdio.h>

int product(int,int);

int main()
{
    int x=8, y=3;
    printf("%d", product(x,y));
}

int product(int a, int b)
{
    if (b==0)
    return 0;
    else
    return a+product(a,b-1);
}