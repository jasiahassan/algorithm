#include<stdio.h>
int binary(int a[],int lb,int ub,int n)
{
	if(lb<=ub)
	{
	int mid;
	mid=(lb+ub)/2;
	if(a[mid]==n)
	return mid;
	else if(a[mid]>n)
	return binary(a,lb,mid-1,n);
	else if(a[mid]<n)
	return binary(a,mid+1,ub,n);
}
}
int main()
{
int a[10],n,i,pos,item;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
   printf("enter the element to be searched: ");
   scanf("%d",&item);
  pos= binary(a,0,n-1,item);
  printf("element is present at position %d",pos);
 
}


