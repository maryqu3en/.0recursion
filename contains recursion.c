#include<stdio.h>
#include<stdbool.h>

bool contains(int,int);

int main()
{
    int n=123, d=2;
    if (contains(n,d))
    {
        printf("%d contains %d",n,d);
    }else
    {
        printf("%d doesnt contain %d",n,d);
    }
    return 0;
}


bool contains (int number, int digit)
{
    if (number<10) 
    return (number == digit);
    else 
    return (number%10 == digit) || contains (number/10, digit);
}