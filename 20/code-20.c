#include <stdio.h>

int bubble_sort(int *ptr, int n){

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(*(ptr+j) > *(ptr+j+1)){
                int temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int arr[n];
    printf("enter array elements: ");
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("\nafter sorting: ");
    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
