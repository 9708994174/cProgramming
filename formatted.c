#include<stdio.h>
#include<conio.h>
int main()
{
//	int a=6543;
//	printf("*%06d,*%-5d*",a,a);
//	return 0;

//	float a=654.123456;
//	printf("%0.3f,%0.2f",a,a);
//	return 0;


	
//		char ch;
//		printf("Enter the character value : ");
//		ch=getchar();
//		printf("You have enter the value %c");
//		putchar(ch);
		
//		printf("Enter two alphabets: ");
//		getche();
//		getch();
//	
//	char ch[30];
//	printf("Enter the string:");
//	gets(ch);
//	puts("Entered string is:");
//	puts(ch);
//	

	// write a programme to ask the user to enter name,city,and state and then dispaly that to the user using 
	// unformatted function
	
//		char ch[20],ci[20],st[20];
//		puts("Enter your name: ");
//		gets(ch);
//	
//		puts("Enter your city:");
//		gets(ci);
//	
//		puts("Enter your state:");
//		gets(st);
//		puts("You have entered:");
//		puts(ch);
//		puts("You have entered:");
//		puts(ci);
//		puts("You have entered:");
//		puts(st);
//		
		// write a programme to ask the user to enter roll no.,reg no.,name,city,state,cgpa
		// display the wohle detail to the user
			printf("\tDetails");
			char na[10],city[10],state[10];
			puts("\nEnter your name:");
			gets(na);
			puts("\nEnter your city name:");
			gets(city);
			puts("\nEnter your state name:");
			gets(state);
			
			int roll,reg;
			printf("\nEnter your roll_no:");
			scanf("%d",&roll);
			printf("\nEnter your reg_no:");
			scanf("%d",&reg);
			
			float cgpa;
			printf("\nEnter your CGPA:");
			scanf("%f",&cgpa);
			
			printf("\nYour name is %s", na);
			printf("\nYour city name is %s", city);
			printf("\nYour state name is %s", state);
			printf("\nYour roll_no is %d", roll);
			printf("\nYour reg_no is %d", reg);
			printf("\nYour CGPA is %f", cgpa);
			
	return 0;
}
