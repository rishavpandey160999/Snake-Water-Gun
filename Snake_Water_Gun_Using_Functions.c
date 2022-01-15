#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int decide(char you, char comp);
int main()

{
    char comp;
    char you;
    int result;
    srand(time(0));
    int a = rand() % 3;

    if (a == 0)
    {
        comp = 'S';
    }

    else if (a == 1)
    {
        comp = 'W';
    }

    else
    {
        comp = 'G';
    }

    printf("\nLets Start the game :-)\n\n");
    printf("Enter 'S' for Snake, 'W' for Water, 'G' for Gun\n");
    scanf("%c", &you);
    

    if (you != 'S' && you != 'W' && you != 'G')
    {
        printf("Invalid Input\n");
    }

    else
    {
        result = decide(you, comp);
        printf("\nYou chose %c and computer chose %c\n", you, comp);
    }

    if (result == 0)
    {
        printf("It's Tie!!!!\n");
    }

    else if (result == 1)
    {
        printf("You won\n");
    }

    else if (result == -1)
    {
        printf("You lost to computer\n");
    }

    return 0;
}

int decide(char you, char comp)
{

    if (you == 'S' && comp == 'W')
    {
        return 1;
    }

    else if (you == 'S' && comp == 'G')
    {
        return -1;
    }

    else if (you == 'W' && comp == 'S')
    {
        return -1;
    }

    else if (you == 'W' && comp == 'G')
    {
        return 1;
    }

    else if (you == 'G' && comp == 'S')
    {
        return 1;
    }

    else if (you == 'G' && comp == 'W')
    {
        return -1;
    }

    else
    {
        return 0;
    }
}