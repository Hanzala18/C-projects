#include <stdio.h>
int main() {
   int original[10];
   printf("Enter the original  numbers\n");
   
   int copied[10];
   int loop, count;
int average;   
   count = 9;
   for(loop =0;loop < 10; loop++){
   	scanf("%d",&original[loop]);
   }
   
   for(loop = 0; loop < 10; loop++) {
      copied[count] = original[loop];
      count--;
   }
      
   printf("original going to -> reverse \n");
   
   for(loop = 0; loop < 10; loop++) {
      printf("   %d        %d\n", original[loop], copied[loop]);
   }
int i;
int min;
for (i = 1; i < 10; i++){

    if (copied[i] < copied[min])
      min = i;
}
  printf("Minimum elements are  %d and its value is %d.\n", min+1, copied[min]);
  

int a;
int avg=0;
int m;

for(a=0;a<10;a++){
	avg = avg + original[a];
	m=avg/10;

}
	float avg1=0;
avg1 = avg / 10;

printf("average =%.2f\n",avg1);
printf("Mean =%d\n",m);
return 0;
}
