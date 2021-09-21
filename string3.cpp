#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100];
    char splitStrings[10][10]; 
    int i,b,c;
 
    printf("Student Detail: ");
    gets(str);
 
    b=0; c=0;
    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            splitStrings[c][b]='\0';
            c++;  
            b=0;    
        }
        else
        {
            splitStrings[c][b]=str[i];
            b++;
        }
    }
    
    
    for(i=0;i < c;i++)
        printf("%s\n",splitStrings[i]);
    return 0;
}
