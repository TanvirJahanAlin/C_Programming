#include <stdio.h>
#include <conio.h>

main ()
{

    int years,days,months,a;

    printf("Enter the day(s)\n");
    scanf("%d",&days);

    years=days/365;
    a=days%365;
    months=a/30;
    days=a%30;

    printf("year(s):%d\tmonth(s):%d\tday(s):%d",years,months,days);

}

