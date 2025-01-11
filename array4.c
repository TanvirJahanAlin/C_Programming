main()
{
    int A[3]={10,20,30}, x;
    printf("Enter any value:\n");
    scanf("%d",&x);
    for(int i=0;i<=2;i++)
    {
        switch (A[i])
        {
        case 10:
            printf("It is available in the array");
            break;
        case 20:
            printf("It is available in the array");
            break;
        case 30:
            printf("It is available in the array");
            break;
        default:
            printf("It is not available in the array");

        }
    }

}
