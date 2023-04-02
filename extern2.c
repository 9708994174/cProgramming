void print()
{
	extern int x; // taking reference of global variable in different file or declaration
	printf("%d\n",x);
	x=x+10;
}
