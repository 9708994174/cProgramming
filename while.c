#include<stdio.h>
int main()
{
//	int n,i=0;
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	while (i<n){
//		printf("\n%d", n);
//		n=n-1;
//}

//	int n,i=1;
//	printf("Enter a number :");
//	scanf("%d",&n);
//	while (i<=n){
//		printf("%d",i);
//		i++;
//	}
	
//	int n,i=1;
//	printf("Enter a number :");
//	scanf("%d",&n);
//	while (i<=n){
//		printf("%d",i);
//		i=i+2;
//	}


//	int n,i=1;
//	printf("Enter the number to print the table=");
//	scanf("%d",&n);
//	while (i<=10){
//		printf("\n%d * %d =%d",n,i,(n*i));
//		i++;
//	}



// printing 10 to 1 using do while
//	int n,i=0;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	do{
//		printf("\n%d",n);
//		n=n-1;
//		
//	}
//	while(n>i);



// Printing 1 to 10 number using do while  
//	int n,i=1;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	do{
//		printf("\n%d",i);
//		i++;
//		
//	}
//	while(n>i);



// Table printing by using do while
//	int n,i=1;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	do{
//		printf("\n%d * %d =%d",n,i,(n*i));
//		i++;
//
//	}
//	while(i<=10);

// using for loop print 10 to 1
//	int n,i=0;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	for (n;n>0;n=n-1){
//		printf("\n%d",n);
//	}


//using for loop print 1 to 10
//	int n,i=1;
//	printf("Enter a number: ");
//	scanf("%d",&n);
//	for (n;n>=i;i++){
//		printf("\n%d",i);
//	}

//	int n,i=1;
//	printf("Enter a number to print table : ");
//	scanf("%d",&n);
//	
//	for (n;i<=10;i++)
//	{
//		printf("\n%d * %d = %d",n,i,(n*i));
//	}

	int n,i,sum=0;
	printf("Enter the value: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum is %d",sum);
	return 0;
}
