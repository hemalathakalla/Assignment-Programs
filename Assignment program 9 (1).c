#include<stdio.h>
int main()
{
    char a,e,i,o,u,c;
    printf("Enter any character:");
    scanf("%c",&c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("Entered character is Vowel");
    else
        printf("Entered character is consonant");
    return 0;
}