#include<stdio.h>
#include<conio.h>
#define m 3
#define n 2
int main()
{
	int a[m][n],b[m][n],i,j,sum[m][n];
	//Read first matrix
	printf("First matrix of size %dx%d row by row:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//Read second matrix
		printf("Second matrix of size %dx%d row by row:\n",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//Find the sum
		printf("Sum:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
	
}
