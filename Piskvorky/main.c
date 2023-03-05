#include <stdio.h>
#include <stdbool.h>




void gameBoard(char c[3][3]);
char inputPlayer1(char c[3][3]);
char inputPlayer2(char c[3][3]);
bool check(char c[3][3]);

int main() {


    char c[3][3];
    c[0][0]='1';
    c[0][1]='2';
    c[0][2]='3';
    c[1][0]='4';
    c[1][1]='5';
    c[1][2]='6';
    c[2][0]='7';
    c[2][1]='8';
    c[2][2]='9';

    gameBoard(c);

    do {

        inputPlayer1(c);
        gameBoard(c);
        check(c);
        inputPlayer2(c);
        gameBoard(c);
        check(c);

    } while (check(c) == 1);



    return 0;
}

//---------------FUNKCE---------------

void gameBoard(char c[3][3]){

    int help = 2;

    gameBack:

    help++;


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>FIRST LINE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }

    printf("\n");
    printf("|");
    for (int j = 0; j <= 2; ++j) {
        printf("   %c  ", c[0][j]);

        printf("|");
    }

    printf("\n");

    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }

    printf("\n");



    for (int i = 0; i < 11; ++i) {

        printf("--");

    }


    if(help < 3){

        printf("\n");

        goto gameBack;

    }
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>SECOND LINE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    printf("\n");

    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }

    printf("\n");
    printf("|");
    for (int j = 0; j <= 2; ++j) {

        printf("   %c  ", c[1][j]);

        printf("|");
    }

    printf("\n");

    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>THIRD LINE<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    printf("\n");
    for (int i = 0; i < 11; ++i) {

        printf("--");

    }

    printf("\n");

    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }

    printf("\n");
    printf("|");
    for (int j = 0; j <= 2; ++j) {

        printf("   %c  ", c[2][j]);

        printf("|");
    }

    printf("\n");

    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }

}

char inputPlayer1(char c[3][3]){

    int input1;

    printf("\nHraci 1 zadej policko\n");
    badInput:
    scanf("%d", &input1);

    switch (input1) {

        case 1:

            c[0][0]='O';
            break;

        case 2:

            c[0][1]='O';
            break;

        case 3:

            c[0][2]='O';
            break;

        case 4:

            c[1][0]='O';
            break;

        case 5:

            c[1][1]='O';
            break;

        case 6:

            c[1][2]='O';
            break;

        case 7:

            c[2][0]='O';
            break;

        case 8:

            c[2][1]='O';
            break;

        case 9:

            c[2][2]='O';
            break;

        default:
            printf("spatna hodnota zadej znovu\n");
            goto badInput;
    }
}

char inputPlayer2(char c[3][3]){

    int input1;

    printf("\nHraci 2 zadej policko\n");
    badInput:
    scanf("%d", &input1);

    switch (input1) {

        case 1:

            c[0][0]='X';
            break;

        case 2:

            c[0][1]='X';
            break;

        case 3:

            c[0][2]='X';
            break;

        case 4:

            c[1][0]='X';
            break;

        case 5:

            c[1][1]='X';
            break;

        case 6:

            c[1][2]='X';
            break;

        case 7:

            c[2][0]='X';
            break;

        case 8:

            c[2][1]='X';
            break;

        case 9:

            c[2][2]='X';
            break;

        default:
            printf("spatna hodnota zadej znovu\n");
            goto badInput;
    }
}

bool check(char c[3][3]){

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ŘADEK<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

    if(c[0][0] && c[0][1] && c[0][2] == 'O' || c[0][0] && c[0][1] && c[0][2] == 'X'){


        return 0;

    }

    if(c[1][0] && c[1][1] && c[1][2] == 'O' || c[1][0] && c[1][1] && c[1][2] == 'X'){


        return 0;

    }

    if(c[2][0] && c[2][1] && c[2][2] == 'O' || c[2][0] && c[2][1] && c[2][2] == 'X'){


        return 0;

    }

    //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>SLOUPEC<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

    if(c[0][0] && c[1][0] && c[2][0] == 'O' || c[0][0] && c[1][0] && c[2][0] == 'X'){


        return 0;

    }

    if(c[0][1] && c[1][1] && c[2][1] == 'O' || c[0][1] && c[1][1] && c[2][1] == 'X'){


        return 0;

    }

    if(c[0][2] && c[1][2] && c[2][2] == 'O' || c[0][2] && c[1][2] && c[2][2] == 'X'){


        return 0;

    }

    return 1;

}
