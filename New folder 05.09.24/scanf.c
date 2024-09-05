#include <stdio.h>
#include <string.h>

//-----------------------------
// Variables

char nickname[8];

//-----------------------------
// Body

int main (void)
{
    printf ("What is your name?\n");

    scanf("%7[^\n]", nickname); // '', \n, \t
    //scanf("%7s", nickname); // '', \n, \t
    
    printf ("Hi, %s\n", nickname);

    printf ("%d\n", strlen(nickname));
    printf ("%d\n", sizeof(nickname));

    return 0;
}