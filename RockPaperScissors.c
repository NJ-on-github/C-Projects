# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void afterprint(){
    printf("\nType --\n'y' to play again and 'c' to change the game \nor any other key to exit the game.\n -->\t");
    fflush(stdin);
}

int rpsgameresult(char player, char comp){
// Possible conditions:
// rr
// rp 1
// rs
// pr 1 e
// pp
// ps
// sr
// sp
// ss

if(player==comp){printf("Tie\n"); return 0;}

if(player=='r' && comp=='p'){printf("* Computer won! *\n"); return 1;}
else if(player=='p' && comp=='r'){printf("* You won! *\n"); return -1;}

if(player=='r' && comp=='s'){printf("* You won! *\n"); return -1;}
else if(player=='s' && comp=='r'){printf("* Computer won! *\n"); return 1;}

if(player=='p' && comp=='s'){printf("* Computer won! *\n"); return 1;}
else if(player=='s' && comp=='p'){printf("* You won! *\n"); return -1;}

}


int swggameresult(char player, char comp){
// Possible conditions:
// ss
// sw 1
// sg 2
// ws 1
// ww
// wg 3
// gs 2
// gw 3
// gg

if(player==comp){printf("Tie\n"); return 0;}

if(player=='s' && comp=='w'){printf("* You won! *\n"); return 1;}
else if(player=='w' && comp=='s'){printf("* Computer won! *\n"); return -1;}

if(player=='s' && comp=='g'){printf("* Computer won! *\n"); return -1;}
else if(player=='g' && comp=='s'){printf("* You won! *\n"); return 1;}

if(player=='w' && comp=='g'){printf("* You won! *\n"); return 1;}
else if(player=='g' && comp=='w'){printf("* Computer won! *\n"); return -1;}

}

int main()
{
            printf("\n\n\t*****  Welcome to Game *****\n\n");

    char yesorno;
    do{
            int gameno;
            printf("Type '1' to play Rock Paper Scissors game and '2' to play Snake Water Gun game\n");
            fflush(stdin);
            scanf("%d", &gameno);


        if(gameno==2){
            char yesorno;
            printf("\n\n\t*****  Welcome to Snake, Water and Gun game *****\n\n");
            do{
            char player, comp;
            srand(time(0));
            int number= rand()%100 +1;

            if(number<33){ comp = 's'; }
            if(number>33 && number<66){ comp = 'w'; }
            if(number>66){ comp = 'g'; }

            fflush(stdin);
            printf("\n Enter 's' to choose snake, 'w' to choose water and 'g' to choose gun --> ");
            scanf("%c", &player);
            if(player!='s' && player!='w' && player!='g' ){printf("Given character was invalid"); return 0;}

        //problem area
            char *pfull, *cfull;
            // char *pftpr, *cfptr;
    // cfptr=cfull;
    // pftpr=pfull;

        // char *psnake="Snake";
// char *pwater="Water";
// char *pgun="Gun";

            if(player == 's'){pfull="Snake";}
            if(player == 'w'){pfull="Water";}
            if(player == 'g'){pfull="Gun";}

            if(comp == 's'){ cfull="Snake";}
            if(comp == 'w'){ cfull="Water";}
            if(comp == 'g'){ cfull="Gun";}

            // printf("\n \n Test print %s \n",pfull);

            int tiecase = swggameresult(player, comp);
            // printf("Before int\n");
    // int tiecase= gameresult(player, comp);
    // printf("After int\n");

            // printf("Before if\n");
            if(tiecase==0)
            {
             printf("You chose %s and computer also chose %s.\n", pfull, cfull);
             fflush(stdin);
            // printf("Type y to play again and any other key to exit the game. : ");
            // scanf("%c", &yesorno);
            }
            // printf("After if\n");
            else
            {
            printf("You chose %s and computer chose %s.\n", pfull, cfull);}
            fflush(stdin);
            afterprint();
            scanf("%c", &yesorno);

            } while (yesorno=='y');
        }





        if(gameno==1){
            char yesorno;
            printf("\n\n\t*****  Welcome to Rock, Paper and Scissors game *****\n\n");
            do{
                char player, comp;
                srand(time(0));
                int number= rand()%100 +1;

                if(number<33){ comp = 'r'; }
                if(number>33 && number<66){ comp = 'p'; }
                if(number>66){ comp = 's'; }

                fflush(stdin);
                printf("\n Enter 'r' to choose rock, 'p' to choose paper and 's' to choose scissors --> ");
                scanf("%c", &player);
                if(player!='r' && player!='p' && player!='s' ){printf("Given character was invalid"); return 0;}

            //problem area
                char *pfull, *cfull;
                // char *pftpr, *cfptr;
                // cfptr=cfull;
                // pftpr=pfull;

            // char *psnake="Snake";
            // char *pwater="Water";
            // char *pgun="Gun";


                if(player == 'r'){pfull="Rock";}
                if(player == 'p'){pfull="Paper";}
                if(player == 's'){pfull="Scissors";}

                if(comp == 'r'){ cfull="Rock";}
                if(comp == 'p'){ cfull="Paper";}
                if(comp == 's'){ cfull="Scissors";}
                // printf("\n \n Test print %s \n",pfull);

                int tiecase = rpsgameresult(player, comp);
                // printf("Before int\n");
                // int tiecase= gameresult(player, comp);
                // printf("After int\n");

                // printf("Before if\n");
                if(tiecase==0)
                {
                 printf("You chose %s and computer also chose %s.\n", pfull, cfull);
                 fflush(stdin);
                // printf("Type y to play again and any other key to exit the game. : ");
                // scanf("%c", &yesorno);
                }
                // printf("After if\n");
                else
                {
                printf("You chose %s and computer chose %s.\n", pfull, cfull);
                fflush(stdin);}
                afterprint();
                scanf("%c", &yesorno);

        }while(yesorno=='y');
        }
        }while(yesorno=='c');

            return 0;
}