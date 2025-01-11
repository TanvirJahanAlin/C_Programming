main()
{
    int i,n,sum1=0,sum2=0;

    printf("Enter 10 numbers:\n");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);

        if(n%2!=0)
            sum1=sum1+n;

        else
            sum2=sum2+n;
    }

    printf("Sum of the odd numbers:%d\teven numbers:%d",sum1,sum2);

}
