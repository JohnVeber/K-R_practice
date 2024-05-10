/* Counting characters from input (2nd edition). */

#include <stdio.h>

void main(void){
    double nc;
    
    for(nc = 0; getchar() != EOF; ++nc)
        ; /* Empty operator usage is correct in case of cycle body absence*/
    printf("%.0f\n", nc);   
}
