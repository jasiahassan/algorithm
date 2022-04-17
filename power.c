#include<stdio.h>  
int main()    
{    
 int i,a,b,count;
 int power=1; 
 printf("Enter value of a and b: ");    
  scanf("%d%d",&a,&b); 
    
    for(i=1;i<=b;i++){    
      power=power*a;    
  }    
  printf("power of %d power %d is: %d\n",a,b,power);  
    count=3*b+12;
    printf("Number of program steps =%d",count);  
    return 0;  
}   
