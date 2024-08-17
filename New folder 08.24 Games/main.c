#include <stdio.h>

//-----------------------------
// Variables

char choise;
int counter = 0;

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
                counter++;
                printf ("You stand at the crossroads.\n");
                printf ("You turned right.\n");
                printf ("Left or right?\n");
                
                //printf ("counter = %d\n", counter);
                
                if (counter == 4)
                {
                    printf ("You win!\n");
                    printf ("Continue? Click [enter].\n");
                    getchar ();
                    choise = getchar ();
                    if (choise == 10)
                    {
                        counter = 0;
                        printf ("You stand at the crossroads.\n");
                        printf ("Left or right?\n");
                        printf ("Click 'A' left  or 'D' right.\n");
                        choise = 'd';
                    }
                    else
                    {
                        printf ("Goodbye!\n");
                        return 0;
                    }
                }
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
        //return 0;
    }

//-----------------------------

    if (choise == 'd' || choise == 'D')
    {
        while (choise != 'a')
        {
            if (choise == 'd' || choise == 'D')
            {
                counter++;
                printf ("You stand at the crossroads.\n");
                printf ("You turned left.\n");
                printf ("Left or right?\n");
                if (counter == 4)
                {
                    printf ("You win!\n");
                    return 0;
                }
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