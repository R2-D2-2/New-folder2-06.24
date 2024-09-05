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
    gets(nickname); // until 2011 C
    printf ("Hi, %s\n", nickname);

    printf ("%d\n", strlen(nickname));
    printf ("%d\n", sizeof(nickname));

    return 0;
}