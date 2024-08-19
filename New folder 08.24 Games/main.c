#include <stdio.h>

//-----------------------------
// Variables

char choise;
char choise_2;
int counter = 0;

//-----------------------------
// Body

int main (void)
{
    while (1)
    {
        if (choise_2 == 'c')
        {
            getchar();
        }
        
        choise_2 = 'r';
        printf ("You stand at the crossroads.\n");
        printf ("Left or right?\n");
        printf ("Click [A] left  or [D] right.\n");
        choise = getchar();

    //-----------------------------

        if (choise == 'a' || choise == 'A')
        {
            while (choise_2 != 'c')
            {
                if (choise == 'a' || choise == 'A')
                {   
                    counter++;

                    if (counter < 4)
                    {
                        printf ("You stand at the crossroads.\n");
                        printf ("You turned left.\n");
                        printf ("Left or right?\n");
                    }

                    if (counter == 4)
                    {
                        printf ("You win!\n");
                        printf ("Continue? Click [C].\n");
                        getchar ();
                        choise = getchar ();

                        if (choise == 'c' || choise == 'C')
                        {
                            counter = 0;
                            choise_2 = 'c';
                        }
                        else
                        {
                            printf ("Goodbye!\n");
                            return 0;
                        }
                    }

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

                if (counter != 0)
                {
                    getchar();
                    choise = getchar();
                }
            }
                printf ("You.\n");
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
}