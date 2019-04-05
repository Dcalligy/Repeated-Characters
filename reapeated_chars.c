#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000 

int read_line(char *str, int n);
void replace(char *str, char *replaced);

int main(){

    char str[SIZE + 1];
    char replaced[SIZE + 1];

    printf("Please enter a word: ");
    read_line(str, SIZE);

    replace(str, replaced);
    printf("Output: %s", replaced);
    return 0;
}

void replace(char *str, char *replaced){
   
    while(*str != '\0'){
        //check the first, second and third characters in the string
        if(*(str) == *(str + 1) && (*(str) == *(str + 2))){
            // replace the character
            *replaced++ = *str++;
            // assign 3 to the replaced string
            *replaced++ = '3';
            str += 2; // increment the index of the original string
        }
        else{
            *replaced++ = *str++; 
        }
    }
    // terminates string
    *replaced++ = '\0';
}

int read_line(char *str, int n){

    int ch;
    int i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            *str++ = ch;
            i++;
        }
    }
    *str = '\0'; // terminates string
    return i; // number of characters stored
}
