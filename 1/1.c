#include <stdio.h> // preprocessor

int main (void) // main function
{   
    int gold = 15;
    int hp_goblin = 3;
    char attack;

    printf("You attacked by goblin. Goblin HP: %d\n", hp_goblin);

    attack = getchar();

    if (attack == 'a')
    {
        hp_goblin = hp_goblin - 1;
        printf("You kick goblin. Goblin HP: %d\n", hp_goblin);
    }

    printf("You pressed: %c\n", attack);

    /*printf("You kick goblin. Goblin HP: %d\n", hp_goblin);

    hp_goblin = hp_goblin - 1;*/

    if (hp_goblin < 1)
    {
        printf("You killed it.\n");
        printf("You get %d gold.\n", gold);
    }
    else
    {
        printf("Goblin run away!\n");
    }

    return 0;
}