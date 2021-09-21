#include <stdio.h>

int main()
{
	int i,j,k;
	float arr[9][4];
	int CAL=0,AP=0,PF=0,ENG=0,IICT=0;
	int rCAL=0,rAP=0,rPF=0,rENG=0,rIICT=0;
	int sum[9];
	int low;
	int rlow;
	
	for(i=0;i<=1;i++)
	{
	printf("Enter CAL marks for roll no %d  ", i+1);//input for CAl
	scanf("%f", &arr[i][0]);
	printf("Enter AP marks for roll no %d  ", i+1);//input forAP
	scanf("%f", &arr[i][1]);
	printf("Enter PF marks for roll no %d  ", i+1);//input for PF
	scanf("%f", &arr[i][2]);
	printf("Enter English marks for roll no %d  ", i+1);//input for English
	scanf("%f", &arr[i][3]);
	printf("Enter IICT marks for roll no %d  ", i+1);//input for IICt
	scanf("%f", &arr[i][4]);	
	} 
	
	AP= arr[i][1];
	for (j=0;j<=9;j++)
	{
		if(AP>arr[j][1])//calculating AP marks
		{
		AP = arr[j][1];
		rAP = j+1;
		}
	}
		CAL = arr[i][0];
	for (j=0;j<=9;j++)//calculating CAL marks
	{
		if(CAL>arr[j][0])
		{
		CAL = arr[j][0];
		rCAL = j+1;
		}
	}
		PF = arr[i][2];//calculating marks Pf
	for (j=0;j<=9;j++)
	{
		if(PF>arr[j][2])
		{
		PF = arr[j][2];
		rPF = j+1;
		}
	}
		ENG = arr[i][3];
	for (j=0;j<=9;j++)//calculating marks of english
	{
		if(ENG>arr[j][3])
		{
		ENG = arr[j][3];
		rENG = j+1;
		}
	}
		IICT = arr[i][4];
	for (j=0;j<=9;j++) //calculating marks of IICT
	{
		if(IICT>arr[j][4])
		{
		IICT= arr[j][4];
		rIICT = j+1;
		}
	}
	
	printf("lowest marks in CAL are %d\n",rCAL);
	printf("lowest marks in AP are %d\n",rAP);
	printf("lowest marks in PF are %d\n",rPF);
	printf("lowest marks in IICT are %d\n",rIICT);
	printf("lowest marks in english are %d\n",rENG);
	
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
		sum[i]=arr[i][j];
		}
	}
	printf("%d", sum[i]);

	low = sum[0];
	for (i=0;i<=9;i++)
	{
	if(sum[i]>low)
	{
		low = sum[i];
		rlow = i+1;
	}
	}
	printf("The student with the lowest marks is %d", rlow);
	
}
