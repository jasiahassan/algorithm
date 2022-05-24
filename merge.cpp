#include <stdio.h>
#include<stdlib.h>
void Merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 int B[100];

 while(i<=mid && j<=h)
 {
 if(A[i]<A[j])
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];

 for(i=l;i<=h;i++)
 A[i]=B[i];
}
void MergeSort(int A[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSort(A,l,mid);
 MergeSort(A,mid+1,h);
 Merge(A,l,mid,h);

 }
}
int main()
{
int n,i,a[30];
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements of an array\n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
 MergeSort(a,0,n-1);
printf("array after sorting is :\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
 printf("\n");

 return 0;
}
