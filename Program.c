#include <stdio.h>

int main()
{
    char name,country,skill;
    int age;
    printf("Welcome to Hacktoberfest 2020\n");
    printf("Enter your name : Chami");//Get User name
    scanf("%s",&name);
    printf("Enter your Country of Residance : Sri Lanka");//Get user country
    scanf("%s",&country);
    printf("Enter your Age : 20");//Get user Age
    printf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : B");//Get user skill level
    scanf(" %s",&skill);
    scanf("Thank you %c Happy Hacking",country);//Thank the user

    return 0;
}
