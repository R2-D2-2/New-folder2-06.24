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

    fgets(nickname, sizeof(nickname), stdin); // \0

    if (nickname[strlen(nickname)-1] == '\n')
        nickname[strlen(nickname)-1] = '\0';

    printf ("Hi, %s\n", nickname);

    printf ("%d\n", strlen(nickname));
    printf ("%d\n", sizeof(nickname));

    return 0;
}