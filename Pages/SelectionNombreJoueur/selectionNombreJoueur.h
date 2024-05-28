#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_SELECTIONNOMBREJOUEUR_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_SELECTIONNOMBREJOUEUR_H
#include "../../Structures/structures.h"
#define NUMERO_2_POSITION (dofus->allegro.coordonneesSourisX > 123 && dofus->allegro.coordonneesSourisX < 455) && (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555)
#define NUMERO_3_POSITION (dofus->allegro.coordonneesSourisX > 472 && dofus->allegro.coordonneesSourisX < 806) && (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555)
#define NUMERO_4_POSITION (dofus->allegro.coordonneesSourisX > 824 && dofus->allegro.coordonneesSourisX < 1158) &&(dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555)
#define POSITION_CROIX (dofus->allegro.coordonneesSourisX > 25 && dofus->allegro.coordonneesSourisX < 119) &&(dofus->allegro.coordonneesSourisY > 25 && dofus->allegro.coordonneesSourisY < 121)
#define POSITION_BOUTON_VALIDER (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255) &&(dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)


void initBitmapSelectionJoueur (Dofus *dofus);

void dessinerEtChoisirNombreJoueurs (Dofus *dofus);

void boucleTestDePL(Dofus *dofus);

void boucleTestDePL2(Dofus* dofus);
void dessinerEtChoisirNombreJoueurs2 (Dofus *dofus);

void boucleChoixNomJoueur(Dofus* dofus);
void boucleChoixNombreJoueurs(Dofus* dofus);
void boucleChoixClasse(Dofus* dofus);





void boucleChoixNombreJoueurs(Dofus *dofus);

#endif
