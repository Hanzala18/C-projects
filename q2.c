
#include <stdio.h>
#include <math.h>

int main()
{
    int i, M, L, digits;

    printf("Enter any number: ");
    scanf("%d", &i);

    L = i % 10;     

    digits = (int)log10(i); 

    M = (int)(i/ pow(10, digits)); 

    printf("MSD = %d\n", M);
    printf("LSD = %d\n", L);

    return 0;
}
