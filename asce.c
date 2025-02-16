#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf("Enter how many numbers");
	scanf("%d",&n);
	//Entering section
	printf("\n Enter %d numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//Sorting
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	// Displaying
	printf("Ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
	
	
}
