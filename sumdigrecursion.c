#include<stdio.h>

int sumdig(int);
int main()
{
    int x=123;
    printf("%d",sumdig(x));
    return 0;

}

int sumdig(int n)
{
    if(n<10)
    return n;
    else 
    return n%10+sumdig(n/10);
}