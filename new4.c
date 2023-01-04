#include<stdio.h>
void main()
{
	int i,n,sum;
        printf("give the value to n:");
	scanf("%d",&n);
	sum=0;
	i=1;
		while(i<=n)
		{
			printf("\n %d",i);
			i++;
			sum+=i;
		}
			printf("\n sum=%d",sum);
		
}
