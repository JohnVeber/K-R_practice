/* Copying input stream to an output. */

#include <stdio.h>

void main(void){
    int c;

    while((c = getchar()) != EOF){
        putchar(c);
    }
}
