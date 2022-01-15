#include <stdio.h>

#include "ui.h"

void app_banner()
{
    printf("-----------------------------------------------\n");
    printf("\tWelcome to Phonebook Application\n");
    printf("-----------------------------------------------\n");
}

void main_menu()
{
    app_banner();
    int choice;
    printf("\n");
    printf("\t1. Add new contact\n");
    printf("\t2. View contacts\n");
    printf("\t3. Search contact\n");
    printf("\t4. Quit\n");
    printf("\n");
    printf("\tChoice: ");
    scanf("%d", &choice);
}

