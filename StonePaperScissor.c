#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//Harsh Shrivastava
int main()
{
    int hihi;
    int score[3];
    char choice;
    int re;
    printf("\"Welcome To Stone Paper Scissor Game\"\n");
    printf("RULES-1)Match will going to be a best of three\n      2)Enter choice as option\n      3)result will be displayed at end\n");
    printf("      4)won,tie,loose give you score 1,0,-1\n");
    for (int i = 0; i < 3; i++)
    {
    
        printf("\n");
        printf("----------------------\n");
        printf("Match number %d starts\n", i + 1);
    restat:
        fflush(stdin);
        printf("choose one out of A)stone B)paper C)scissor\n");
        printf("Enter your choice as a,b,c-  ");
        scanf("%c", &choice);

        // for human choice
        switch (choice)
        {
        case 'a': // human choice stone
        case 'A': // human choice stone
                  // Generating random number between 0 to 8 increasing range to increase different output probabilities
            srand(time(NULL));
            hihi = rand() % 17;
            // printf("%d\n", hihi);
            printf("\n");
            if (hihi == 2 || hihi == 7 || hihi == 5 || hihi == 11 || hihi == 15 || hihi == 16)
            {
                printf("Computer chooses \"stone\"\n");
                printf("you also chooses stone\n");
                printf("Round TIE\n");
                score[i] = 0;
            }
            else if (hihi == 3 || hihi == 8 || hihi == 6 || hihi == 12 || hihi == 13 || hihi == 17)
            {
                printf("Computer chooses \"paper\"\n");
                printf("OOPS! you chooses stone\n");
                printf("You LOOSE this round\n");
                score[i] = -1;
            }
            else
            {
                printf("Computer chooses \"scissor\"\n");
                printf("you choose stone congrats\n");
                printf("You WON this round\n");
                score[i] = 1;
            }

            break;
        case 'b': // human choice paper
        case 'B': // human choice paper
            // Generating random number between 0 to 8 increasing range to increase different output probabilities
            srand(time(NULL));
            hihi = rand() % 8;
            //printf("%d\n", hihi);
            printf("\n");
            if (hihi == 2 || hihi == 7 || hihi == 5 || hihi == 11 || hihi == 15 || hihi == 16)
            {
                printf("Computer chooses \"stone\"\n");
                printf("you made great choice\n");
                printf("You WON this round\n");
                score[i] = 1;
            }
            else if (hihi == 3 || hihi == 8 || hihi == 6 || hihi == 12 || hihi == 13 || hihi == 17)
            {
                printf("Computer chooses \"paper\"\n");
                printf("clever choice\n");
                printf("round TIE\n");
                score[i] = 0;
            }
            else
            {
                printf("Computer chooses \"scissor\"\n");
                printf("You loose this round\n");
                printf("better luck next round\n");
                score[i] = -1;
            }
            break;
        case 'C': // human choice scissor
        case 'c': // human choice scissor
            // Generating random number between 0 to 8 increasing range to increase different output probabilities
            srand(time(NULL));
            hihi = rand() % 8;
            //printf("%d\n", hihi);
            printf("\n");    
            if (hihi == 2 || hihi == 7 || hihi == 5 || hihi == 11 || hihi == 15 || hihi == 16)
            {
                printf("Computer chooses \"stone\"\n");
                printf("Good trying but,\n");
                printf("You loose this round\n");
                score[i] = -1;
            }
            else if (hihi == 3 || hihi == 8 || hihi == 6 || hihi == 12 || hihi == 13 || hihi == 17)
            {
                printf("Computer chooses \"paper\"\n");
                printf("You won this round\n");
                printf("Wow great round\n");
                score[i] = 1;
            }
            else
            {
                printf("Computer chooses scissor\n");
                printf("Match tie in this round\n");
                printf("well done\n");
                score[i] = 0;
            }
            break;
        default:
            printf("choose correct option\n");
            goto restat;
            break;
        }
    }
    printf("\n");
    printf("Match over your final score is %d out of 3\n", score[0] + score[1] + score[2]);
    printf("wanna have a rematch\n");
    return 0;
}
