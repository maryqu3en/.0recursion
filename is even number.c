#include<stdio.h>
#include<stdbool.h>
bool isEven(int);

int main()
{
    int n=123;
    if(isEven(n))
    printf("true");
    else 
    printf("false");
    return 0;
}

bool isEven(int n)
{
    if(n<10)
    return n%2==0;
    else
    return ((n%10)%2==0) && isEven(n/10);
}