main ()
{
    char gender;
    int salary,age,bonus;

   printf ("press m or M if Male || press f or F if Female\n");
   scanf("%ch",&gender);

      if  (gender == 'F' || gender  =='f' || gender =='m' ||gender =='M' )

       {
            printf("Enter your Age\n");
            scanf("%d",&age);

            printf("\nEnter your Salary\n");
            scanf("%d",&salary);


                if ((gender=='m')||(gender=='M'))
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
                if ((gender=='F')||(gender=='f'))
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
        else
            {
            printf("Invalid input\n\n");
            exit(0);
            }

}
