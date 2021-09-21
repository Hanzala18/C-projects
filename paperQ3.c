#include<stdio.h>
  
int main() {
   int h, j, rows;
   int num = 1;
    
   printf("Enter the rows you want to input\n");
   scanf("%d", &rows);
     
   for (h = 0; h < rows; h++) {
      for (j = 0; j <= h; j++) {
         printf("%d ", h*j);
      }
      printf("\n");
   }
   return(0);
}
