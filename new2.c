#include<stdio.h>
void main()
{
	int n,rem;
	n=12345;
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n/=10;
	}
}
