#include<stdio.h>
int main()
{
	int num=1,sum=0;
	
	
	while(num<=10){
		sum =sum+num;
		num=num+1;
	}	
	printf("sum of first 10 natural numbers is %d",sum);
	
	return 0;
}
