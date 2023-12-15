/*Write a C program to find the maximum number of characters of a sentence and print the
numbers in the terminal by using string.*/
#include <stdio.h>

int main(){

    int counter,max = 0;
    char str[100], c, maxchar;
    printf("Enter an string: \n");
    gets(str);

    for(c = 'a'; c <= 'z'; c++){
        counter = 0;
        for(int i = 0; str[i]!= '\0'; i++){
            if(c==str[i]){
                counter++;

                if(counter > max){
                    max = counter;
                    maxchar = c;
                }

            }
        }
    }

    printf("\n%c has maximun time(%d times)\n", maxchar,max);

    return 0;
}
