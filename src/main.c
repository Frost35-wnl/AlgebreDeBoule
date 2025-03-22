// Nom : main.c
// Author : Frost35-wnl
#include "../include/projectLibrary.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char userChoice = 0;

    do
    {
        system("clear");
        userChoice = 0;
        afficherMenu();
        userChoice = getchar();
        while (getchar() != '\n')
            ;

        switch (userChoice)
        {
        case '1':
        {
            transcodage();
            break;
        }
        case '2':
        case '3':
        {
            system("clear");
            printf("\nEn stade de développement");
            fflush(stdout);
            system("sleep 5");
            
            break;
        }
        case 'q':
            return 0;
        }

    } while (1);

    return 0;
}
