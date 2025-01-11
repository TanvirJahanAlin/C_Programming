/*5.A program that will display three consecutive even numbers starting from any number you mention in the screen.*/

#include<stdio.h>
#include<conio.h>
 main()
{
	int num,a,b;

	printf("Enter a number:");
	scanf("%d",&num);

	a=num+2;
	b=a+2;

	printf("The three consecutive even numbers are: %d, %d, %d",num,a,b);

}
