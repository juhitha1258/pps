#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n please enter two diffferent values");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
		printf("%d is largest\n",num1);
	else if(num2>num1)
		printf("%d is largest \n",num2);
}
