#include <stdio.h>
#include <ctype.h>

int isvowel(char ch){
    ch = toupper(ch);
    return (ch == 'A' || ch =='E' || ch =='I' || ch =='O' || ch =='U');
}

int main(){

    char str[1000];
    gets(str);

    int number = 0, vowel = 0, consonant = 0, digit = 0, whitespace = 0, word = 0;

    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i]) && isvowel(str[i])){
            vowel++;
        }else if(isalpha(str[i])){
            consonant++;
        }else if(isdigit(str[i])){
            digit++;
        }else if(isspace(str[i])){
            whitespace++;
        }
    }

    for(int i = 0; str[i] != '\0'; i++){
        if(isalpha(str[i])){
            while(isalpha(str[i])){
                i++;
            }
            word++;
        }
    }

    for(int i = 0; str[i] != '\0'; i++){
        if(isdigit(str[i])){
            while(isdigit(str[i])){
                i++;
            }
            number++;
        }
    }

    printf("\nNumber of number: %d", number);
    printf("\nNumber of vowels: %d", vowel);
    printf("\nNumber of consonants: %d", consonant);
    printf("\nNumber of digits: %d", digit);
    printf("\nNumber of whitespace characters: %d", whitespace);
    printf("\nNumber of words: %d", word);


    return 0;
}
