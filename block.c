// blocke scoped variable
#include<stdio.h>
//int main()
//{
//	int b=2;
//	{
//		int a=1;
//		printf("\n Value of a is:%d",a);
//	}
//	printf("\n Value of b is:%d",b);
//	return 0;
//}

// global variable
//int a=1;
//void print();
//int main()
//{
//	printf("\nValue of a is:%d",a);
//	print();
//	return 0;
//}
//void print()
//{
//	printf("\n Value of a is:%d",a);
//}
 

// scope rules
//int a=10; // a is global variable here
//void print();
//int main()
//{
//	int a=1;
//	printf("\nValue of a is:%d",a); // it will access local a
//	print();
//	return 0;
//	
//}
//void print()
//{
//	printf("\n Value of a is:%d",a); // it will access global a
//	
//}

int a=10;
void print();
int main()
{
	printf("\n Value of a is:%d ",a);
	print();
	printf("\n Value of a is:5d",a);
	return 0;
}
void print()
{
	printf("\n Value of a is:%d",a);
	a=20;
}




