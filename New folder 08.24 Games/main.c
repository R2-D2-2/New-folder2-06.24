#include <stdio.h>

//-----------------------------
// Variables

char choise;

//-----------------------------
// Body

int main (void)
{
    printf ("You stand at the crossroads.\n");
    printf ("Left or right?\n");
    printf ("Click 'A' left  or 'D' right.\n");
    choise = getchar();

//-----------------------------

    if (choise == 'a' || choise == 'A')
    {
        while (choise != 'd')
        {
            if (choise == 'a' || choise == 'A')
            {
                printf ("You stand at the crossroads.\n");
                printf ("You turned right.\n");
                printf ("Left or right?\n");
            }
            else if (choise == 'd' || choise == 'D')
            {
                choise = 'd';
            }
            else
            {
                printf ("You stand at the crossroads.\n");
            }

            getchar();
            choise = getchar();
        }
        printf ("Wasted\n");
        return 0;
    }

//-----------------------------

    if (choise == 'd' || choise == 'D')
    {
        while (choise != 'a')
        {
            if (choise == 'd' || choise == 'D')
            {
                printf ("You stand at the crossroads.\n");
                printf ("You turned left.\n");
                printf ("Left or right?\n");
            }
            else if (choise == 'a' || choise == 'A')
            {
                choise = 'a';
            }
            else
            {
                printf ("You stand at the crossroads.\n");
            }

            getchar();
            choise = getchar();
        }
        printf ("Wasted\n");
        return 0;
    }

}