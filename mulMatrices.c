#include <stdio.h>
int main() {
  int r1, c1, r2, c2, a[100][100], b[100][100], mul[100][100], i, j, k;
  printf("Enter the number of rows for matrix 1: ");
  scanf("%d", &r1);
  printf("Enter the number of columns for matrix 1: ");
  scanf("%d", &c1);

  printf("\nEnter elements of matrix 1:\n");
  for (i=0; i<r1; i++)
    for (j=0; j<c1; j++) {
      scanf("%d", &a[i][j]);
    }
    
  printf("Enter the number of rows for matrix 2: ");
  scanf("%d", &r2);
  printf("Enter the number of columns for matrix 2: ");
  scanf("%d", &c2);

  printf("\nEnter elements of matrix 2:\n");
  for (i=0; i<r2; i++)
    for (j=0; j<c2; j++) {
      scanf("%d", &b[i][j]);
    }

  for (i=0; i<r1; i++)
    for (j=0; j<c2; j++) {
    	mul[i][j]=0;
    	for (k=0; k<c1; k++)
    	{
    		mul[i][j]=	mul[i][j]+(a[i][k]*b[k][j]);	
		}
    
    }
  printf("\nproduct of two matrices: \n");
  for (i=0; i<r1; i++)
  {
    for (j=0; j<c2; j++) {
      printf("%d\t", mul[i][j]);
      }
      printf("\n");
    }
  return 0;
}
