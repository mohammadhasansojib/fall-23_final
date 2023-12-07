/* Write a C program to determine all prime numbers within the range [a to b] where a & b
are input through keyboard and print the addition value of all the prime numbers. */
#include <stdio.h>

int isPrime(int num){
    int boolean = 1;
    for(int i = 2; i < num; i++){

        if((num % i) == 0){
            boolean--;
            break;
        }

    }
    return boolean;

}

int main(){

    int a,b, sum = 0;
    printf("Enter the range : \n");
    scanf("%d%d", &a,&b);

    printf("\n");
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\n\nsum = %d", sum);


    return 0;
}
