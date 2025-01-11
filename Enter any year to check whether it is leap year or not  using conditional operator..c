#include <stdio.h>
#include <conio.h>

main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    ((year%4==0&&year%100!=0)||(year%400==0)) ? printf("%d is a leap year",year) : printf("%d is not a leap year",year);
}
