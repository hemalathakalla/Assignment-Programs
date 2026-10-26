#include<stdio.h>
int main()
{
    int amount,deliverycharge,membershiptype ;
    float discount,totalamount;
    printf("Enter amount:");
    scanf("%d",&amount);
    printf("Enter membership type (1 for premium, 0 for regular): ");
    scanf("%d", &membershiptype);
    if  (amount>=500)
    {
        if (membershiptype==1)
        {
            discount =amount*(10/100.0);
            deliverycharge =0;
            totalamount =(amount-discount)+deliverycharge;

            printf("\ntotal amount=%f",totalamount);
        }
        else
        {
            discount =0;
            deliverycharge=0;
            totalamount=amount-discount+deliverycharge;
            printf("\ntotal amount=%f",totalamount);
        }
    }
    else
    {
        deliverycharge=50;
        discount =0;
        totalamount =amount-discount+deliverycharge;
        printf("\ntotal amount=%f",totalamount);
    }
    return 0 ;
}
