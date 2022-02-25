#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int menu(); //prototype
void execute_action(int_action);
int main()
{
    printf("COUNTY LIBRARY!\n");
    printf("Welcome Mr. John!n");
    execute_action(menu());
    return 0;
}

int menu()
(
 int action;
 do {
        print f("select an action:\n");
        printf("1. Add new patron\");
        printf("2. View Patrons\n");
        printf("3. View books\n");
        printf("4. Add New Book\n");
        printf("Your Action(1-4): \");
        scanf("%d",&action);
        if(action < 1 || action > 4) (
          system("cls");
          printf("Invalid Action. Try again.\n");
      }
 ) while (action < 1 || action > 4);
 return action;

 }

 void execute_action(int action) {
     printf("The action is %d",action);
