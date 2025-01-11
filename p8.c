#include<stdio.h>
#include<conio.h>
main()
{
    int k=65;
    for (int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",k++);
        }
        printf("\n");
    }
}
