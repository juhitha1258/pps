// to perform program on do while loop
#include<stdio.h>
int main()
{
	int n1,n2,choice;
	int sum;
	int sutraction;
	int multiplication;
	int division;
	printf("enter any 2 numbers");
	scanf("%d%d",&n1,&n2);
        do
{
	printf("------menu-----------\n");
	printf("1 for addition\n");
	printf("2 for subtraction\n");
	printf("3 for multiplication\n");
	printf("4 for division\n");
	printf("enter any choice\n");
	scanf("%d",&choice);
        switch(choice)
{
	case 1:sum=n1+n2;
                printf("sum of %d and %d is %d",n1,n2,sum);
		break;
        case 2:difference=n1-n2;
		printf("difference of %d and %d is %d",n1,n2,difference);
	       break;
	case 3:multiplication=n1*n2;
		printf("multiplication of %d and %d is %d",n1,n2,multiplication);
	       break;
	case 4:division=n1/n2;
	        printf("division of %d and %d is %d",n1,n2,division);
	       break;
	default:printf("enter any choice");
}
}
         return 0;
}
