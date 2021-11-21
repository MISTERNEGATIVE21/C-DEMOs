#include <stdio.h>
void main()
{
  int m[100][100], t[100][100], r, c;
  printf("Enter the rows of matrix: ");
  scanf("%d",&r);
  printf("Enter the columns of matrix:");
  scanf("%d",&c);
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element for %drow and %dcolumn: ", i + 1, j + 1);
    scanf("%d", &m[i][j]);
  }
  printf("\nEntered matrix:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d ", m[i][j]);
    if (j == c - 1)
    printf("\n");
  }
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) 
  {
    t[j][i] = m[i][j];
  }
  printf("\nTranspose of the matrix is:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d ", t[i][j]);
    if (j == r - 1)
    printf("\n");
  }
}
