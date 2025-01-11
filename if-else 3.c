#include <stdio.h>
#include <conio.h>
main ()
{
    char gender;
    int salary,age,bonus;

    printf("Enter your Salary\n");
        scanf("%d",&salary);

    printf("Enter your Age\n");
        scanf("%d",&age);

    printf ("If you are a Male press Y\nIf you are a Female press N\n");
        scanf(" %ch",&gender);

    if ((gender=='Y')||(gender=='y'))
    {
        if(age<=20)
        {
            bonus=salary*0.5;
            printf("Your Bonus=%d",bonus);
        }
        else
        {
            bonus=salary*0.4;
            printf("Your Bonus=%d",bonus);
        }
    }

    if ((gender=='N')||(gender=='n'))
    {
        if(age>=24)
        {
            bonus=salary*0.5;
            printf("Your Bonus=%d",bonus);
        }
        else
        {
            bonus=salary*0.6;
            printf("Your Bonus=%d",bonus);
        }
    }
}
