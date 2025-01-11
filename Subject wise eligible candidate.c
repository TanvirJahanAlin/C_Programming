main ()
{
    int m, p, c, total_mpc ,total_mp;

    printf("Enter your Mathematics marks\n");
    scanf("%d",&m);
    printf("Enter your Physics marks\n");
    scanf("%d",&p);
    printf("Enter your Chemistry marks\n");
    scanf("%d",&c);

    total_mpc=m+p+c;
    total_mp=m+p;


    if((m>=60 && p>=50 && c>=40 && total_mpc>=200)||(total_mp>=150))
    {
        printf("You are Eligible");

    }
    else
        printf("You are not Eligible");
}
