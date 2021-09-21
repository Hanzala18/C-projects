#include<stdio.h>
#include<string.h>

int main()
{
	char string1[40]={"Hi! I am string1."};
	char string2[40]={"Hi! I am string2."};
	char string3[40]={"Hi! I am string3."};
	char string4[40]={"Hi! I am string4."};
	
	FILE *string;
	FILE *no;
	
	string=fopen("StringProblems.txt","w");
	
	printf("\n%s",string1);
	fprintf(string,"%s",string1);
	
	printf("\n%s",string2);
	fprintf(string,"\n%s",string2);
	
	printf("\n%s",string3);
	fprintf(string,"\n%s",string3);
	
	printf("\n%s",string4);
	fprintf(string,"\n%s",string4);
	
	fclose(string);
	
	printf("\n\n\n");
	
	
	string=fopen("StringProblems.txt","r");
	no=fopen("NoProblems.txt","w");
	
	fscanf(string, "%[^\n]", string1);
    printf("\n%s", string1);
	fprintf(no,"%s",string1);
	printf("\nMy name is ABC.");
	fprintf(no,"\nMy name is ABC.");
	
	fscanf(string, "%[^\n]", string2);
    printf("\n%s", string2);
	fprintf(no,"\n%s",string2);
	printf("\nMy name is ABC.");
	fprintf(no,"\nMy name is ABC.");
	
	fscanf(string, "%[^\n]", string3);
    printf("\n%s", string3);
	fprintf(no,"\n%s",string3);
	printf("\nMy name is ABC.");
	fprintf(no,"\nMy name is ABC.");
	
	fscanf(string, "%[^\n]", string4);
    printf("\n%s", string4);
	fprintf(no,"\n%s",string4);
	printf("\nMy name is ABC.");
	fprintf(no,"\nMy name is ABC.");
	
	
	fclose(no);
	fclose(string);
	
	return 0;
}
