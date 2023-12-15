#include <stdio.h>

void swipping(int *ptr1,int *ptr2,int *ptr3){

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptr3;
    *ptr3 = temp;
}

int main(){

    int a,b,c;
    printf("enter 3 integer: ");
    scanf("%d%d%d", &a,&b,&c);

    int *ptr1, *ptr2, *ptr3;
    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    printf("before swapping- a = %d, b = %d, c = %d\n", a,b,c);
    swipping(ptr1,ptr2,ptr3);
    printf("after swapping- a = %d, b = %d, c = %d\n", a,b,c);

    return 0;
}
