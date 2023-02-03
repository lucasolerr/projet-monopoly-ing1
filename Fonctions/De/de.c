#include "de.h"
#include "../../Structures/Structures.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lancerUnDe(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int sommeDe1EtDe2(int *valeurDe1, int *valeurDe2) {
    int somme = *valeurDe1 + *valeurDe2;
    return somme;
}

int sommeDe(int *valeurDe1, int *valeurDe2) {
    srand(time(NULL));
    *valeurDe2 = rand() % (6 - 1 + 1) + 1;
    *valeurDe1 = rand() % (6 - 1 + 1) + 1;
    int somme = *valeurDe1 + *valeurDe2;
    return somme;
}

void printSommeDe(Monopoly* monopoly, int numeroJoueur){
    printf("Vous avez fait %d et %d pour un total de %d\n", monopoly->tableauJoueur[numeroJoueur].valeurDe1, monopoly->tableauJoueur[numeroJoueur].valeurDe2,  monopoly->tableauJoueur[numeroJoueur].valeurDe1 + monopoly->tableauJoueur[numeroJoueur].valeurDe2);

}

int isDouble(int *valeurDe1, int *valeurDe2) {
    if (*valeurDe1 == *valeurDe2) {
        return 1;
    }
    return 0;
}

int tirEtSommeDeDes() {
    srand(time(NULL));
    int valeurDe2 = rand() % (6 - 1 + 1) + 1, valeurDe1 = rand() % (6 - 1 + 1) + 1;
    int somme = valeurDe1 + valeurDe2;
    return somme;
}

void des() {
    srand(time(NULL));
    int de1 = lancerUnDe(1, 6);
    int de2 = lancerUnDe(1, 6);
    printf("Le resultat du de 1 est : %d\n", de1);
    printf("Le resultat du de 2 est : %d\n", de2);
    printf("La somme des des est : %d\n", sommeDe1EtDe2(&de1, &de2));
    printf("Est-ce un double ?\n\t\t");
    if (isDouble(&de1, &de2) == 1) {
        printf("Oui\n");
    } else {
        printf("Non");
    }
}