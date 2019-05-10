#include<stdio.h>
//Its print out of your total bill
int main()
{
    double unit,vat,TotalAmount=0;
    printf("Enter your Unit of this month :");
    //Put your input
    scanf("%lf",&unit);
    if(unit >=1 && unit<=100)
    {
        //Its the calculation for up to 1 to 100
        unit=unit*5;
        vat=unit*0.15;
        TotalAmount=unit+vat;
        printf("Enter your Amount : %lf",TotalAmount);

    }
    //If your input is grater than 100 to 500
        else if(unit >=101 && unit<=500)
        {
            //Its the calculation for up to 100 to 500
            unit=unit*10;
            vat=unit*0.15;
            TotalAmount=unit+vat;
            printf("Enter your Amount : %lf",TotalAmount);

        }
        //If your input is grater than 500 to infinity
        else if(unit>=501)
        {
            //Its the calculation for up to 500
            unit=unit*15;
            vat=unit*0.15;
            TotalAmount=unit+vat;
            printf("Enter your Amount : %lf",TotalAmount);

        }
}
