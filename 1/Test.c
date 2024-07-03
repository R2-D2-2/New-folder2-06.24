#include <stdio.h>

char dot = 0;

unsigned char F_dot ()
{
    if (dot <1)           // Dot
    {
        printf("123\n");
    }
    else if (dot == 1)
    {
        printf("456\n");
    }
    else
    {
        dot = 0;
    }
    return;
}

char message;

int main (void)
{
    while (message != '!')
    {
        for (dot = 0; dot<10; dot++)
        if (dot > 7)
        {
            dot = 0;
        }

        message = getchar();
        getchar(); // Clean buffer

        if(message == '1')
        {
            unsigned char F_dot ();
        }
    }
        printf("Good bye!\n");
        return;
}