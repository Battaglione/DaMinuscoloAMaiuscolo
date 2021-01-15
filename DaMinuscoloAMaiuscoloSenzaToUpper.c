#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

int main (){
    char s[MAX], m[MAX];
    int i;

    printf("Inserire un nome: ");
    gets(s);

    strcpy(m,s);

    for(i = 0; i < strlen(m); i++){
        m[i] = m[i] - 32;
    }
    
    printf("Il nome finale e' ");
    puts(m);
}
