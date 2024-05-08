// The function read seweral strings from input and return largest from them
#include <stdio.h>
#define MAXLINE 1000

int main(void){
    int len;
    char line[MAXLINE];
    while(len = getline(line) != '\0')
        printf("Length of string you've input is: %d characters", len);

    return 0;
}

// The program isn't finished