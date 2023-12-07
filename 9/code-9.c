/* A prime integer is entered through the keyboard.
 Write a code to find out the prime factors of the number. */
 #include <stdio.h>


 int prime(int x){
    for(int i = 2; i <= x; i++){
        if(x%i == 0){
            printf("%d ", i);
            x = x/i;
            i--;
        }
    }
 }


 int main(){
    int num;
    scanf("%d", &num);

    prime(num);

    return 0;
 }
