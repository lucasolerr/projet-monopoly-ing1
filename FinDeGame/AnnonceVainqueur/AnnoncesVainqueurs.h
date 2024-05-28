#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_ANNONCES_VAINQUEURS_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_ANNONCES_VAINQUEURS_H

#include "stdio.h"
#include "../../Structures/structures.h"
#include "../../Joueurs/Joueurs.h"
#include "../../Pages/PagePlacementLibre/pagePlacementLibre.h"
#include "../../BoucleTout/boucleTout.h"


void initBitmapFinDeGame(Dofus* dofus);
bool vainqueurPartie(Dofus* dofus);
void annonceVainqueur(Dofus* dofus);
void affichageStat2Joueurs(Dofus* dofus);
void imageVainqueur(Dofus* dofus);
void affichageStat3Joueurs(Dofus* dofus);
void affichageStat4Joueurs(Dofus* dofus);
void boucleClassement(Dofus* dofus);
void boucleClassementFinale(Dofus* dofus);
void dessinerBitmap(Dofus* dofus, int i);
void boucleClassementLuca(Dofus *dofus);


#endif //ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_ANNONCES_VAINQUEURS_H
