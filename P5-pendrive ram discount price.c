#include<stdio.h>

int main()
{

    int pp,ppa,rp,rpa;          /* pp-pendrive price, ppa-pendrive purchase amount, rp-RAM price, rpa-RAM purchase amount */
    float pdp,ptp,rdp,rtp;      /* pdp-pendrive discount price, ptp-pendrive total price, rdp-RAM discount price, rtp-RAM total price */
    char a;

    printf("What do you want to buy?\nPress 'P' for Pen Drive, 'R' for RAM and If you want to buy both then press 'B'.\n");
    scanf("%c",&a);

    switch(a)
    {
    case('p'):
    case('P'):

        printf("Enter the Pen Drive price:\n");
        scanf("%d",&pp);
        printf("Enter your purchase amount:\n");
        scanf("%d",&ppa);

        if(ppa>=0&&ppa<=100)
        {
            printf("Sorry!!!You won't be provided any discount.\n");
            ptp=ppa*pp;
            printf("You need to pay amount BDT: %.2f",ptp);
        }

        else if(ppa>=101&&ppa<=200)
        {
            printf("CONGRATULATION!!!You are getting 5%c discount on your Pen Drive purchase.\n",37);
            pdp=(ppa*pp)*0.05;
            ptp=(ppa*pp)-pdp;
            printf("You need to pay amount BDT: %.2f",ptp);
        }

        else if(ppa>=201&&ppa<=300)
        {
            printf("CONGRATULATION!!!You are getting 7.5%c discount on your Pen Drive purchase.\n",37);
            pdp=(ppa*pp)*0.075;
            ptp=(ppa*pp)-pdp;
            printf("You need to pay amount BDT: %.2f",ptp);
        }

        else if(ppa>300)
        {
            printf("CONGRATULATION!!!You are getting 10%c discount on your Pen Drive purchase.\n",37);
            pdp=(ppa*pp)*0.1;
            ptp=(ppa*pp)-pdp;
            printf("You need to pay amount BDT: %.2f",ptp);
        }

        else
        {
            printf("Invalid input!!!");
        }

    break;

    case('r'):
    case('R'):

        printf("Enter the RAM price:\n");
        scanf("%d",&rp);
        printf("Enter your purchase amount:\n");
        scanf("%d",&rpa);

        if(rpa>=0&&rpa<=100)
        {
            printf("CONGRATULATION!!!You are getting 5%c discount on your RAM purchase.\n",37);
            rdp=(rpa*rp)*0.05;
            rtp=(rpa*rp)-rdp;
            printf("You need to pay amount BDT: %.2f",rtp);
        }

        else if(rpa>=101&&rpa<=200)
        {
            printf("CONGRATULATION!!!You are getting 7.5%c discount on your RAM purchase.\n",37);
            rdp=(rpa*rp)*0.075;
            rtp=(rpa*rp)-rdp;
            printf("You need to pay amount BDT: %.2f",rtp);
        }

        else if(rpa>=201&&rpa<=300)
        {
            printf("CONGRATULATION!!!You are getting 10%c discount on your RAM purchase.\n",37);
            rdp=(rpa*rp)*0.1;
            rtp=(rpa*rp)-rdp;
            printf("You need to pay amount BDT: %.2f",rtp);
        }

        else if(rpa>300)
        {
            printf("CONGRATULATION!!!You are getting 15%c discount on your RAM purchase.\n",37);
            rdp=(rpa*rp)*0.15;
            rtp=(rpa*rp)-rdp;
            printf("You need to pay amount BDT: %.2f",rtp);
        }

        else
        {
            printf("Invalid input!!!");
        }

    break;

    case('b'):
    case('B'):

        printf("Enter the Pen Drive price:\n");
        scanf("%d",&pp);
        printf("Enter your Pen Drive purchase amount:\n");
        scanf("%d",&ppa);
        printf("Enter the RAM price:\n");
        scanf("%d",&rp);
        printf("Enter your RAM purchase amount:\n");
        scanf("%d",&rpa);

        if(ppa>=0&&ppa<=100)
        {
            printf("You won't be provided any discount on your Pen Drive purchase but ");
            ptp=ppa*pp;
        }

        else if(ppa>=101&&ppa<=200)
        {
            printf("CONGRATULATION!!!You are getting 5%c discount on your Pen Drive purchase and ",37);
            pdp=(ppa*pp)*0.05;
            ptp=(ppa*pp)-pdp;
        }


        else if(ppa>=201&&ppa<=300)
        {
            printf("CONGRATULATION!!!You are getting 7.5%c discount on your Pen Drive purchase and ",37);
            pdp=(ppa*pp)*0.075;
            ptp=(ppa*pp)-pdp;
        }


        else if(ppa>300)
        {
            printf("CONGRATULATION!!!You are getting 10%c discount on your Pen Drive purchase and ",37);
            pdp=(ppa*pp)*0.1;
            ptp=(ppa*pp)-pdp;
        }


        else
        {
            printf("Invalid input!!!");
        }


        if(rpa>=0&&rpa<=100)
        {
            printf("5%c discount on your RAM purchase.",37);
            rdp=(rpa*rp)*0.05;
            rtp=(rpa*rp)-rdp;
        }


        else if(rpa>=101&&rpa<=200)
        {
            printf("7.5%c discount on your RAM purchase.",37);
            rdp=(rpa*rp)*0.075;
            rtp=(rpa*rp)-rdp;
        }


        else if(rpa>=201&&rpa<=300)
        {
            printf("10%c discount on your RAM purchase.",37);
            rdp=(rpa*rp)*0.1;
            rtp=(rpa*rp)-rdp;
        }


        else if(rpa>300)
        {
            printf("15%c discount on your RAM purchase.",37);
            rdp=(rpa*rp)*0.15;
            rtp=(rpa*rp)-rdp;
        }


        else
        {
           printf("Invalid input!!!");
        }


        printf("\nYou need to pay amount BDT: %.2f",ptp+rtp);

    break;
    default:
        {
           printf("Press again!!!");
        }

    break;
    }
}
