#include <stdio.h>
#include "retireMoney.h"

void retireMoney(int *userMoney)
{
    int moneyToRetire;
    printf("How much money do you want to retire?\n");
    scanf("%d", &moneyToRetire);
    if (*userMoney < moneyToRetire)
    {
        printf("You are trying to retire money that you don't have\n");
    }
    if (moneyToRetire < 0)
    {
        printf("You can't retire less than $0\n");
    }
    *userMoney -= moneyToRetire;
}