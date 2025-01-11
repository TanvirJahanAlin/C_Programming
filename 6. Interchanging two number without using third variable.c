main()
{

    int n1,n2;
    printf("Enter the first number");
    scanf("%d",&n1);

    printf("Enter the second number\n");
    scanf("%d",&n2);

    //n1=((n1+n2)-n1);
    //n2=((n1-n2)+((n1+n2)-n1));
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    //n1=(n1-(n1-n2));
    //n2=((n1-(n1-n2))+(n1-n2));



    printf("\n\n\nAfter interchanging the numbers are:%d,%d\n\n\n",n1,n2);


}
