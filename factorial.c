#include<stdio.h>
void main()
{
int n,fact=1,i=1;
printf("enter the values ");
scanf("%d %d",&n,&fact);
while(i<=n)
{
fact=fact*i;
i=i+1;
printf("%d %d",n,fact);
}
}
