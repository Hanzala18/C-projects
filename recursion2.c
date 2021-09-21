#include<stdio.h>

int lcm1(int, int);

int main()
{
    int a, b, lc;
    printf("\nInput First Number For LCM: ");
    scanf("%d", &a);
    
    printf("\nInput Second Number For LCM: ");
    scanf("%d", &b);
    
    lc = lcm1(a,b);
    
    printf("\nThe LCM of %d and %d: %d", a, b, lc);
    return 0;
}

int lcm1(int a, int b)
{
    
    static int i = 1;    
    if(i%a == 0 && i%b == 0)
    {
        return i;
    }
    else
    {
        i++;
        lcm1(a,b);
        return i;
    }
}
