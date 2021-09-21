#include<stdio.h>

int GCD(int num1, int num2);

int main() 
{
    int num1, num2;
    printf("Input First Number For GCD\n: ");
    scanf("%d", &num1);
    
    printf("Input Second Number For GCD\n: ");
    scanf("%d", &num2);
    
    printf("\nThe GCD of %d and %d is: %d", num1, num2, GCD(num1, num2));
    return 0;
}

int GCD(int num1, int num2) 
{
    if (num2 != 0)
        return GCD(num2, num1 % num2);
    else
        return num1;
}

