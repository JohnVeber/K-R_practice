/* This program outputs input stream by one word in line. */
#include <stdio.h>

void main(void){
    int c;
    
    while((c = getchar()) != EOF){
        //putchar(c);
        if(c == ' ' || c == '\n' || c == '\t' ){
            printf("\n");
        }
        else{
            putchar(c);
        }
    }
}
