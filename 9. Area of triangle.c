/*Area of Triangle*/

#include<stdio.h>
#include<conio.h>

main()
{

    float a,b,c,s,area;
    printf("Enter the lenths of the sides:\n");
    scanf("%f%f%f",&a,&b,&c);

    s=((a+b+c)/2);
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\n\nArea of the triangle is:\t%f\n\n\n",area);

}

