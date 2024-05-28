#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_MAP_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_MAP_H

#include "../Structures/structures.h"

int valeurAbsolue(int a);

//Init ou déplacements

void initalisationDataMap(Dofus* dofus);

void initBlocPleins(Dofus* dofus, int y, int x);

void bitmapSpriteInit(Dofus* dofus);

void bitmapSpriteDecorInit(Dofus* dofus);

void actualiserPositionSourisJoueur(Dofus* dofus);

int isometricCoordsToScreenX(Dofus* dofus);

int isometricCoordsToScreenY(Dofus* dofus);

void calculPositionSourisEnCelluleXY(Dofus* dofus);

void calculPositionSourisEnCelluleIso(Dofus* dofus);

void calculPositionSoursiEnOffsetDansUneCelluleXY(Dofus* dofus);

void calculPositionSourisEnCelluleIsoReactualiseeGraceSpriteCheat(Dofus* dofus);

void razOutOfMapBorders(Dofus* dofus);

void calculClicSurPersoPourTousChemin(Dofus* dofus);


//Affichages

void dessinerCheminLorsDeplacementSouris(Dofus* dofus);

void dessinerTousCheminsClicSurPerso(Dofus* dofus);

void affichageGeneral(Dofus* dofus);

void afficherFondMap(Dofus* dofus);

void affichageHover(Dofus* dofus);

void afficherContourTile(Dofus* dofus);

void afficherBlocPleins(Dofus* dofus);

void afficherDecor(Dofus *dofus);

void affichageTexteDebug(Dofus *dofus);

void afficherJoueurActif(Dofus *dofus);

void afficherJoueur(Dofus* dofus);

void affichageGeneralPlacementLibre(Dofus* dofus);




//Boucles

void boucleTest(Dofus* dofus);
void bouclePlacementLibre(Dofus* dofus);




//Test

void calculDeplacementEnFonctionDesPM(Dofus* dofus);

void calculDeplacementEnFonctionDesPMSelonXetY(Dofus* dofus);

void testDeplacement2(Dofus* dofus);

void calculDeplacementPMsurXetYAvecTabChemin(Dofus* dofus);

void actualisationCoordsDeplacementDuJoueurTeleportation(Dofus* dofus);


#endif
