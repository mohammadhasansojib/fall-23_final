#include <stdio.h>

int main(){

    char mychar[100];
    gets(mychar);

    int len = sizeof(mychar) / sizeof(mychar[0]);


    for(int i = 0; i < len; i++){
        if(mychar[i] == ' '){
            for(int j = i; j < len; j++){
                mychar[j] = mychar[j+1];
            }

        }
    }

    printf("\nafter removing white space: %s\n", mychar);

    return 0;
}
