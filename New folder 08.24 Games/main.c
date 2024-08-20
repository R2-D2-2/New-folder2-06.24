#include <stdio.h>

//-----------------------------
// Variables

char choise_1;
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
        choise_1 = getchar();

    //-----------------------------

        if (choise_1 == 'a' || choise_1 == 'A')
        {
            while (choise_2 != 'c')
            {
                if (choise_1 == 'a' || choise_1 == 'A')
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
                        choise_1 = getchar ();

                        if (choise_1 == 'c' || choise_1 == 'C')
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
                else if (choise_1 != 'a' || choise_1 != 'A')
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
                    choise_1 = getchar();
                }
            }
        }
        else if (choise_1 == 'd' || choise_1 == 'D')
        {
            while (choise_1 != 'c')
            {
                if (choise_1 == 'd' || choise_1 == 'D')
                {   
                    counter++;

                    if (counter < 4)
                    {
                        printf ("You stand at the crossroads.\n");
                        printf ("You turned right.\n");
                        printf ("Left or right?\n");
                    }

                    if (counter == 4)
                    {
                        printf ("You win!\n");
                        printf ("Continue? Click [C].\n");
                        getchar ();
                        choise_1 = getchar ();
                        
                        if (choise_1 == 'c' || choise_1 == 'C')
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
                else if (choise_1 != 'd' || choise_1 != 'D')
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
                    choise_1 = getchar();
                }
            }
        
        }
        else
        {
            printf ("Wasted1\n");
            return 0;
        }
    }
}