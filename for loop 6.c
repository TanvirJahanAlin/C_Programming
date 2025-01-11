main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)

        if(i%2==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }

        printf("Sum of first 5 even number: %d",sum);

}

