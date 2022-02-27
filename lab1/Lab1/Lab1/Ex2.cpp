#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fisier;
    int n = 0;
    int suma  = 0;
    fisier = fopen("ini.txt", "r");
    if (fisier == NULL) {
        printf("%s\n", "Nu s-a putut deschide fisierul.");
    } else {
        printf("%s\n", "Fisier deschis cu succes.");
        char s[100];
        while (fgets(s, 100, fisier)) {
            s[strlen(s) - 1] = '\0';
            n = 0;
            for (int i = 0; i <= strlen(s) - 1; i++) {
                int cif;
                cif   = s[i] - '0';
                n = n * 10 + cif;
            }
            suma = suma + n;
        }
        printf("%s\n", "Suma este:");
        printf("%d\n", suma);
    }
}