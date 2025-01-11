main ()
{
    int n1,n2;
    char a;

    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter any symbol(+,-,*):\n");
    scanf(" %ch",&a);

    if(a=='+')
    {
        printf("n1+n2=%d",n1+n2);
    }
    else if(a=='-')
    {
        printf("n1-n2=%d",n1-n2);
    }
    else if(a=='*')
    {
        printf("n1*n2=%d",n1*n2);
    }
    else
        printf("Sorry");

}

