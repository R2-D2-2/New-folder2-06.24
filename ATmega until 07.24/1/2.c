#include <stdio.h>
#include <math.h> // just in case

// s = 1^2 + 2^2 + 3^2 +...+ n^2

int main (void)
{
    int n;
    int s = 0;

    printf("Enter a variable, n = \n");
    if (scanf("%d",&n) != 1)
    {
        printf("Error input\n");
        return 0;
    }

    while (n > 0)
    {
        s += n * n;
        n--;
    }
    printf("s = %d\n", s);

    return 0;
}