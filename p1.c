#include<stdio.h>
float avgofthreenumbers(int firstnumber,int secondnumber,int thirdnumber);
int main()
{
	float firstnumber;
	float secondnumber;
	float thirdnumber;	
	float sum,avg;
	printf("enter  first number\n");
	scanf("%f",&firstnumber);
		printf("enter second number\n");
	scanf("%f",&secondnumber);
		printf("enter  third number\n");
	scanf("%f",&thirdnumber);
    avg=avgofthreenumbers(firstnumber,secondnumber,thirdnumber)/3;
    printf("\n%f=(%f+%f+%f)/3",firstnumber,secondnumber,thirdnumber,sum,avg);
	return 0;
}
float avgofthreenumbers(int firstnumber,int secondnumber,int thirdnumber)
{
	float sum,avg;
	sum=firstnumber+secondnumber+thirdnumber;
	avg=sum/3;
	return avg;
}

	


