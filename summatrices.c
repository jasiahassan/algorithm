#include <stdio.h>
int main() {
  int  n, a[100][100], b[100][100], sum[100][100], i, j,count;
  printf("Enter the number of rows and cols :\n ");
  scanf("%d", &n);
 printf("\nEnter elements of 1st matrix:\n");
  for (i=0; i<n; ++i)
    for (j=0; j<n; ++j) {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i=0; i<n; ++i)
    for (j=0; j<n; ++j) {
      scanf("%d", &b[i][j]);
    }
    //computing sum
  for (i=0; i< n; ++i)
    for (j=0; j<n; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i=0; i<n; ++i)
  {
    for (j=0; j<n; ++j) {
      printf("%d\t", sum[i][j]);
   }
        printf("\n");
    }
   count=12*n*n+13*n+22;
 printf("Number of program steps =%d",count);
  return 0;
}
