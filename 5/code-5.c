/*

Write a program to find the sum of the given series using the function.
1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 +...+ n!/n

*/
#include <stdio.h>


int fact(int n){
    int fact = 1;

    for(int i = n; i > 0; i--){
        fact *= i;
    }

    return fact;
}


int series_sum(int n){
    int s_fact = 0;

    printf("\n");
    for(int i = 1; i <= n; i++){
        printf(" + %d!/%d", i,i);
        s_fact += fact(i) / i;
    }

    printf(" = %d\n", s_fact);
}



int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    series_sum(n);

    return 0;
}




