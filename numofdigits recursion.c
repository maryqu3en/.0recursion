#include<stdio.h>

int numOfDigits(int);

int main()
{
    int n=123;
    printf("%d",numOfDigits(n));
}

int numOfDigits(int n)
{
    static int count=0;
    if(n>0){
        count++;
        return numOfDigits(n/10);
    }else
    return count;
}