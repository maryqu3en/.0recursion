#include<stdio.h>
#include<stdbool.h>

bool duplicate (int);
bool contains (int, int);

int main()
{
    int n=123;
    if (duplicate(n))
    printf("true");
    else
    printf("false");
    return 0;
}


 bool contains (int number, int digit){
    if (number<10) 
    return (number == digit);
    else 
    return (number%10 == digit) || contains (number/10, digit);
}

 bool duplicate (int number){
    if (number<10) 
    return false;
    else 
    return contains (number/10, number%10) || duplicate (number/10);
}
