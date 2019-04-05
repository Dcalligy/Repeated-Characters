# Repeated-Characters

Write a program that replace repeated three characters in a string by the
character followed by 3. For example, the string aabccccaaabbbbcc would become
aabc3ca3b3cc. When there are more than three repeated characters, the first three
characters will be replaced by the character followed by 3. You can assume the string has
only lowercase letters (a-z).

Your program should include the following function:
```void replace(char *str, char *replaced);```

The function expects ```str``` to point to a string, ```replaced``` represents the string storing
the replaced string. For example, if the ```str``` is ```helllo```, the function will store
```hel3o``` in ```replaced```.

1. Name the program ```repeated_chars.c```
2. Assume input is no longer than 1000 charactesrs.
3. The ```replace``` function should use pointer arithmetic (instead of array subscripting). In other words, eliminate the loop index variables and all of the [] operator in the function. 
4. To read a line of text, use the ```read_line``` function (the pointer version) in the lecture notes.

## read_line function
```
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
```
