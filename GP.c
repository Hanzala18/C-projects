#include<stdio.h>
#define MAX 50
int assignment1();
int assignment2();
int assignment3();

int main()
{
		int assignment; 
		int lp;
        printf("press 1 to run the program\n");
        scanf("%d",&lp);
        while(lp == 1){
      printf("please enter for the assignment you want to open :\n");
      	printf("press 1 for assignment 1\n");
		printf("press 1 for assignment 2\n");
		printf("press 1 for assignment 3\n");
		scanf("%d", &assignment);
	
		{
			if(assignment==1)
			{
				printf("following are the assignment 1:\n");
				printf("1)A program to find maximum in array\n ");
				printf("2)A program to find second maximum in array\n");
				printf("3)A program to check how many vowel a string contains\n ");
				printf("4)A program to check how many elements are divisible by 5 and 11 within an array.\n ");
				int option;
					printf("please enter your option :\n");
		              scanf("%d", &option);{
					  if(option==1){
					  	 int i, n;
    float arr[100];
    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // storing the largest number to arr[0]
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Largest element = %.2f", arr[0]);


					  	
					  }
					  else if(option==2){
					  	int arr[50], i, Size;
	int first, second;
	
	printf("\n Please Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	first = second ;  
	   
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}
	printf("\n The Largest Number in this Array =  %d", first);
	printf("\n The Second Largest Number in this Array =  %d", second);
	

					  }
					  else if(option==3){
					  	 int c = 0, count = 0;
              char s[1000];

           printf("Input a string\n");
            gets(s);
              //  scanf("%c",s[c]);
         while (s[c] != '\0') {
        if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
      count++;
    c++;
  }

  printf("Number of vowels in the string: %d", count);

  return 0;	
					  }else if(option==4){	int number;
 
  	printf("\n Please Enter any Number to Check whether it is Divisible by 5 and 11 : ");
  	scanf("%d", &number);
  
  	if (( number % 5 == 0 ) && ( number % 11 == 0 ))
     	printf("\n Given number %d is Divisible by 5 and 11", number);
 
  	else
    	printf("\n Given number %d is Not Divisible by 5 and 11", number);
 

					  }
					  }
		
		} 	else if (assignment==2)
			 
			{	printf("following are the assignment 2:\n");
			    printf("1)A program to calculate cumulative (percentage and grade)\n");
			     printf("2)A program to calculate discounted amount by passing bill and (discount to be applied on bill)\n");
			      printf("3)A program that converts the any of following units (yard, feet and inches) in to any of the desired units (yard, feet and inches) \n");
				
				int option1;
					printf("please enter your option :\n");
		              scanf("%d", &option1);{
					  if(option1==1){
					   int phy, chem, bio, math, comp; 
    float per; 

    /* Input marks of five subjects from user */
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);


    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);


    /* Find grade according to the percentage */
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }


					  }else if(option1==2){
					  	 float amount, discount, amountToBePaid;
    printf("How much shopping amount you have done here ? ");
    scanf("%f", &amount);
    printf("\n");
    if(amount<=100)
    {
        printf("You have to paid: Rs.%0.2f", amount);
    }
    else
    {
        if(amount>100 && amount<=200)
        {
            discount = (amount*5)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: Rs.%0.2f", amountToBePaid);
        }
        else if(amount>200 && amount<=400)
        {
            discount = (amount*10)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: Rs.%0.2f", amountToBePaid);
        }
        else if(amount>400 && amount<=800)
        {
            discount = (amount*20)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: Rs.%0.2f", amountToBePaid);
        }
        else
        {
            discount = (amount*25)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: Rs.%0.2f", amountToBePaid);
        }
    }
    getch();

					  }
					  else if(option1==3){	int feet,inches;
		
		printf("Enter the value of feet: ");
		scanf("%d",&feet);
		
		//converting into inches
		inches=feet*12;
		
		printf("Total inches will be: %d\n",inches);
		return 0;
					  	
					  }
					  
					  
					  
					  }
			}	else if (assignment==3)
			 
			{	printf("following are the assignment 3:\n");
			   printf("1)A program for matrix multiplication that take two matrix as input from user, of a size (row x col) they enter and multiply those two matrix if a valid multiplication exists.\n");
				printf("2)A program for finding out transpose of a matrix that takes one matrix as input from user, of a size (row x col) they enter and stores transpose matrix in another 2D array.\n");
				printf("3)A program that takes a a number and apply your m_ceil (double), m_floor (double), m_round (double) over it\n");
				
				int option2;
					printf("please enter your option :\n");
		              scanf("%d", &option2);
					  {if(option2==1) { 	int a[MAX][MAX];
	int arows,acolumns;
	int i,j,k;
	
	printf("Please Enter Number Of Rows And Columns For Metrix a : ");
	scanf("%d %d",&arows,&acolumns);
	
	printf("Please Enter Elements For Metrix a:\n");
	
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[MAX][MAX];
	int brows,bcolumns;
	printf("Please Enter Number Of Rows And Columns For Metrix b : ");
	scanf("%d %d",&brows,&bcolumns);
	
	printf("Please Enter Elements For Metrix b:\n");
	
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	if(arows != bcolumns)
	{
		printf("Multiplication Not Possible");
	}else
	{
		int product[MAX][MAX];
	int sum=0;
	
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			for(k=0;k<arows;k++)
			{
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum=0;
		}
	}
	printf("Resultent matrix is :\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf("%d",product[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	}
	

					  } 
					  else if(option2==2){
					  	
					  	 int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
		}
		    
        }
        
	    }
	    
        }
        
		} 
		
		printf("\n\tDo You Want To Run Another The Program Again\n\tPress 1 To Run\n\tPress 0 For Exit\n\t");
	scanf("%d",&lp);
	if(lp != 1 && lp != 0){
	printf("\n\tInvalid Input\n\t");
	
}
	    
	    }
	   
	
		return 0;
	}
