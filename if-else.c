#include <stdio.h>
#include <conio.h>
main ()
{
    int a,b,larger;
    printf ("Enter two number");
    scanf("%d%d",&a,&b);
    if (a>b)
        larger=a;

    else
        larger=b;
    printf ("Larger value=%d",larger);

}
