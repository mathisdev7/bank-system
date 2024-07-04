#include <stdio.h>
#include "lib/retireMoney.h"
#include "lib/depositMoney.h"

int userMoney = 100;

int main(void)
{
    int choice;
    char *choices[] = {"retire", "deposite", "cancel"};
    printf("Welcome, you have $%d in your account\n", userMoney);
    printf("Would you like to :\n1. Retire\n2. Deposite\n3. Cancel\n");
    scanf("%d", &choice);
    char *inputChoice = choices[choice - 1];
    printf("You have choosed to %s\n", inputChoice);
    switch (choice - 1)
    {
    case 0:
    {
        retireMoney(&userMoney);
        main();
    }
    case 1:
    {
        depositMoney(&userMoney);
        main();
    }
    case 2:
    {
        int userChoice;
        printf("Are you sure that you want to cancel?\n1. Yes\n2. No\n");
        scanf("%d", &userChoice);
        if (userChoice == 1)
        {
            printf("Okay, bye...\n");
        }
        if (userChoice == 2)
        {
            main();
            break;
        }
        break;
    }
    }
    return 0;
}