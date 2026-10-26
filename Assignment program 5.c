#include<stdio.h>
int main()
{
    int age,monthly_income,credit_score;
    printf("Enter age,monthly income,credit score:");
    scanf("%d%d%d",&age,&monthly_income,&credit_score);
    if (age>21&&age<60)
    {
        if (monthly_income>=25000)
        {
            if(credit_score>=700)
                printf("Loan approved");
            else
                printf("Loan rejected:credit score below 700");
        }
        else
            printf("Loan rejected:income below 25000");
    }
    else
        printf("Loan rejected:age not in 21 and 60");
}