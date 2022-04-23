#include<stdio.h>
#include<conio.h>
void main()
{
	int age;	//variable for getting age input
	clrscr();
	printf("\nEnter the Age");
	scanf("%d",&age);
	if(age>=18)	//conditionfor checking valid age
	{
		printf("\nYou are allowed for driving");	//if condition true
	}
	else
	{
		printf("\nYou are not allowed for driving");	//if condition false
	}
	getch();
}