#include <stdio.h>

void sorting(int arr[], int n);
void bubble_sort(int arr[], int n);


int main(){

    int n;
    printf("enter the length: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sorting(arr, n);

    printf("after sorting: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}


void bubble_sort(int arr[], int n){


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



void sorting(int arr[], int n){

    bubble_sort(arr,n);

    int temp[n];

    int small = 0, large = n-1;

    int turn = 1;

    for(int i = 0; i < n; i++){
        if(turn){
            temp[i] = arr[small++];
        }else{
            temp[i] = arr[large--];
        }

        turn = !turn;
    }

    for(int i = 0; i<n; i++){
        arr[i] = temp[i];
    }
}
