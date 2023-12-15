  #include <stdio.h>


int reverse(int *arr, int n){

int *ptr = arr + n-1;

printf("\nin reverse: ");
for(int i = 0; i < n; i++){
    printf("%d ", *ptr);
    ptr--;
}

}

int main(){

    int n;
    printf("enter the array length: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    reverse(ptr,n);


    return 0;
}
