#include <stdio.h>

int main()
{
     char  player;
     char a='1', b='2', c='3' , d='4', e='5', f='6', g='7', h='8', l='9' ;
     int i=0;
     printf("Choose your block wisely\n\n");

     printf("\t\t %c | %c | %c \n",a,b,c);
     printf("\t\t-----------\n");
     printf("\t\t %c | %c | %c \n",d,e,f);
     printf("\t\t-----------\n");
     printf("\t\t %c | %c | %c \n\n",g,h,l);


    while(i<9)
    {
    if(i%2==0){
            printf("Player 1 turn: ");
            scanf(" %c", &player);

        if(player=='1' && a=='1'){
                a='O';
                i++;
            }
        else if(player=='2' && b=='2'){
                b='O';
                i++;
            }
        else if(player=='3' && c=='3'){
                c='O';
                i++;
            }
        else if(player=='4' && d=='4'){
                d='O';
                i++;
            }
        else if(player=='5' && e=='5'){
                e='O';
                i++;
            }
        else if(player=='6' && f=='6'){
                f='O';
                i++;
            }
        else if(player=='7' && g=='7'){
                g='O';
                i++;
            }
        else if(player=='8' && h=='8'){
                h='O';
                i++;
            }
        else if(player=='9' && l=='9'){
                l='O';
                i++;
            }
        else{
                printf("Aleady selected invalid move!!! \nTry again\n");
            }
        }

    else{
            printf("Player 2 turn: ");
            scanf(" %c", &player);

        if(player=='1' && a=='1'){
                a='X';
                i++;
            }
        else if(player=='2' && b=='2'){
                b='X';
                i++;
            }
        else if(player=='3' && c=='3'){
                c='X';
                i++;
            }
        else if(player=='4' && d=='4'){
                d='X';
                i++;
            }
        else if(player=='5' && e=='5'){
                e='X';
                i++;
            }
        else if(player=='6' && f=='6'){
                f='X';
                i++;
            }
        else if(player=='7' && g=='7'){
                g='X';
                i++;
            }
        else if(player=='8' && h=='8'){
                h='X';
                i++;
            }
        else if(player=='9' && l=='9'){
                l='X';
                i++;
            }
        else{
                printf("Aleady selected invalid move!!! \nTry again\n");
            }
    }

        printf(" %c | %c | %c \n",a,b,c);
        printf("-----------\n");
        printf(" %c | %c | %c \n",d,e,f);
        printf("-----------\n");
        printf(" %c | %c | %c \n",g,h,l);


        if((a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && l=='O') ||
           (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && l=='O') ||
           (a=='O' && e=='O' && l=='O') || (e=='O' && l=='O')) {
                printf("you won!\nCongratulations! Player 1\n");
            break;
            }
        else if((a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && l=='X') ||
                    (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && l=='X') ||
                    (a=='X' && e=='X' && l=='X') || (e=='X' && g=='X' && c=='X')){
                printf("you won!\nCongratulations! Player 2\n ");
            break;
            }
        }

    return 0;
}

