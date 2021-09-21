#include<stdio.h>
int main()
{
	int option,num,i,prime;
	printf("Enter any number:\n");
	scanf("%d",&option);
	printf("prime factors are %d:\n",option);
	
	for(i=2;i<=option;i++)
{
	if(option%i==0)
	{
		prime=1;
		for(num=2;num<=i/2;num++)
		{
			if(i%num==0)
			{
				prime=0;
				break;
				
			}
		}
		
			if(prime==1)
			{ 
			printf("%d, ",i);
			}
	}
}	
	
	return 0;
}
