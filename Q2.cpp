#include<stdio.h>
int main()
{
	int num,n,reminder,result=0;
	printf("Enter three digit number:");
	scanf("%d",&num);
	n=num;
	
	while(n!=0){
		reminder=n%10;
		result=reminder*reminder*reminder;
		n/=10;
	}
	if(result==num)
	printf("%d is an armstrong number",num);
	else
		printf("%d is not an armstrong number",num);
	return 0;
	
	
	
	
	
}

