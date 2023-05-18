// Coding Rock, Paper, Scissors
// Game between 1 player and system
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % 3;
}

int main()
{
    char a, ch, name[30];
    do
    {

        int p1 = 0, p2 = 0, ch1, ch2;
        printf("You have only 3 chances\n");
        printf("Enter your name\n");
        scanf("%s", &name);
        printf("****@***** THE GAME BEGINS NOW ******@*****\n");
        for (int i = 0; i < 3; i++)
        {
            printf("%s Press 1 for stone, 2 for paper, 3 for scissor\n", name);
            scanf("%d", &ch1);
            ch2 = generateRandomNumber(3);
            if (ch1 == 1 && ch2 == 0)
            {
                printf("It's a draw\n");
            }
            else if (ch1 == 1 && ch2 == 1)
            {
                printf("System wins this round\n");
                p2++;
            }
            else if (ch1 == 2 && ch2 == 0)
            {
                printf("%s wins this round\n", name);
                p1++;
            }
            else if (ch1 == 2 && ch2 == 1)
            {
                printf("It's a draw\n");
            }
            else if (ch1 == 2 && ch2 == 2)
            {
                printf("System wins this round\n");
                p2++;
            }
            else if (ch1 == 3 && ch2 == 1)
            {
                printf("%s wins this round\n", name);
                p1++;
            }
            else if (ch1 == 3 && ch2 == 2)
            {
                printf("It's a draw\n");
            }
            else if (ch1 == 1 && ch2 == 2)
            {
                printf("%s wins this round\n", name);
                p1++;
            }
            else if (ch1 == 3 && ch2 == 0)
            {
                printf("System wins this round\n");
                p2++;
            }
            printf("\n");
        }
        printf("%s you scored %d\n", name, p1);
        printf("System scored %d\n", p2);
        if (p1 < p2)
        {
            printf("System wins\n");
        }
        else if (p1 > p2)
        {
            printf("%s wins\n");
        }
        else
            printf("It's a draw\n");

        printf("Do you want to continue? y/n\n");
        fflush(stdin);
        scanf("%c", &ch);

    } while (ch == 'Y' || ch == 'y');

    return 0;
}