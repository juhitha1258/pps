#include<stdio.h>
void main()
{
	int n;
	printf("enter an integer:");
	scanf("%d",&n);
	if(n%2!=0)
		printf("%d is an odd number",n);
	else
		printf("%d is an even number",n);
}
