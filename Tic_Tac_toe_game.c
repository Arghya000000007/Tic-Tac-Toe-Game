#include<stdio.h>

char box[10]={'0','1','2','3','4','5','6','7','8','9'};
int choice,player;
int checkForWin();
void displayBoard();
void markBoard(char mark);

int main()
{
int gamestatus;
char mark;
player=1;
do{
    displayBoard();
    //change turns
    player=(player%2)?1:2;
    printf("Player %d,enter the number : ",player);
    scanf("%d",&choice);
    //Set the correct character base on Player turn
    mark=(player==1) ? 'X' : 'O';
    //Set the board on user choice or invalid
    markBoard(mark);
    gamestatus=checkForWin();
    player ++;

} while(gamestatus== -1);
if(gamestatus==1){
    printf("===>Player %d win\n\n",--player);
}
    else{
        printf("===>Gmae draw\n\n");
    }



return 0;

}
/*
Function to return game status
1 for game is over with result 
-1 for game is in progress
0 for game is over and no result
0
*/
int checkForWin(){
    int returnvalue=0;
    if(box[1]==box[2]&&box[2]==box[3]){
        returnvalue = 1;
    }
    else if(box[4]==box[5]&&box[5]==box[6]){
        returnvalue = 1;
    }
    else if(box[7]==box[8]&&box[8]==box[9]){
        returnvalue = 1;
    }
    else if(box[1]==box[5]&&box[5]==box[9]){
        returnvalue = 1;
    }
    else if(box[3]==box[5]&&box[5]==box[7]){
        returnvalue = 1;
    }
    else if(box[3]==box[6]&&box[6]==box[9]){
        returnvalue = 1;
    }
    else if(box[2]==box[5]&&box[5]==box[8]){
        returnvalue = 1;
    }
    else if(box[1]==box[4]&&box[4]==box[7]){
        returnvalue = 1;
    }
    else if(box[1]!='1'&&box[2]!='2'&&box[3]!='3'&&box[4]!='4'&&box[5]!='5'&&box[6]!='6'&&box[7]!='7'&&box[8]!='8'&&box[9]!='9'){
        returnvalue = 0;
    }
    else {
        returnvalue = -1;
    }

    return returnvalue;
}
/*
Function to draw board of tic toa toe with player mark
*/
void displayBoard(){
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1(X) - Player 2(O)\n\n\n");
    printf("   |   | \n");
    printf(" %c | %c | %c \n",box[1],box[2],box[3]);
    printf("___|___|___\n");
    printf("   |   | \n");
    printf(" %c | %c | %c \n",box[4],box[5],box[6]);
    printf("___|___|___\n");
    printf("   |   | \n");
    printf(" %c | %c | %c \n",box[7],box[8],box[9]);
    printf("   |   | \n\n");

}
/*
Set the board with the correct character
X or O in the correct spot in the array
*/
void markBoard(char mark){
    if( choice==1&&box[1]=='1'){
        box[1]=mark;
    }
    else if(choice==2&&box[2]=='2'){
        box[2]=mark;
    }
    else if(choice==3&&box[3]=='3'){
        box[3]=mark;
    }
    else if(choice==4&&box[4]=='4'){
        box[4]=mark;
    }
    else if(choice==5&&box[5]=='5'){
        box[5]=mark;
    }
    else if(choice==6&&box[6]=='6'){
        box[6]=mark;
    }
    else if(choice==7&&box[7]=='7'){
        box[7]=mark;
    }
    else if(choice==8&&box[8]=='8'){
        box[8]=mark;
    }
    else if(choice==9&&box[9]=='9'){
        box[9]=mark;
    }
    else{
        printf("Invalid move");
        player --;
    }

}
