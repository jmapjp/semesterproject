#include <stdio.h>
#include "menu.h"

int main(void)
{
        int option;
        printf("------------------ Main Menu -----------------------\n");
        printf("1. Lab 2\n2. Lab 5\n3. Optional Requirement: RPi in action\n0 for exit\n");
        printf("Enter your Selection : ");
        scanf("%d",&option);
        return (option);
}
