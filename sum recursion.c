#include<stdio.h>

int sum(int,int);

int main()
{
    int x=4, y=6;
    printf("%d", sum(x,y));
}

int sum(int a, int b)
{
    if (b==0)
    return a;
    else
    return 1+sum(a,b-1);
}