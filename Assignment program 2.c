#include<stdio.h>
int main()
{
int a,b,area,perimeter;
printf("Enter sides of rectangle :");
scanf("%d%d",&a,&b);
area=a*b;
perimeter=2*(a+b);
printf("area=%d",area);
printf("\nperimeter=%d",perimeter);
return 0;
}