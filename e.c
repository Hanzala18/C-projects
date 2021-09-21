#include<stdio.h>
//using namespace std;
int main () {
   int A[10][10], i, j, m, n, x = 0, y = 0;
   printf("Enter the number of rows and columns : ");
   int m;
   int n;
   printf( "Enter the matrix elements : ");
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
    int A[i][j];
   for (i = 0; i < m; i++) {
      for( j = 0; j < n; j++) {
         if (A[i][j] != A[j][i])
            x = 1;
         else if (A[i][j] == -A[j][i])
            y = 1;
      }
   }
   if (x == 0){
   	printf("The matrix is symmetric.\n ");
   }
      
   else if (y == 1){
   
      printf("The matrix is skew symmetric.\n ");}
   else{
   
      printf( "It is neither symmetric nor skew-symmetric.\n ");}
   for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++)
         int A[i][j] printf( " ");
      printf("\n ");
   }
   return 0;
}
