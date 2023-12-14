#include <stdio.h>

int main(){

    int size,position;
    printf("enter the size : ");
    scanf("%d", &size);

    int arr[size];
    printf("enter the array elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter the position for delete: ");
    scanf("%d", &position);

    if(position < 0 || position >= size){
        printf("invalid position.");
    }else{
        for(int i = position; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        size--;
    }

    printf("\nafter deletion: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
