#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RESET   "\033[0m"

char arr[] = {'0','1','2','3','4','5','6','7','8'};

void printboard(char *,char *);
int wincheck();
void printsign(char s);

int main()
{
    char plr1[20];
    char plr2[20];

    printf("ENTER PLAYER 1 NAME: ");
    scanf("%[^\n]",plr1);
    printf("ENTER PLAYER 2 NAME: ");
    getchar();
    scanf("%[^\n]",plr2);
    printf("\n");

    int player = 1;

    printboard(plr1,plr2);
    while(player != 10)
    {
        //printboard(plr1,plr2);
        int pos;
        skip:
        printf("Enter the position: ");
        scanf("%d",&pos);
       
        if(arr[pos] == 'X' || arr[pos] == 'O')
        {
            printf("position already taken!!\n");
            goto skip;
        }

        printf("\n");

        if(pos>=0 && pos<=8)
        {
            if((player % 2) != 0)
            {
                arr[pos] = 'X';
            }
            else
            {
                arr[pos] = 'O';
            }

            printboard(plr1,plr2);

            if(wincheck() == 1)
            {
                if((player%2)==0)
                {
                    printf("%s wins!!!! \n",plr2);
                    return 0;
                }
                else
                {
                    printf("%s wins!!!!\n",plr1);
                    return 0;
                }
            }
        }
        else
        {
            printf("INVALID POSITION........");
            return 0;
        }
        player++;
    }
    if(player == 10)
    {
        printf("MATCH DRAW.........\n\n");
        return 0;
    }
}


void printboard(char *plr1,char *plr2)
{
    system("clear");
    printf("     PLAYER 1: %s\033[31m[X]\033[0m\n",plr1);
    printf("     PLAYER 2: %s\033[34m[O]\033[0m\n\n",plr2);



    printf(GREEN"\tTIC-TAC-TOE\n\n");

    printf(YELLOW"+--------+-------+-------+\n"RESET);
    printf(YELLOW"|        |       |       |\n"RESET);
    printf(YELLOW"|    ");
    printsign(arr[0]);  
    printf(YELLOW"   |   ");  
    printsign(arr[1]);   
    printf(YELLOW"   |   ");   
    printsign(arr[2]); 
    printf(YELLOW"   |\n");  
    printf(YELLOW"|        |       |       |\n"RESET);   
    printf(YELLOW"+--------+-------+-------+\n"RESET);
    printf(YELLOW"|        |       |       |\n"RESET);
    printf(YELLOW"|    ");  
    printsign(arr[3]);  
    printf(YELLOW"   |   ");   
    printsign(arr[4]);  
    printf(YELLOW"   |   ");   
    printsign(arr[5]);    
    printf(YELLOW"   |\n");
    printf(YELLOW"|        |       |       |\n"RESET);
    printf(YELLOW"+--------+-------+-------+\n"RESET);
    printf(YELLOW"|        |       |       |\n"RESET);
    printf(YELLOW"|    ");
    printsign(arr[6]);
    printf(YELLOW"   |   ");
    printsign(arr[7]);
    printf(YELLOW"   |   ");
    printsign(arr[8]);
    printf(YELLOW"   |\n");
    printf(YELLOW"|        |       |       |\n"RESET);
    printf(YELLOW"+--------+-------+-------+\n"RESET);
}

void printsign(char s)
{
    if(s == 'X')
    {
        printf(RED"X"RESET);
    }
    else if(s == 'O')
    {
        printf(BLUE"O"RESET);
    }
    else
    {
        printf(YELLOW"%c",s);
    }
}

int wincheck()
{
    if(arr[0] == arr[1] && arr[1]==arr[2])
        return 1;
    if(arr[3] == arr[4] && arr[4]==arr[5])
        return 1;
    if(arr[6] == arr[7] && arr[7]==arr[8])
        return 1;
    if(arr[0] == arr[3] && arr[3]==arr[6])
        return 1;
    if(arr[1] == arr[4] && arr[4]==arr[7])
        return 1;
    if(arr[2] == arr[5] && arr[5]==arr[8])
        return 1;
    if(arr[0] == arr[4] && arr[4]==arr[8])
        return 1;
    if(arr[2] == arr[4] && arr[4]==arr[6])
        return 1;            
    else
        return 0;                                
}
