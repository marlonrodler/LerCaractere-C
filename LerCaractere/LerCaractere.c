
#include <stdio.h>
#include <stdlib.h>
void main() {
    FILE *fptr;
    char ch;

        if ((fptr = fopen("arqtext.txt","r"))==NULL) {
        printf("Erro na abertura do arquivo.");
        exit(0);
        }

        while ((ch=getc(fptr)) != EOF)//EOF -> final do arquivo
        printf("%c",ch);

    fclose(fptr);
}
//Fim main
