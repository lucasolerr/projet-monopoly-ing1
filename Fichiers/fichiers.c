#include "fichiers.h"

FILE* ouvrirEtConcatenerExtensionsFichierTxtEtNomDeSauvegarde(char *nomSauvegarde) {
    FILE* pMonFichier = NULL;
    char chemin[100];
    char extension[7] = ".txt";
    sprintf(chemin, "../Sources/txt/%s%s", nomSauvegarde, extension);
    if ((pMonFichier = fopen(chemin, "r")) == NULL) {
        printf("Erreur ouverture fichier lecture\n");
    }
    return pMonFichier;
}

void afficherTab(Dofus* dofus){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%d", dofus->map.mapTile[i][j].typeBloc);
        }
        printf("\n");
    }
}

void lireFichierTypeBloc(FILE* pFichier, Dofus* dofus){

    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            fscanf(pFichier, "%d", &(dofus->map.mapTile[y][x].typeBloc));
        }
    }

    fermerFichier(&pFichier);
}

void lireFichierDecor(FILE* pFichier, Dofus* dofus){

    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            fscanf(pFichier, "%d", &(dofus->map.mapTile[y][x].decor));
        }
    }

    fermerFichier(&pFichier);
}

void fermerFichier(FILE** pPFichier) {
    fclose(*pPFichier);
    *pPFichier = NULL;
}

FILE *ouvrirUnFichierEcriture(char *nomSauvegarde) {
    FILE *pMonFichier = NULL;
    char chemin[100];
    char extension[7] = ".ece";
    sprintf(chemin, "../Fichiers/Sauvegarde/%s%s", nomSauvegarde, extension);
    if ((pMonFichier = fopen(chemin, "w+")) == NULL) {
        printf("Erreur ouverture fichier ecriture\n");
    }
    return pMonFichier;
}

FILE *ouvrirUnFichierLecture(char *nomSauvegarde) {
    FILE *pMonFichier = NULL;
    char chemin[1000];
    char extension[7] = ".ece";
    sprintf(chemin, "../Fichiers/Sauvegarde/%s%s", nomSauvegarde, extension);
    if ((pMonFichier = fopen(chemin, "r+")) == NULL) {
        printf("Erreur ouverture fichier lecture\n");
    }
    return pMonFichier;
}

void sauvegarderDofus(Dofus* dofus, FILE* pFichier){
    fwrite(dofus, sizeof(Dofus), 1, pFichier);
    fwrite(dofus->joueurActif, sizeof(Joueurs), 1, pFichier);
    fwrite(dofus->joueurActif->next, sizeof(Joueurs), 1, pFichier);
    fermerFichier(&pFichier);
}

void chargerDofus(Dofus* dofus, FILE* pFichier){
    fread(dofus, sizeof(Dofus), 1, pFichier);
    fread(&dofus->joueurActif, sizeof(Joueurs), 1, pFichier);
    fread(&dofus->joueurActif->next, sizeof(Joueurs), 1, pFichier);
    fermerFichier(&pFichier);
}