#ifndef ALBPL_SAUVEGARDE_H
#define ALBPL_SAUVEGARDE_H

#include "../../Structures/Structures.h"
#include "stdio.h"
#include "string.h"


char *creationFichierParUtilisateur(char *nomSauvegarde);

char *recuperationFichierParUtilisateur(char *nomSauvegarde);

FILE *ouvrirUnFichierEcriture(char *nomSauvegarde);

FILE *ouvrirUnFichierLecture(char *nomSauvegarde);

void fermerFichier(FILE *fichier);

void sauvegardeMonopoly(Monopoly* monopoly, FILE *fichier);

Monopoly chargerPartie();

void recuperationPartie(Monopoly monopoly);

//Monopoly chargerPartie(FILE* pFichier);

void chargerMonopoly(Monopoly *monopoly, char *nomSauvegarde, FILE *fichier);

void sauvegarderPartie(Monopoly* monopoly);

void sauvegarderPartieAutomatique(Monopoly* monopoly);

int sauvegardeJoueur(Monopoly *monopoly, FILE *fichier);

void chargerJoueur(FILE *fichier, int *tailleTableauJoueur, Monopoly *monopoly);

int sauvegardeCarteCommunaute(Monopoly* monopoly, FILE *fichier);

void chargerCarteCommunaute(FILE *fichier, int *tailleTableauCarteCommu, Monopoly *monopoly);

int sauvegardeCarteChance(Monopoly *monopoly, FILE *fichier);

void chargerCarteChance(FILE *fichier, int *tailleTableauCarteChance, Monopoly *monopoly);

int sauvegardePlateau(Monopoly *monopoly, FILE *fichier);

void chargerPlateau(FILE *fichier, int *tailleTableauPlateau, Monopoly *monopoly);

int sauvegardeTableauPropriete(Monopoly *monopoly, FILE *fichier);

int chargerTableauPropriete(FILE *fichier, int *tailleTableauPropriete, Monopoly *monopoly);

int nombredeSauvegardes();

Monopoly chargerTout(FILE *fichier);

void charger25(FILE *fichier, Monopoly *monopoly);

Monopoly chargerTableauProprieteLuca(FILE *fichier, int *tailleTableauPropriete);

Monopoly chargerPlateauMonopoly();



#endif