#include <stdio.h>
int main(){
    char sent[60];
    int x,i=0;
    printf("Enter a sentence:\n");
    gets(sent);
    FILE *cap;
    cap = fopen("Capital.txt","a");
    while(sent[i]!='\0'){
        if(sent[0]>=97 && sent[0]<=122)
            sent[0]=sent[0]-32;
        x=i+1;
        if(sent[i]==' ' && sent[x]>=97 && sent[x]<=122)
            sent[x]=sent[x]-32;
        i++;
    }
    fprintf(cap,"%s",sent);
    fclose(cap);
    printf("\nSentence has been written in file successfully");
return 0;
}
