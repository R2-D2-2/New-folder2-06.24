#include <stdio.h>
 
int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d", i);
    }
    return 0;
}

#include <stdio.h>
int main(void)

// squares of numbers

{
    for (int i = 0; i < 9; i++)
    {
        printf("%d * %d = %d \n", i, i,  i * i);
    }
    return 0;
}

int i = 1;
for ( ; i < 9 ; )
{
    printf("%d * %d = %d \n", i, i,  i * i);
    i++;
}

// The multiplication table 

#include <stdio.h>
int main(void)
{
    for (int i=1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d \t", i * j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    int i = 6;
    do
    {
        printf("%d", i);
        i--;
    }
    while (i > 0);
    return 0;
}

#include <stdio.h>
int main(void)
{
    int i = 6;
    while (i > 0)
    {
        printf("%d \n", i);
        i--;
    }
    return 0;
}

int i = 1;
for ( ; ; )
{
    printf("%d * %d = %d \n", i, i,  i * i);
    i++;
    if (i > 5) break;
}

// The sum of odd numbers

#include <stdio.h>
int main(void)
{
    int result = 0;
    for (int i=0; i<10; i++)
    {
        if (i % 2 == 0) continue;
        result +=i;
    }
    printf("result = %d", result);  // 25
    return 0;
}