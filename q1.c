#include<stdio.h>
int main()
{
  int amt;
  int deliveryCharges=150;
  int total;
  printf("enter user's purchase amount: ");
  scanf("%d", &amt);
  
  total = amt + deliveryCharges;
  
  if(amt>=1000)
  {
	  printf("total amount : %d\n",amt);
  } 
  else if(amt< 1000)
  {
	  printf("total amount : %d\n", total);
  }
 
  return 0;
}
