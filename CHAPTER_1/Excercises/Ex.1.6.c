/* Check of expression value */

#include <stdio.h>

void main(void){
    printf("Press any characters or Ctrl+D to check 'EOF case':\n");
    /* Usual case (character was entered)*/
    int c;
    int res = (getchar() != EOF);

    while((c = getchar()) != EOF){
        putchar(c);
        continue;
    }
        printf("Value of expression in these usual cases are:%d\n\n", res);
    /* EOF case*/
    int res_err = (getchar() != EOF);
    printf("Value of expression in EOF case:%d\n", res_err);

}
