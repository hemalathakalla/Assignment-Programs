#include<stdio.h>
int main()
{
    float weight,height;
    float BMI;
    printf("Enter weight in kg and height in meters:");
    scanf("%f%f",&weight,&height);
    BMI=weight/(height*height);
    if (BMI<18.5)
        printf(" BMI=%f & Underweight",BMI);
    else if (BMI>=18.5&&BMI<25)
        printf(" BMI=%f & Normal",BMI);
    else if (BMI>=25&&BMI<30)
        printf(" BMI=%f & Overweight",BMI);
    else
        printf("BMI=%f & Obese",BMI);
    return 0;
}