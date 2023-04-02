#include<stdio.h>
int main()
{
	int array[100],position,c,n,value;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
		
	}
	printf("Enter the location where you want to delete from an array:");
	scanf("%d",&position);
	
	
	for(c=position-1;c<n-1;c++)
	{
		array[c]=array[c+1];
		
	}
	array[position-1]=value;
	printf("Resultant array is:\n");
	
	for(c=0;c<=n;c++)
	{
		printf("%d\n",array[c]);
	}
	return 0;
}
