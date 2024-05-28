#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_CLASSES_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_CLASSES_H
#include "../Structures/structures.h"
#define POSITION_FLECHE_RETOUR (dofus->allegro.coordonneesSourisX > 12 && dofus->allegro.coordonneesSourisX < 131) &&(dofus->allegro.coordonneesSourisY > 15 && dofus->allegro.coordonneesSourisY < 110)
#define POSITION_BOUTON_VALIDER (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255) &&(dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)

void affichageGeneralPL(Dofus* dofus);

void initBitmapPersoEnJeuALL (Dofus *dofus);
void initClasseEnJeuALL (Dofus *dofus);

void initBitmapSpriteAnimMvmnt(Dofus* dofus);

void initBitmapPersoIopEnJeu (Dofus* dofus);
void initBitmapPersoFecaEnJeu (Dofus* dofus);
void initBitmapPersoEcaEnJeu (Dofus* dofus);
void initBitmapPersoOsaEnJeu (Dofus* dofus);

void initClasseIop (Dofus* dofus);
void initClasseFeca (Dofus* dofus);
void initClasseEca (Dofus* dofus);
void initClasseOsa (Dofus* dofus);

void dessinerIopFace (Dofus *dofus, int x, int y);
void dessinerIopMiFaceDroite (Dofus *dofus, int x, int y);
void dessinerIopDroite (Dofus *dofus, int x, int y);
void dessinerIopMiDosDroite (Dofus *dofus, int x, int y);
void dessinerIopDos (Dofus *dofus, int x, int y);
void dessinerIopMiDosGauche (Dofus *dofus, int x, int y);
void dessinerIopGauche (Dofus *dofus, int x, int y);
void dessinerIopMiFaceGauche (Dofus *dofus, int x, int y);

void testDessinerTousJoueursEnJeu (Dofus *dofus);

void affichageGeneralPL2(Dofus* dofus);

#endif
