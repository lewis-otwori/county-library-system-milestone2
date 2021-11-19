/*
    PROJECT:  COUNTY LIBRARY   SYSTEM
    AUTHOR:   LEWIS OBUBA OTWORI
    DATE:     19TH   NOVEMBER  2021
    COMPILER: GCC    GNC
    LANGUAGE: C99
    LICENSE:  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();
int main()
{
    int action;
    action = menu();
    execute_action(action);
    return 0;
}

void execute_action(int action) {
    printf("You selected action %d",action);
}
int menu() // header/prototype
{
    int action;
    do {
        printf("\tcounty Library!\n");
        printf("Welcome Mr. Lewis. \n");
        printf("What would you like to do?\n");
        printf("1. View users.\n");
        printf("2. Add new user\n");
        printf("3. Edit User\n");
        printf("4. Delete user\n");
        printf("5. Change Password\n");
        printf("6. Log out\n");
        printf("7. Exit system\n");
        printf("Selected Action(1-7):");
        scanf("%d",&action);
        if ( action < 1 || action > 7) {
            printf("Invalid action!!! Try again.\n");
       }
    } while ( action < 1 || action > 7);
    return action;
}
