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

    if (choise == 'a')
    {
        printf ("You stand at the crossroads.\n");
        printf ("Left or right?\n");
    }
    else
    {
        printf ("Wasted\n");
    }
    return 0;
}