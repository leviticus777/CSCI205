// Author: LDT
// Date: 29JAN2019
// Title: half_arrow.c
// Purpose: This program creates a half arrow of
// the user's specified size.

// Import Statements
#include <stdio.h>

// Main Code
int main(void) {
    int arrowBaseHeight;
    int arrowBaseWidth;
    int arrowHeadWidth;

    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);

    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);

    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);

    while(arrowHeadWidth <= arrowBaseWidth){
        printf("Enter arrow head width:\n");
        scanf("%d", &arrowHeadWidth);
    }
    printf("\n");

    for(int i = 0; i < arrowBaseHeight; i++){
        for(int j = 0; j < arrowBaseWidth; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = arrowHeadWidth; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}