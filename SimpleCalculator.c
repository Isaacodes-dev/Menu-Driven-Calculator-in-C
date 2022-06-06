#include<stdio.h>
#include<stdlib.h>
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int main(){
	int a,b,opp;
	do{
	printf("\n");
	printf("Choose any of the following options \n1. Add \n2. Subtraction \n3. Multiply \n4. Divide \n5. Exit \n");
	scanf("%d",&opp);
	
	switch(opp){
		case 1:
		printf("Enter Number: ");
		scanf("%d",&a);
		printf("Enter Number: ");
		scanf("%d",&b);
		printf("Answer is: %d",add(a,b));
			break;
		case 2:
		printf("Enter Number: ");
		scanf("%d",&a);
		printf("Enter Number: ");
		scanf("%d",&b);
		printf("Answer is: %d",subtract(a,b));
			break;
		case 3:
		printf("Enter Number: ");
		scanf("%d",&a);
		printf("Enter Number: ");
		scanf("%d",&b);
		printf("Answer is: %d",multiply(a,b));
			break;
		case 4:
		printf("Enter Number: ");
		scanf("%d",&a);
		printf("Enter Number: ");
		scanf("%d",&b);
			printf("Answer is: %d",divide(a,b));
			break;
		case 5:
			exit(1);
		default:
			printf("Please Enter Valid operator");
			break;
	}	
	}while(opp!=5);
	
}
int add(int x,int y){
	return x+y;
}
int subtract(int x,int y){
	return x-y;
}
int multiply(int x,int y){
	return x*y;
}
int divide(int x,int y){
	return x/y;
}