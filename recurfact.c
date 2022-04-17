#include<stdio.h>
int fact(int);  
int main()    
{    
 int f, n;
 printf("enter the number whose factorial you want to calculate:");
 scanf("%d",&n); 
 f=fact(n);
 printf("Factorial of %d is: %d\n",n,f); 
 return 0;  
}
int fact(int n)
{
	if(n==1)
	return 1;
	else return n*fact(n-1);
}   

