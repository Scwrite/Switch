#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2,ch;
	printf("Enter 2 numbers=");
	scanf("%d%d" ,&num1,&num2);
	printf("Select your choice");
	printf("[1] Addition");
	printf("[2] Substraction");
	printf("[3] Multiplication");
	printf("[4] Division");
	printf("[5] Modulus");
	scanf("%d" ,&ch);
	switch(ch)
	{
		case1:
			printf("The Addition of %d & %d is =%d" ,num1,num2,num1+num2);
			break;
		case2:
			printf("The Substraction of %d & %d is =%d" ,num1,num2,num1-num2);
			break;
		case3:
			printf("The Multiplication of %d & %d is =%d" ,num1,num2,num1*num2);
			break;
		case4:
			printf("The Division of %d & %d is =%d" ,num1,num2,num1/num2);
			break;
		case5:
			printf("The Modulus of %d & %d is =%d" ,num1,num2,num1%num2);
			break;
		default:
			printf("Invalid choice. The operation can't be performed");
			
	}
	getch();
}
