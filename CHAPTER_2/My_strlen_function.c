// The function counts a string (literal) length
#include <stdio.h>

int my_strlen(char *arr); //func declaration

int main(void){
    char *s = "s;lfdeeegj;lfjg"; 
    printf("Our literal: %s\n", s); // Not a nessecary row
    int result = my_strlen(s);
    printf("String length is: %d\n\n\n", result);
    
    return 0;
}

//func definition:
int my_strlen(char *arr){
    int i = 0;
    while (arr[i] != '\0')
        ++i;
    return i;
} 

// My output:

/*
Our literal: s;lfdeeegj;lfjg
String length is: 15
*/