#include <stdio.h>


void decimal_to_binary(int decimal){

    if(decimal == 1){
        printf("1");
    }else{
        decimal_to_binary(decimal/2);

        printf("%d", decimal%2);
    }
}


int main(){

    int decimal;
    printf("enter a decimal number: ");
    scanf("%d", &decimal);

    if(decimal < 0){
        printf("enter decimal number greater than 0");
    }else{
        decimal_to_binary(decimal);
    }


    return 0;
}
