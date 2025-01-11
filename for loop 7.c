main()
{
    int i, count=0;

    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            count++;
    }
    printf("Total even number between 1 to 10: %d",count);
}
