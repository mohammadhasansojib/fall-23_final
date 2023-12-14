#include <stdio.h>

int toggle(char str[]){

    for(int i = 0; str[i] != '\0'; i++){
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }else if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
}

int main(){
    char str[1000];
    gets(str);

    toggle(str);

    printf("\nafter toggling: %s", str);

    return 0;
}
