#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isArmstrong(int);
int numOfDigits(int);
int armstrong(int,int);

int main()
{
    int num=153;
    if(isArmstrong(num))
    printf("armstrong");
    else
    printf("not armstrong");
}

int numOfDigits(int n)
{
    if (n<10)
    return 1;
    else
    return 1+numOfDigits(n/10);
}

int armstrong(int n, int p)
{
    if(n<10)
    return pow(n, p);
    else
    return (pow(n%10,p) +armstrong(n/10,p));
}

bool isArmstrong(int n)
{
    int d=numOfDigits(n);
    return armstrong(n,d)==n;
}