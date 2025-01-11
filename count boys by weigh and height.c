main()
{
    int weight,height,i,count=0;

    printf("Enter weight and height of boys\n");

    for(i=1;i<=10;i++)
    {
        scanf("%d%d",&weight,&height);
        if(weight<50&&height>170)
        count++;
    }
    printf("\nTotal boys:%d",count);
}
