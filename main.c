#include "Structures/structures.h"
#include "Map/map.h"
#include "Fichiers/fichiers.h"
#include "Classes/classes.h"
#include "Pages/SelectionNombreJoueur/selectionNombreJoueur.h"
#include "Pages/PageMenuInGame/pageMenuInGame.h"
#include "Sorts/sorts.h"
#include "Bitmaps/bitmaps.h"
#include "Joueurs/Joueurs.h"
#include "Pages/SelectionClasse/selectionClasse.h"
#include "Pages/PageAide/pageAide.h"
#include "Pages/ChoixNom/choixNom.h"
#include "Pages/MenuPrincipal/menuPrincipal.h"
#include "FinDeGame/AnnonceVainqueur/AnnoncesVainqueurs.h"
#include "BoucleTout/boucleTout.h"
#include "Pages/PageAide/pageAide.h"
#include "FinDeGame/AnnonceVainqueur/AnnoncesVainqueurs.h"




void mainBaptiste(Dofus* dofus){
    initBitmapPersoEnJeuALL(dofus);
    initSpriteHUD(dofus);
   // affichageGeneral(dofus);
    initEnDurJoueur(dofus);
    bouclePlacementLibre(dofus);
   // boucleTest(dofus);
    libererJoueur(dofus);
}

void mainLuca(Dofus* dofus){
    initBitmapPersoEnJeuALL(dofus);
    initSpriteHUD(dofus);
    initEnDurJoueur(dofus);

    //boucleTest(dofus);
    bouclePlacementLibre(dofus);

    //libererJoueur(dofus);
}

void mainPL(Dofus* dofus){
    dofus->joueurActif = 0;
    initSpriteHUD(dofus);
    initEnDurJoueur(dofus);
    initalisationDataMap(dofus);
    initBitmapPersoEnJeuALL(dofus);
    initClasseEnJeuALL(dofus);
    initBitmapClasse(dofus);
    initBitmapSelectionJoueur(dofus);
    initBitmapChoixNomJoueurs(dofus);
    initBitmapPageAide(dofus);

    //boucleChoixNombreJoueurs(dofus);
    //boucleChoixNomJoueurs(dofus);
    //boucleTestDePL(dofus);

    //printf("%d", dofus.classes[OSA].nbPM);
}

void mainAntoine(Dofus* dofus){
    dofus->interactionExterieure.compteurTimer = 0;
    bitmapSortsCreate(dofus);
    initBitmapSorts(dofus);
    initBitmapSpriteAnimMvmnt(dofus);

    initBitmapPersoEnJeuALL(dofus);
    initEnDurJoueur(dofus);
    initSpriteHUD(dofus);
    initSorts(dofus);

    boucleCombat(dofus);

    libererJoueur(dofus);
}

void initAll(Dofus* dofus){
    srand(time(NULL));
    installAllegro();
    declarerAllegro(dofus);
    initAllegroAll(dofus);
    initalisationDataMap(dofus);
    bitmapSortsCreate(dofus);
    initBitmapSorts(dofus);
    initBitmapSpriteAnimMvmnt(dofus);
    initBitmapPersoEnJeuALL(dofus);
    initSpriteHUD(dofus);
    initSorts(dofus);
    initalisationDataMap(dofus);
    initClasseEnJeuALL(dofus);
    initBitmapClasse(dofus);
    initBitmapSelectionJoueur(dofus);
    initBitmapChoixNomJoueurs(dofus);
    initBitmapPageAide(dofus);
    initBitmapFinDeGame(dofus);
    //initEnDurJoueur(dofus);
}

int main () {
    Dofus dofus = {0};

   // dofus.joueur->vainqueur = true;
    //annonceVainqueur(&dofus);

    initAll(&dofus);

    boucleTout(&dofus);

    //mainLuca(&dofus);

    //mainPL(&dofus);

     //mainAntoine(&dofus);

    //mainBaptiste(&dofus);

    //boucleMenuPrincipal(&dofus);

    libererAll(&dofus);

    return 0;
}