#include<stdio.h>
int main()
{
	int x=10;
	char ch='A';
	float f=10.11;
	void *gp;
	gp=&x;

	printf("\n Generic pointer points to the integer value=%d",*(int*)gp);
	gp=&ch;
	printf("\n Generic pointer now points to the character %c",*(char*)gp);
	gp=&f;
	printf("\n Generic pointer now points to the character %f",*(float*)gp);
	return 0;
}
