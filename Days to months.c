#include <stdio.h>
#include <conio.h>

main ()
{

    int days,months;
    printf("Enter the days\n");
    scanf("%d",&days);
    months=days/30;
    days=days%30;

    printf("months:%d   days:%d",months,days);

}
