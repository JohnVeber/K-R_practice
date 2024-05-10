/* Counting of spaces, tabs and endline characters */

#include <stdio.h>

void main(void){
    int c, ns, nt, nl;
    
    ns = nt = nl = 0;
    while((c = getchar()) != EOF){
        if(c == ' ')
            ++ns;
        if(c == '\t' && c != '\n');
            ++nt;
        if(c == '\n')
            ++nl;
    }
    printf("There are %d spases, %d tabs and %d endline characters in your input\n", ns, nt, nl);   
}

/* TODO:
Find out why 2nd counter also increases as third if we put just one "enter" to input...*/