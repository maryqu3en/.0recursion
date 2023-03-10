#include<stdio.h>
#include<stdbool.h>
bool dep (int);
bool contains (int ,int );
int main(){
	int number;
	scanf("%d",&number);
	if (dep(number))
	printf ("true");
	else 
	 printf ("false");
}

bool contains (int num,int n){

	if (num<10)
	return (num==n);
	else {
	if ((num%10)==n)
	 return ((num%10)==n);
	else 
	 return contains(num/10,n);
	}
	}
bool dep (int n){

	if (n>10&&n<100)
	return (n%10==n/10);
	else 
     return contains (n/10, n%10)||dep(n/10);
   
}