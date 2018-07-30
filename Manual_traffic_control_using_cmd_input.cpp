#include<stdio.h>
int left_RED=0;
int left_YELLOW=0;
int left_GREEN=1;

int right_RED=1;
int right_YELLOW=0;
int right_GREEN=0;

int up_RED=1;
int up_YELLOW=0;
int up_GREEN=0;

int down_RED=1;
int down_YELLOW=0;
int down_GREEN=0;

void left_GREEN_t0_RED();
void left_RED_t0_GREEN();

void right_GREEN_t0_RED();
void right_RED_t0_GREEN();

void up_GREEN_t0_RED();
void up_RED_t0_GREEN();

void down_GREEN_t0_RED();
void down_RED_t0_GREEN();

int main(){
int input=111;
scanf("%d",&input);
//printf("%d",input);
/*
int left_RED=0;
int left_YELLOW=0;
int left_GREEN=1;

int right_RED=1;
int right_YELLOW=0;
int right_GREEN=0;

int up_RED=1;
int up_YELLOW=0;
int up_GREEN=0;

int down_RED=1;
int down_YELLOW=0;
int down_GREEN=0;
*/

    switch(input){
        case 0:
            left_RED_t0_GREEN();
            printf("LG %d\n",left_GREEN);
            printf("LR %d\n",left_RED);

            printf("RG %d\n",right_GREEN);
            printf("RR %d\n",right_RED);

            printf("UG %d\n",up_GREEN);
            printf("UR %d\n",up_RED);

            printf("DG %d\n",down_GREEN);
            printf("DR %d\n",down_RED);






            break;
        case 1:

            down_RED_t0_GREEN();
            printf("LG %d\n",left_GREEN);
            printf("LR %d\n",left_RED);

            printf("RG %d\n",right_GREEN);
            printf("RR %d\n",right_RED);

            printf("UG %d\n",up_GREEN);
            printf("UR %d\n",up_RED);

            printf("DG %d\n",down_GREEN);
            printf("DR %d\n",down_RED);

            break;
        case 2:

            right_RED_t0_GREEN();
            printf("LG %d\n",left_GREEN);
            printf("LR %d\n",left_RED);

            printf("RG %d\n",right_GREEN);
            printf("RR %d\n",right_RED);

            printf("UG %d\n",up_GREEN);
            printf("UR %d\n",up_RED);

            printf("DG %d\n",down_GREEN);
            printf("DR %d\n",down_RED);

            break;
        case 3:

            up_RED_t0_GREEN();
            printf("LG %d\n",left_GREEN);
            printf("LR %d\n",left_RED);

            printf("RG %d\n",right_GREEN);
            printf("RR %d\n",right_RED);

            printf("UG %d\n",up_GREEN);
            printf("UR %d\n",up_RED);

            printf("DG %d\n",down_GREEN);
            printf("DR %d\n",down_RED);

            break;

    }



}
void left_GREEN_t0_RED(){

    left_RED=1;

    left_GREEN=0;

    }
void left_RED_t0_GREEN(){

    left_RED=0;

    up_GREEN_t0_RED();
    down_GREEN_t0_RED();
    right_GREEN_t0_RED();

    left_GREEN=1;

    }


void right_GREEN_t0_RED(){

    right_RED=1;

    right_GREEN=0;

    }
void right_RED_t0_GREEN(){

    right_RED=0;


    up_GREEN_t0_RED();
    down_GREEN_t0_RED();
    left_GREEN_t0_RED();


    right_GREEN=1;
    }

void up_GREEN_t0_RED(){

    up_RED=1;

    up_GREEN=0;

    }
void up_RED_t0_GREEN(){

    up_RED=0;

    right_GREEN_t0_RED();
    down_GREEN_t0_RED();
    left_GREEN_t0_RED();


    up_GREEN=1;
    }

void down_GREEN_t0_RED(){

    down_RED=1;

    down_GREEN=0;

    }
void down_RED_t0_GREEN(){

    down_RED=0;

    up_GREEN_t0_RED();
    right_GREEN_t0_RED();
    left_GREEN_t0_RED();


    down_GREEN=1;
    }





