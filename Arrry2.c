//Substraction of two matrix
#include<stdio.h>
int main()
{
	float a[3][3],b[3][3],c[3][3];
	int i,j;
	printf("Enter elements of first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a%d%d:",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a%d%d:",i,j);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j] - b[i][j];
		}
		
		}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.1f\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
