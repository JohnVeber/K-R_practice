/* The function read seweral strings from input and return largest from them. */
#include <stdio.h>
#define MAXLINE 1000

int getlinekr(char line[], int maxline);
void copy(char to[], char from[]);

int main(void){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getlinekr(line, MAXLINE)) > 0)
        if (len > max){
            max = len;
            copy(longest, line);
        }
    if (max > 0);
        printf("%s", longest);
    return 0;
}

// getline() - read a row and return it's length
int getlinekr(char s[], int lim){
    int c, i;

    for (i = 0; i < lim-1 && (c= getchar())!= EOF && c!='\n';++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy() - copy a row 'from' to 'to' (we assume length is enougth)
void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')
    ++ i;
}

// Не компилируется через Run & debug
// компилируется через консоль, но в результате выводит "не удалось запустить двоичный файл..."