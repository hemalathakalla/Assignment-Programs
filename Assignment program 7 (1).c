#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    (marks<0||marks>100)?printf("Invalid marks"):(marks<50)?printf("fail"):(marks<=59)?printf("C grade"):(marks<=69)?printf("B grade"):(marks<=79)?printf("A grade"):(marks<=89)?printf("A+ grade"):printf("O grade");
    return 0;
}