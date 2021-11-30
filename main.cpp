#include <iostream>
#include "verifica.h"
using namespace std;

int main() {
    char a=0;
    char b=0;
    scanf("%c",&a);
    if(prova(a)==true){
        if(65<=a&&a<=90){
            b=a+32;

        }else{
            b=a-32;}
        printf("%c", b);
    }else{
        printf("errore");
    }
    //scanf("%c",&a); /*serve a inserire da tastiera, %C serve a indicare che la variabile inserita sarà una
    // char e la & indica che deve salvarla in a*/
    //printf("%c", a);

    return 0;
}
