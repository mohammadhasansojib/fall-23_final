#include <stdio.h>

int fibo(int n){

if(n <= 1){
    return n;
}else{
    return fibo(n-1) + fibo(n-2);
}

}


int main(){


    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    if(n<0){
        printf("enter number greater than 0");
    }else{
        printf("fibonacci series: ");
        for(int i = 0; i < n; i++){
            printf("%d ", fibo(i));
        }
    }

    return 0;
}
