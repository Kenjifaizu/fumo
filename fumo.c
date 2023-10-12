#include <stdio.h>

int main(){
    FILE *fumo=fopen("fumo.txt", "r");
    while(!feof(fumo)){
        printf("%c", getc(fumo));
    }

    return 0;
}