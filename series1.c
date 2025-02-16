#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	float i,sum=0,a;
	printf("Enter the value of n");
	scanf("%d ",&n);
	for(i=1.0;i<=n;i++)
	{
		a=i/(i+1);
		sum+=a;
	}
	printf("Sum=%.2f",sum);
	getch();
	return 0;
	
}
