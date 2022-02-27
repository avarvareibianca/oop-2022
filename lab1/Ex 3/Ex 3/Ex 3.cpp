#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char propozitie[100];
    printf("Introduceti propozitia: ");
    scanf("%[^\n]s", propozitie);
    printf("%s\n", propozitie);
    char separator[] = " ";
    char matrice[20][20];
    char auxiliar[20];
    int i = 0;
    char* cuvant;
    int j;
    cuvant = strtok(propozitie, separator);
    while (cuvant != NULL) {
        strcpy(matrice[i], cuvant);
        cuvant = strtok(NULL, separator);
        i++;
    }
    for (j = 0; j < i; j++) {
        for (int k = 0; k < i; k++) {
            if (strlen( matrice[j]) > strlen(matrice[k])) {
                strcpy(auxiliar, matrice[j]);
                strcpy(matrice[j], matrice[k]);
                strcpy(matrice[k], auxiliar);
            }
            if ( (strlen(matrice[j]) ==  strlen(matrice[k])) ) {
                if (strcmp(matrice[j], matrice[k]) == -1) {
                strcpy(auxiliar, matrice[j]);
                strcpy(matrice[j], matrice[k]);
                strcpy(matrice[k], auxiliar);
                }          
            }
        }
    }


    for ( j = 0; j < i; j++) {
        printf("%s\n", matrice[j]);
    }
}

