//program on addition of matrix
#include<stdio.h>
int main()
{
	int mat1[10][10];
	int mat2[10][10];
	int addition[10][10];
	int i,j;
	int r1,c2,r2,c1;
	printf("enter no.of rows and columns for both the matrices\n");
	scanf("%d%d%d%d",&r1,&c2,&r2,&c1);
	//read elements into both the matrices
    if(r1==r2&&c1==c2)
 {
	 printf("addition of 2 matrices \n");
 }
    for(i=0;i<r1;i++)
	   {
		   for(j=0;j<c1;j++)
		{
			addition[i][j]=mat1[i][j]+mat2[i]mat[j];
			printf("%d",addition[i][j]);
		}
		 
		  printf("\n");
		 }
		 else
		 { 
		 printf("addition is not possible");
		 }
		 return 0;
		 }
