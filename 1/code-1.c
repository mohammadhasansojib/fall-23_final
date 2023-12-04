#include <stdio.h>

/*
Write a C code to separate even and odd elements in an array.

[**The odd elements of the array should be in right side of the array and the even elements
of the array should be in left side of the array]
*/

int main(){
    int length;
    printf("Enter the length of array: ");
    scanf("%d", &length);
    int arr[length];

    int j = 0, k = 0;
    int even_arr[100], odd_arr[100];


    for(int i = 0; i < length; i++){
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < length; i++){// 0 1 2 3
        if((arr[i] % 2) == 0){
            even_arr[j] = arr[i];
            j++;
        }else if((arr[i] % 2) != 0){
            odd_arr[k] = arr[i];
            k++;
        }
    }



    printf("even numbers: ");
    for(int i = 0; i < j; i++){
        printf("%d ", even_arr[i]);
    }

    printf("\nodd numbers: ");
    for(int i = 0; i < k; i++){
        printf("%d ", odd_arr[i]);
    }


    return 0;
}
