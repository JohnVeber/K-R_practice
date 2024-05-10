/* Copying input stream to an output + replacing spaces. */

#include <stdio.h>

void main(void){
    int c;

    c = getchar();
    while(c != EOF){
        putchar(c);
        while(c == ' '){
            continue;
            putchar(c);
            c = getchar();
        }
        c = getchar();
    }
}

/* IN PROGRESS*/