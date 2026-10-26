#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if (num>0)
        printf(" %d is Positive number",num);
    else if (num==0)
        printf("%d is zero",num);
    else
        printf("%d is Negative number ",num);
    return 0;

}