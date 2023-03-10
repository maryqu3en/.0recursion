#include<stdio.h>
#include<stdbool.h>
bool isPrime(int);
bool primeCheck(int,int);
bool devisable(int,int);

int main()
{
    int n=13;
    if(isPrime(n))
    printf("prime number");
    else
    printf("not prime number");
    return 0;
}

bool devisable(int x, int y)
{
    return x%y==0;
}

bool primeCheck(int x, int i)
{
    if(i==2)
    return !devisable(x,i);
    else
    return (!devisable(x,i) && primeCheck(x,i-1));
}

bool isPrime(int x)
{
    return primeCheck(x,x/2);
}