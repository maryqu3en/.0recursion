#include<stdio.h>

int maxDig(int);

int main()
{
    int n=1234;
    printf("%d",maxDig(n));
    return 0;

}

int maxDig(int n)
{
    if (n<10)
    return n;
    else
    {
        if (n%10 > maxDig(n/10))
        return n%10;
        else 
        return maxDig(n/10);
    }

}