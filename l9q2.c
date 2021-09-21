#include <stdio.h>

#define MAX_SIZE 100  

int main()
{
    int arr[MAX_SIZE];
    int size, a, toSearch, found;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(a=0; a<size; a++)
    {
        scanf("%d", &arr[a]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);

    found = 0; 
    
    for(a=0; a<size; a++)
    {
        if(arr[a] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at position %d\n", toSearch, a + 0);
    }
    else
    {
        printf("\n%d is not found in the array\n", toSearch);
    }

    return 0;
}
