#include<stdio.h>
#include<conio.h>
main()
{
    char ch;
    int k=1,l=65;
    while(1)
    {
    printf("Press\na.\n12345\n12345\n12345\nb.\n54321\n54321\n54321\nc.\n1\n23\n456\nd.\n1\n22\n333\ne.\n*\n**\n***\nf.\n111\n222\n333\ng.\nABCDE\nABCDE\nABCDE\nh.\nA\nBC\nDEF\n");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
        }
    break;

    case 'b':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=5;j>=1;j--)
                {
                    printf("%d",j);
                }
                printf("\n");
            }
        }
    break;

    case 'c':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d",k++);
                }
                printf("\n");
            }
        }
    break;

    case 'd':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
        }
    break;

    case 'e':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("*");
                }
                printf("\n");
            }
        }
    break;

    case 'f':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=3;j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
        }
    break;

    case 'g':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=5;j++)
                {
                    printf("%c",j+64);
                }
                printf("\n");
            }
        }
    break;

    case 'h':
        {
            for (int i=1;i<=3;i++)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%c",l++);
                }
                printf("\n");
            }
        }
    }
    }
}
