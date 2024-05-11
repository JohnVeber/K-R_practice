/* Copying input stream to an output + replacing tabs, backspaces and backslashes. */

#include <stdio.h>

void main(void){
    int c = 0;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if(c == 8){
            putchar('\b'); /* I'm not confident in this block. */
        }
        else if(c == 92){
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }
}
