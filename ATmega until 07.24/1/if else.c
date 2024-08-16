#include <stdio.h>
 
int main(void)
{
    int x = 60;
      
    if(x > 60)
    {
        printf("if statement \n");
        printf("x is greater than 60 \n");
    }
    else if (x < 60)
    {
        printf("else if statement \n");
        printf("x is less than 60 \n");
    }
    else
    {
        printf("else statement \n");
        printf("x is equal 60 \n");
    }
    return 0;
}