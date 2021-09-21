#include <stdio.h>

int main()
{
	int Array[50], a, j, temp, Size;
	
	printf("\n Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Enter %d elements of an Array \n", Size);
	for (a = 0; a < Size; a++)
	{
		scanf("%d", &Array[a]);
    }     
	for (a = 0; a < Size; a++)
	{
		for (j = a + 1; j < Size; j++)
		{
			if(Array[a] > Array[j])
			{
				temp = Array[a];
				Array[a] = Array[j];
				Array[j] = temp;
			}
			
		}
	}
	printf("\n Array of Elements in Ascending Order are  \n");
	for (a= 0; a < Size; a++)
	{
		printf("%d\t", Array[a]);
	}
	
	return 0;
}
