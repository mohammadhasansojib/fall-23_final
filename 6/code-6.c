// Write a C program to determine all Pythagorean triplets within a given range between 1 to 1000 using function.

#include <stdio.h>

int pyt_tri(){

    printf("Pythagorean triplets : \n\n");

    for(int a = 1; a <= 1000; a++){
        for(int b = 1; b <= 1000; b++){
            for(int c = 1; c <= 1000; c++){
                if((pow(a,2) + pow(b,2)) == pow(c,2)){
                    printf("%d, %d, %d\n", a,b,c);
                }
            }
        }
    }
}

int main(){

    pyt_tri();

    return 0;
}
