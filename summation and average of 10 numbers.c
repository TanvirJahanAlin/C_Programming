main()
{
    int i,n,sum=0,count=0;
    float average;
    printf("Enter 10 numbers:\n");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        sum=sum+n;
        count++;
    }
    average=sum/count;
    printf("The sum of 10 numbers: %d",sum);
    printf("\nThe average of 10 numbers: %f",average);


}
