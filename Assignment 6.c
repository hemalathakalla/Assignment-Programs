#include<stdio.h>
int main()
{
    int userID,password;
    printf("Enter user ID,password:");
    scanf("%d%d",&userID,&password);
    if (userID==101)
    {
        if (password==4321)
            printf("Login successful");
        else
            printf("Incorrect password");
    }
    else
    {
        printf("user not found");
    }
    return 0;
}