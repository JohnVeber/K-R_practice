/* Counting characters from input (1st edition). */

#include <stdio.h>

void main(void){
    long nc;

    nc = 0;
    while(getchar() != EOF){
        ++nc;
    }
    printf("%ld\n", nc);   
}
