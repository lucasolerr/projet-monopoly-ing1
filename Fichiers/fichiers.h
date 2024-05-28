#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_FICHIERS_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_FICHIERS_H

#include "stdio.h"
#include "../Structures/structures.h"


FILE* ouvrirEtConcatenerExtensionsFichierTxtEtNomDeSauvegarde(char *nomSauvegarde);

void afficherTab(Dofus* dofus);

void chargerDofus(Dofus* dofus, FILE* pFichier);

FILE *ouvrirUnFichierLecture(char *nomSauvegarde);

void lireFichier(FILE* pFichier, Dofus* dofus);

void lireFichierTypeBloc(FILE* pFichier, Dofus* dofus);

void lireFichierDecor(FILE* pFichier, Dofus* dofus);

FILE *ouvrirUnFichierEcriture(char *nomSauvegarde);

void sauvegarderDofus(Dofus* dofus, FILE* pFichier);

void fermerFichier(FILE** pFichier);

#endif