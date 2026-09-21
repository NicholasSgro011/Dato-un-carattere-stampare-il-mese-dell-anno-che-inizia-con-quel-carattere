/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char lettera1, lettera2;
    int numero;

    printf("Inserisci l'iniziale: ");
    scanf(" %c", &lettera1);

    switch (lettera1) {
        case 'g':
        case 'G':
            printf("Inserisci il secondo carattere: ");
            scanf(" %c", &lettera2);
            if (lettera2 == 'e' || lettera2 == 'E') printf("GENNAIO\n");
            else if (lettera2 == 'i' || lettera2 == 'I') printf("GIUGNO\n");
            break;

        case 'f':
        case 'F':
            printf("FEBBRAIO\n");
            break;

        case 'm':
        case 'M':
            printf("Inserisci un numero: ");
            scanf("%d", &numero);
            if (numero == 1) printf("MARZO\n");
            else if (numero == 2) printf("MAGGIO\n");
            break;

        case 'a':
        case 'A':
            printf("Inserisci il secondo carattere: ");
            scanf(" %c", &lettera2);
            if (lettera2 == 'p' || lettera2 == 'P') printf("APRILE\n");
            else if (lettera2 == 'g' || lettera2 == 'G') printf("AGOSTO\n");
            break;

        case 'l':
        case 'L':
            printf("LUGLIO\n");
            break;

        case 's':
        case 'S':
            printf("SETTEMBRE\n");
            break;

        case 'o':
        case 'O':
            printf("OTTOBRE\n");
            break;

        case 'n':
        case 'N':
            printf("NOVEMBRE\n");
            break;

        case 'd':
        case 'D':
            printf("DICEMBRE\n");
            break;

        default:
            printf("NON E' L'INIZIALE DI UN MESE\n");
            break;
    }

    return 0;
}