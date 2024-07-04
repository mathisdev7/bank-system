#include <stdio.h>
#include "depositMoney.h"

void depositMoney(int *userMoney)
{
    int moneyToDepose;
    printf("How much money do you want to deposite?\n");
    scanf("%d", &moneyToDepose);
    if (moneyToDepose < 0)
    {
        printf("You can't deposite less than $0");
    }
    *userMoney += moneyToDepose;
}