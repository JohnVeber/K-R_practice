/* Copying input stream to an output + replacing spaces. */

#include <stdio.h>

void main(void){
    int c = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            putchar(c);
            while ((c = getchar()) == ' '){
                putchar("");
            }
        }
        putchar(c);
    }
}
