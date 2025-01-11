main()
{
    int marks;

    printf("Enter your marks:\n");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100)
    {
        printf("You got grade 'A+'");
    }
    else if(marks>=75 && marks<80)
    {
        printf("You got grade 'A'");
    }
    else if(marks>=70 && marks<75)
    {
        printf("You got grade 'A-'");
    }
    else if(marks>=65 && marks<70)
    {
        printf("You got grade 'B+'");
    }
    else if(marks>=60 && marks<65)
    {
        printf("You got grade 'B'");
    }
    else if(marks>=55 && marks<60)
    {
        printf("You got grade 'B-'");
    }
    else if(marks>=50 && marks<55)
    {
        printf("You got grade 'C+'");
    }
    else if(marks>=45 && marks<50)
    {
        printf("You got grade 'C'");
    }
    else if(marks>=40 && marks<45)
    {
        printf("You got grade 'D'");
    }
    else if(marks<40)
    {
       printf("You Failed");
    }
    else
    {
        printf("Invalid input!!!");
    }
}
