#include<stdio.h>
int main()
{
	FILE *p;
	char ch=0;
	p=fopen("NewFile.txt","a");
	printf("write text:\n");
	while((ch=getchar())!='\n');
	{
	putc(ch,p);
	}
	
	fclose(p);
	return 0;
}
