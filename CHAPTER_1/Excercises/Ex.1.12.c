/* This program outputs input stream by one word in line. */
#include <stdio.h>

void main(void){
    int c;
    
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t' ){
            while(c == ' ' || c == '\n' || c == '\t'){
                putchar("");
                c = getchar();
            }
            printf("\n");
            putchar(c);
        }
        else{
            putchar(c);
        }
    }
}
