#include<stdio.h>
void list();
int deposite();
int withdraw();


int main(){
	int pincode = 1234;
	int temppin;
	int balance = 0;
	int another = 1;//press 1 for another transection and press 0 to stop
	
	printf("please enter you pin number : \n");
	
	scanf("%d", &temppin);
	
	if(temppin != pincode){
		printf("youe have entered invalid pincode \n");
		return 0;
	}
	
	while(another == 1){
		printf("welcome \n");
		list();
		int option;
		printf("please enter your option \n");
		scanf("%d", &option);
		
		switch(option){
			case 1:
				printf("your acount balance is : %d\n",balance);
				break;
			case 2:
				balance += deposite();
				printf("you have successfully deposit in your account \n");
				printf("your account balance now is : %d\n",balance);
				break;
			case 3:
				balance -= withdraw();
				printf("you have successfully withdraw from your account \n");
				printf("your account balance now is : %d\n",balance);
				break;
			defult:
				printf("your have entered invalid option\n");
		}
		
		printf("Do you want to perfomr another transection\n");
		printf("press 1 for continue\n");
		printf("press 0 to exit\n");
		
		scanf("%d", &another);
		if(another != 1 && another != 0){
			printf("invalid input\n");
		}
	
	}

	
	
}

void list(){
	printf("press 1 for balance inquiry \n");
	printf("press 2 for deposite \n");
	printf("press 3 for withdraw \n");
}

int deposite(){
	int num;
	printf("please enter amount you want to deposite :\n");
	scanf("%d", &num);
	return num;
}

int withdraw(){
	int num;
	printf("please enter amount you want to withdraw :\n");
	scanf("%d", &num);
	return num;
}
