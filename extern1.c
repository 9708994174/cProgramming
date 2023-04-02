#include<stdio.h>
#include"extern2.c"
int x=30; // global variable
int main()
{
	print();
	printf("%d",x); // change done by extern2.c file are also reflected
}
