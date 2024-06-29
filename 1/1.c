#include <stdio.h> // preprocessor

int main (void) // main function
{   
    int gold = 15;
    int hp_goblin = 3;
    char action;

    printf("You attacked by goblin. (A) to attack or (R) to run\n", hp_goblin);

    action = getchar();

    while (action != 'r')
    {
        if (action == 'a' || action == 'A')
    {
        hp_goblin = hp_goblin - 1;
        printf("You kick goblin. Goblin HP: %d\n", hp_goblin);
    }

    printf("You pressed: %c\n", action);

    if (hp_goblin < 1)
    {
        printf("You killed it.\n");
        printf("You get %d gold.\n", gold);
    }

    printf("Next action?\n");
    getchar(); // Clean buffer
    action = getchar();
    }

    printf("You've decided to run away! Good bye!\n");

    return 0;
}