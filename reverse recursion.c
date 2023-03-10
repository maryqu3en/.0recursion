#include<stdio.h>

int reverse(int,int);
int fReverse(int);

int main()
{
    int n=1234;
    printf("%d", fReverse(n));
    return 0;
}

int reverse(int x, int r)
{
    if(x==0)
    return r;
    else 
    return reverse(x/10, r*10+x%10);
}

int fReverse(int n)
{
    return reverse(n,0);
}
