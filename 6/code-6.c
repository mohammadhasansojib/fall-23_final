// Write a C program to determine all Pythagorean triplets within a given range between 1 to 1000 using function.
#include <stdio.h>

int pyt_tri(int start, int end){

    printf("Pythagorean triplets : \n\n");

    for(int a = start; a <= end; a++){
        for(int b = start; b <= end; b++){
            for(int c = start; c <= end; c++){
                if((pow(a,2) + pow(b,2)) == pow(c,2)){
                    printf("%d, %d, %d\n", a,b,c);
                }
            }
        }
    }
}

int main(){

    int start,end;
    printf("enter the start and end range : ");
    scanf("%d%d", &start,&end);

    if(start >= 1 && start <= 1000 && end >= 1 && end <= 1000){
        pyt_tri(start, end);
    }else{
        printf("enter range between 1 to 1000");
    }

    return 0;
}
