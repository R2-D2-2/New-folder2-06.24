#include <stdio.h>

//-----------------------------
// Variables

char choise;
int counter = 1;

//-----------------------------
// Body

int main (void)
{
    printf ("You stand at the crossroads.\n");
    printf ("Left or right?\n");
    printf ("Click [A] left  or [D] right.\n");
    choise = getchar();

//-----------------------------

    if (choise == 'a' || choise == 'A')
    {
        while (choise != 'c')
        {
            if (choise == 'a' || choise == 'A')
            {   
                if (counter == 4)
                {
                    printf ("You win!\n");
                    printf ("Continue? Click [C].\n");
                    getchar ();
                    choise = getchar ();

                    if (choise == 'c' || choise == 'C')
                    {
                        counter = 0;
                        printf ("You stand at the crossroads.\n");
                        printf ("Left or right?\n");
                        printf ("Click [A] left  or [D] right.\n");
                        choise = 'c';
                    }
                    else
                    {
                        printf ("Goodbye!\n");
                        return 0;
                    }
                }

            counter++;
            printf ("You stand at the crossroads.\n");
            printf ("You turned left.\n");
            printf ("Left or right?\n");

            }
            else if (choise != 'a' || choise != 'A')
            {
                printf ("Wasted\n");
                return 0;
            }
            else
            {
                printf ("You stand at the crossroads.\n");
            }

            getchar();
            choise = getchar();
        }
            printf ("You stand at the.\n");
    }

//-----------------------------

    if (choise == 'd' || choise == 'D')
    {
        while (choise != 'c')
        {
            if (choise == 'd' || choise == 'D')
            {   
                if (counter == 4)
                {
                    printf ("You win!\n");
                    printf ("Continue? Click [C].\n");
                    getchar ();
                    choise = getchar ();
                    
                    if (choise == 'c' || choise == 'C')
                    {
                        counter = 0;
                        printf ("You stand at the crossroads.\n");
                        printf ("Left or right?\n");
                        printf ("Click [A] left  or [D] right.\n");
                        choise = 'c';
                    }
                    else
                    {
                        printf ("Goodbye!\n");
                        return 0;
                    }
                }

            counter++;
            printf ("You stand at the crossroads.\n");
            printf ("You turned right.\n");
            printf ("Left or right?\n");

            }
            else if (choise != 'd' || choise != 'D')
            {
                printf ("Wasted\n");
                return 0;
            }
            else
            {
                printf ("You stand at the crossroads.\n");
            }

            getchar();
            choise = getchar();
        }
    
    }

}