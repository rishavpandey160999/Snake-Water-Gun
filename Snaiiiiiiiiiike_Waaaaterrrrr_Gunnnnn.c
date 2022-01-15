#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
    char comp;
    char you;
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
    printf("\nYou chose %c and computer chose %c\n", you, comp);

    if (you != 'S' && you != 'W' && you != 'G')
    {
        /* code */ printf("Invalid Input\n");
    }

    else if (you == 'S' && comp == 'W')
    {
        /* code */ printf("You won\n");
    }

    else if (you == 'S' && comp == 'G')
    {
        /* code */ printf("You lost to computer\n");
    }

    else if (you == 'W' && comp == 'S')
    {
        /* code */ printf("You lost to computer\n");
    }

    else if (you == 'W' && comp == 'G')
    {
        /* code */ printf("You won\n");
    }

    else if (you == 'G' && comp == 'S')
    {
        /* code */ printf("You won\n");
    }

    else if (you == 'G' && comp == 'W')
    {
        /* code */ printf("You lost to computer\n");
    }

    else
    {
        printf("It's Tie!!!!!\n");
    }

    return 0;
}