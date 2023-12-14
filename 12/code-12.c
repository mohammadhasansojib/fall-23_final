#include <stdio.h>

int rows;

int pyramid(){

    for(int i = 1; i <= rows; i++){
        for(int j = i; j < rows; j++){
            printf(" ");
        }
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        for(int j = 2; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

}


int left_half_pyramid(){

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int j = rows; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }

}


int pascal_triangle(){

    for (int i = 0; i < rows; i++) {
        int coef = 1;
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("%d ", coef);
            coef = coef * (i-k) / (k+1);
        }
        printf("\n");
    }

}


int number_pattern(){

    int increase = 0;

    for(int i = 1; i <= rows; i++){
        for(int j = rows-i; j >= 1; j--){
            printf("*");
        }
        for(int j = 1; j <= increase; j++){
            printf(" ");
        }
        increase += 2;
        for(int j = rows-i; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

}



int main(){

    printf("enter the rows: ");
    scanf("%d", &rows);

    printf("pyramid patterns: \n");
    pyramid();

    printf("\n\nleft half pyramid pattern: \n");
    left_half_pyramid();

    printf("\n\npascal triangle pattern: \n");
    pascal_triangle();

    printf("\n\nnumber pattern: \n");
    number_pattern();

    return 0;
}


