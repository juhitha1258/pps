#include<stdio.h>
int main()
{
	int i,n,even,odd;
	printf("enter value to n:");
       scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
       if(i%2==0);
       {
	 printf("\n %d is even",i);
       }
       else
       {
         printf("\n %d is odd",i);
       }
      }
}       
