#include <stdio.h>




void gameBoard(char c[3][3]);


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
        printf("   %d  ", c[0][j]);

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

        printf("   %d  ", c[1][j]);

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

        printf("   %d  ", c[2][j]);

        printf("|");
    }

    printf("\n");

    for (int j = 0; j <= 3; ++j) {
        printf("|");
        printf("      ");
    }

}
