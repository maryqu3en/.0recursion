#include<stdio.h>

int minDig(int);

int main()
{
    int n=1234;
    printf("%d",minDig(n));
    return 0;

}

int minDig(int n)
{
    if (n<10)
    return n;
    else
    {
        if (n%10 < minDig(n/10))
        return n%10;
        else 
        return minDig(n/10);
    }

}