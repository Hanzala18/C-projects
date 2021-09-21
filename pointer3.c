#include <stdio.h>
int main(){
    char read[30];
    printf("Sentence read from file:\n");
    FILE *fread;
    fread = fopen("Capital.txt","r");
    while(fscanf(fread,"%s",read) != EOF)
        printf("%s ",read);
    fclose(fread);
return 0;
}
