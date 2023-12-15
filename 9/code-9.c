/* A prime integer is entered through the keyboard.
 Write a code to find out the prime factors of the number. */
#include <stdio.h>


 int prime_factor(int x){
    for(int i = 2; i <= x; i++){
        if(x%i == 0){
            printf("%d ", i);
            x /= i;
            i--;
        }
    }
 }


 int main(){
    int num;
    scanf("%d", &num);

    if(num < 2){
        printf("prime factor is not applicable for number less than 2.");
    }else{
        prime_factor(num);
    }

    return 0;
 }


//#include <stdio.h>
//
//// Function to find and print prime factors of a number
//void primeFactors(int num) {
//    printf("Prime factors of %d are: ", num);
//
//    // Print the number of 2s that divide num
//    while (num % 2 == 0) {
//        printf("2 ");
//        num = num / 2;
//    }
//
//    // num must be odd at this point, so a skip of 2 ( i = i + 2) can be used
//    for (int i = 3; i <= num; i = i + 2) {
//        // While i divides num, print i and divide num
//        while (num % i == 0) {
//            printf("%d ", i);
//            num = num / i;
//        }
//    }
//
//    // If num is still greater than 2, it's a prime number itself
//    if (num > 2) {
//        printf("%d ", num);
//    }
//
//    printf("\n");
//}
//
//int main() {
//    int num;
//
//    // Input a prime integer
//    printf("Enter a prime integer: ");
//    scanf("%d", &num);
//
//    if (num < 2) {
//        printf("Prime factors are not applicable for numbers less than 2.\n");
//    } else {
//        // Find and print prime factors
//        primeFactors(num);
//    }
//
//    return 0;
//}
//
