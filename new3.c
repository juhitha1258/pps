#include<stdio.h>
void main()
{
	int n,rem,sum;
	n=12345;
	sum=0;
	while(n>0)
	
	{
		rem=n%10;
		n/=10;
		sum+=rem;
		}
	printf("%d",sum);
}
