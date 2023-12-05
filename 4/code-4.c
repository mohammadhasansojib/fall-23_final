// Write a C program to check Armstrong and Perfect numbers using function.
#include <stdio.h>

int perfectNum(int n){
    int sum = 0;

    for(int i = 1; i < n; i++){
        if((n%i) == 0){
            sum += i;
        }
    }

    if(sum == n){
        printf("\n%d is a perfect number", n);
    }else{
        printf("\n%d is not a perfect number", n);
    }
}

int armstrong(int n){
    int ori_n = n;
    int dup_n = n;
    int length = 1;
    int sum = 0;

    while(dup_n > 10){
        dup_n /= 10;
        length++;
    }

    int arr[length];

    for(int i = length - 1; i >= 0; i--){
        int arr_elements = n % 10;
        n /= 10;
        arr[i] = arr_elements;
    }


    for(int i = 0; i < length; i++){
        sum += pow(arr[i],length);
    }


    if(sum == ori_n){
        printf("\n%d is an armstrong number\n", ori_n);
    }else{
        printf("\n%d is not an armstrong number\n", ori_n);
    }
}

int main() {
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    perfectNum(n);
    armstrong(n);


   return 0;
}
