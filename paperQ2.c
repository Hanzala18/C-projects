#include <stdio.h>
#include <string.h>

int up(char a);

int main(){
	
char p;
printf("Enter your char\n");
scanf("%c",&p);

up(p);

	return 0;
}

int up(char a){
	if (a >= 'a' && a <= 'z')
	  {
	  a = a - 32;  
	  printf("your char in uppercase is %c",a);
	  }
  else if (a >= 'A' && a <= 'Z')
	  {
	  a=a+32;
	  printf("your char in lowercase is %c",a);
	  }
    else{
        printf("\n%c is not an aplhabetic character",a); 
		}

	
	return a;
}
