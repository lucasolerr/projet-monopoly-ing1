#include "map.h"
#include "../Fichiers/fichiers.h"

#include "../Classes/classes.h" //à enlever c'est pour tester
#include "../Pages/SelectionNombreJoueur/selectionNombreJoueur.h"
#include "../Pages/PageMenuInGame/pageMenuInGame.h"
#include "../Joueurs/Joueurs.h"
#include "../Animations/animations.h"

//INITIALISATIONS

void initalisationDataMap(Dofus *dofus) {

    initAllAnimations(dofus);

    dofus->map.Origine.celluleX = 8;
    dofus->map.Origine.celluleY = 1;

    lireFichierTypeBloc(ouvrirEtConcatenerExtensionsFichierTxtEtNomDeSauvegarde("map"), dofus);
    lireFichierDecor(ouvrirEtConcatenerExtensionsFichierTxtEtNomDeSauvegarde("decor"), dofus);

    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            dofus->map.mapTile[y][x].spriteLargeur = 80;//Une tuile fait 40px de large
            dofus->map.mapTile[y][x].spriteHauteur = 40;//par 20px de haut
            dofus->map.mapTile[y][x].spriteHalfLargeur = dofus->map.mapTile[y][x].spriteLargeur / 2;// divisé par 2
            dofus->map.mapTile[y][x].spriteHalfHauteur = dofus->map.mapTile[y][x].spriteHauteur / 2;// divisé par 2

            dofus->map.mapTile[y][x].coordsIso.celluleX = x;
            dofus->map.mapTile[y][x].coordsIso.celluleY = y;

            initBlocPleins(dofus, y, x);

            dofus->map.mapTile[y][x].typeBloc += 3; // 3 pour éviter les 3 premiers sprites //sable, terre...

            dofus->map.mapTile[y][x].coordsXY.screenX =
                    (dofus->map.Origine.celluleX * dofus->map.mapTile[y][x].spriteLargeur) +
                    x * dofus->map.mapTile[y][x].spriteHalfLargeur -
                    y * dofus->map.mapTile[y][x].spriteHalfLargeur; //init les positions X des tuiles
            dofus->map.mapTile[y][x].coordsXY.screenY =
                    (dofus->map.Origine.celluleY * dofus->map.mapTile[y][x].spriteHauteur) +
                    x * dofus->map.mapTile[y][x].spriteHalfHauteur +
                    y * dofus->map.mapTile[y][x].spriteHalfHauteur; //init les positions Y des tuiles
        }
    }

    bitmapSpriteInit(dofus);
    bitmapSpriteDecorInit(dofus);

}

void initBlocPleins(Dofus *dofus, int y, int x) {
    if (dofus->map.mapTile[y][x].decor <= 10 && dofus->map.mapTile[y][x].decor > 0 ||
        dofus->map.mapTile[y][x].typeBloc >= 1) {
        dofus->map.mapTile[y][x].blocPlein = 1; //obstacle ou pas
    } else {
        dofus->map.mapTile[y][x].blocPlein = 0; //obstacle ou pas
    }
}


void bitmapSpriteInit(Dofus *dofus) {

    dofus->map.spriteTile[CHEAT].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[CHEAT].spriteLargeur = 80;
    dofus->map.spriteTile[CHEAT].spriteHauteur = 40;
    dofus->map.spriteTile[CHEAT].spriteX = 0;
    dofus->map.spriteTile[CHEAT].spriteY = 0;

    dofus->map.spriteTile[HOVER].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[HOVER].spriteLargeur = 80;
    dofus->map.spriteTile[HOVER].spriteHauteur = 40;
    dofus->map.spriteTile[HOVER].spriteX = 80;
    dofus->map.spriteTile[HOVER].spriteY = 0;

    dofus->map.spriteTile[CONTOUR].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[CONTOUR].spriteLargeur = 80;
    dofus->map.spriteTile[CONTOUR].spriteHauteur = 40;
    dofus->map.spriteTile[CONTOUR].spriteX = 160;
    dofus->map.spriteTile[CONTOUR].spriteY = 0;

    dofus->map.spriteTile[BASIC].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BASIC].spriteLargeur = 80;
    dofus->map.spriteTile[BASIC].spriteHauteur = 65;
    dofus->map.spriteTile[BASIC].spriteX = 240;
    dofus->map.spriteTile[BASIC].spriteY = 0;

    dofus->map.spriteTile[BLOC_VOLANT].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_VOLANT].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_VOLANT].spriteHauteur = 55;
    dofus->map.spriteTile[BLOC_VOLANT].spriteX = 320;
    dofus->map.spriteTile[BLOC_VOLANT].spriteY = 0;

    dofus->map.spriteTile[BLOC_FACE_DROITE_CUT].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_FACE_DROITE_CUT].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_FACE_DROITE_CUT].spriteHauteur = 78;
    dofus->map.spriteTile[BLOC_FACE_DROITE_CUT].spriteX = 400;
    dofus->map.spriteTile[BLOC_FACE_DROITE_CUT].spriteY = 0;

    dofus->map.spriteTile[BLOC_PIC].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_PIC].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_PIC].spriteHauteur = 52;
    dofus->map.spriteTile[BLOC_PIC].spriteX = 480;
    dofus->map.spriteTile[BLOC_PIC].spriteY = 0;

    dofus->map.spriteTile[BLOC_LAVE_GAUCHE].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE].spriteHauteur = 62;
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE].spriteX = 560;
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE].spriteY = 0;

    dofus->map.spriteTile[BLOC_BACK_PLAT].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_BACK_PLAT].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_BACK_PLAT].spriteHauteur = 73;
    dofus->map.spriteTile[BLOC_BACK_PLAT].spriteX = 640;
    dofus->map.spriteTile[BLOC_BACK_PLAT].spriteY = 0;

    dofus->map.spriteTile[BLOC_FACE_PLAT].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_FACE_PLAT].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_FACE_PLAT].spriteHauteur = 55;
    dofus->map.spriteTile[BLOC_FACE_PLAT].spriteX = 720;
    dofus->map.spriteTile[BLOC_FACE_PLAT].spriteY = 0;

    dofus->map.spriteTile[BLOC_LAVE_DROITE].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LAVE_DROITE].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LAVE_DROITE].spriteHauteur = 45;
    dofus->map.spriteTile[BLOC_LAVE_DROITE].spriteX = 800;
    dofus->map.spriteTile[BLOC_LAVE_DROITE].spriteY = 0;

    dofus->map.spriteTile[BLOC_LAVE_CERCLE].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LAVE_CERCLE].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LAVE_CERCLE].spriteHauteur = 52;
    dofus->map.spriteTile[BLOC_LAVE_CERCLE].spriteX = 877;
    dofus->map.spriteTile[BLOC_LAVE_CERCLE].spriteY = 0;

    dofus->map.spriteTile[BLOC_GAUCHE_PLAT].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_GAUCHE_PLAT].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_GAUCHE_PLAT].spriteHauteur = 41;
    dofus->map.spriteTile[BLOC_GAUCHE_PLAT].spriteX = 957;
    dofus->map.spriteTile[BLOC_GAUCHE_PLAT].spriteY = 0;

    dofus->map.spriteTile[BLOC_IMMER_LAVE_BIG].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_IMMER_LAVE_BIG].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_BIG].spriteHauteur = 120;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_BIG].spriteX = 1040;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_BIG].spriteY = 0;

    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL].spriteHauteur = 90;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL].spriteX = 1120;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL].spriteY = 0;

    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL2].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL2].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL2].spriteHauteur = 70;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL2].spriteX = 1200;
    dofus->map.spriteTile[BLOC_IMMER_LAVE_SMALL2].spriteY = 0;

    dofus->map.spriteTile[BLOC_LAVE_DROITE2].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LAVE_DROITE2].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LAVE_DROITE2].spriteHauteur = 60;
    dofus->map.spriteTile[BLOC_LAVE_DROITE2].spriteX = 1280;
    dofus->map.spriteTile[BLOC_LAVE_DROITE2].spriteY = 0;

    dofus->map.spriteTile[BLOC_LONG].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LONG].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LONG].spriteHauteur = 75;
    dofus->map.spriteTile[BLOC_LONG].spriteX = 1360;
    dofus->map.spriteTile[BLOC_LONG].spriteY = 0;

    dofus->map.spriteTile[BLOC_CUT_FACE_DROITE].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_CUT_FACE_DROITE].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_CUT_FACE_DROITE].spriteHauteur = 65;
    dofus->map.spriteTile[BLOC_CUT_FACE_DROITE].spriteX = 1440;
    dofus->map.spriteTile[BLOC_CUT_FACE_DROITE].spriteY = 0;


    dofus->map.spriteTile[BLOC_LAVE_GAUCHE_2].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE_2].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE_2].spriteHauteur = 90;
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE_2].spriteX = 1520;
    dofus->map.spriteTile[BLOC_LAVE_GAUCHE_2].spriteY = 0;

    dofus->map.spriteTile[BLOC_GRAND].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_GRAND].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_GRAND].spriteHauteur = 73;
    dofus->map.spriteTile[BLOC_GRAND].spriteX = 1600;
    dofus->map.spriteTile[BLOC_GRAND].spriteY = 0;

    dofus->map.spriteTile[BLOC_POINTE].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_POINTE].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_POINTE].spriteHauteur = 51;
    dofus->map.spriteTile[BLOC_POINTE].spriteX = 1680;
    dofus->map.spriteTile[BLOC_POINTE].spriteY = 0;


    dofus->map.spriteTile[BLOC_LAVE_AUTOUR].image = &dofus->tabBitmap[SPRITE_MAP];
    dofus->map.spriteTile[BLOC_LAVE_AUTOUR].spriteLargeur = 80;
    dofus->map.spriteTile[BLOC_LAVE_AUTOUR].spriteHauteur = 57;
    dofus->map.spriteTile[BLOC_LAVE_AUTOUR].spriteX = 1760;
    dofus->map.spriteTile[BLOC_LAVE_AUTOUR].spriteY = 0;


}

void bitmapSpriteDecorInit(Dofus *dofus) {
    dofus->map.spriteDecor[TRIPLE_COULEE].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[TRIPLE_COULEE].spriteLargeur = 200;
    dofus->map.spriteDecor[TRIPLE_COULEE].spriteHauteur = 335;
    dofus->map.spriteDecor[TRIPLE_COULEE].spriteX = 0;
    dofus->map.spriteDecor[TRIPLE_COULEE].spriteY = 0;
    dofus->map.spriteDecor[TRIPLE_COULEE].decalageXDecor = -70;
    dofus->map.spriteDecor[TRIPLE_COULEE].decalageYDecor = -dofus->map.spriteDecor[TRIPLE_COULEE].spriteHauteur + 70;

    dofus->map.spriteDecor[SIMPLE_COULEE].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[SIMPLE_COULEE].spriteLargeur = 103;
    dofus->map.spriteDecor[SIMPLE_COULEE].spriteHauteur = 400;
    dofus->map.spriteDecor[SIMPLE_COULEE].spriteX = 200;
    dofus->map.spriteDecor[SIMPLE_COULEE].spriteY = 0;
    dofus->map.spriteDecor[SIMPLE_COULEE].decalageXDecor = -15;
    dofus->map.spriteDecor[SIMPLE_COULEE].decalageYDecor = -dofus->map.spriteDecor[SIMPLE_COULEE].spriteHauteur + 50;

    dofus->map.spriteDecor[PETIT_BLOC].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[PETIT_BLOC].spriteLargeur = 28;
    dofus->map.spriteDecor[PETIT_BLOC].spriteHauteur = 22;
    dofus->map.spriteDecor[PETIT_BLOC].spriteX = 303;
    dofus->map.spriteDecor[PETIT_BLOC].spriteY = 0;
    dofus->map.spriteDecor[PETIT_BLOC].decalageXDecor = 20;
    dofus->map.spriteDecor[PETIT_BLOC].decalageYDecor = 7;

    dofus->map.spriteDecor[BLOC_ROND].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[BLOC_ROND].spriteLargeur = 40;
    dofus->map.spriteDecor[BLOC_ROND].spriteHauteur = 36;
    dofus->map.spriteDecor[BLOC_ROND].spriteX = 303;
    dofus->map.spriteDecor[BLOC_ROND].spriteY = 21;
    dofus->map.spriteDecor[BLOC_ROND].decalageXDecor = 21;
    dofus->map.spriteDecor[BLOC_ROND].decalageYDecor = -7;

    dofus->map.spriteDecor[GROS_BLOC_ROND].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[GROS_BLOC_ROND].spriteLargeur = 60;
    dofus->map.spriteDecor[GROS_BLOC_ROND].spriteHauteur = 73;
    dofus->map.spriteDecor[GROS_BLOC_ROND].spriteX = 303;
    dofus->map.spriteDecor[GROS_BLOC_ROND].spriteY = 57;
    dofus->map.spriteDecor[GROS_BLOC_ROND].decalageXDecor = 47;
    dofus->map.spriteDecor[GROS_BLOC_ROND].decalageYDecor = 62;

    dofus->map.spriteDecor[CAILLOU].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[CAILLOU].spriteLargeur = 50;
    dofus->map.spriteDecor[CAILLOU].spriteHauteur = 72;
    dofus->map.spriteDecor[CAILLOU].spriteX = 303;
    dofus->map.spriteDecor[CAILLOU].spriteY = 130;
    dofus->map.spriteDecor[CAILLOU].decalageXDecor = 15;
    dofus->map.spriteDecor[CAILLOU].decalageYDecor = -30;

    dofus->map.spriteDecor[PETIT_VOLCAN].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[PETIT_VOLCAN].spriteLargeur = 64;
    dofus->map.spriteDecor[PETIT_VOLCAN].spriteHauteur = 65;
    dofus->map.spriteDecor[PETIT_VOLCAN].spriteX = 303;
    dofus->map.spriteDecor[PETIT_VOLCAN].spriteY = 202;
    dofus->map.spriteDecor[PETIT_VOLCAN].decalageXDecor = 10;
    dofus->map.spriteDecor[PETIT_VOLCAN].decalageYDecor = -30;

    dofus->map.spriteDecor[CAILLOU_ROND].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[CAILLOU_ROND].spriteLargeur = 30;
    dofus->map.spriteDecor[CAILLOU_ROND].spriteHauteur = 37;
    dofus->map.spriteDecor[CAILLOU_ROND].spriteX = 391;
    dofus->map.spriteDecor[CAILLOU_ROND].spriteY = 166;
    dofus->map.spriteDecor[CAILLOU_ROND].decalageXDecor = 23;
    dofus->map.spriteDecor[CAILLOU_ROND].decalageYDecor = -10;

    dofus->map.spriteDecor[CAILLOU_ROND2].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[CAILLOU_ROND2].spriteLargeur = 50;
    dofus->map.spriteDecor[CAILLOU_ROND2].spriteHauteur = 70;
    dofus->map.spriteDecor[CAILLOU_ROND2].spriteX = 421;
    dofus->map.spriteDecor[CAILLOU_ROND2].spriteY = 165;
    dofus->map.spriteDecor[CAILLOU_ROND2].decalageXDecor = 18;
    dofus->map.spriteDecor[CAILLOU_ROND2].decalageYDecor = -35;

    dofus->map.spriteDecor[PARTERRE].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[PARTERRE].spriteLargeur = 25;
    dofus->map.spriteDecor[PARTERRE].spriteHauteur = 21;
    dofus->map.spriteDecor[PARTERRE].spriteX = 391;
    dofus->map.spriteDecor[PARTERRE].spriteY = 268;
    dofus->map.spriteDecor[PARTERRE].decalageXDecor = 24;
    dofus->map.spriteDecor[PARTERRE].decalageYDecor = 0;

    dofus->map.spriteDecor[PETIT_VOLCAN2].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[PETIT_VOLCAN2].spriteLargeur = 30;
    dofus->map.spriteDecor[PETIT_VOLCAN2].spriteHauteur = 31;
    dofus->map.spriteDecor[PETIT_VOLCAN2].spriteX = 431;
    dofus->map.spriteDecor[PETIT_VOLCAN2].spriteY = 263;
    dofus->map.spriteDecor[PETIT_VOLCAN2].decalageXDecor = 20;
    dofus->map.spriteDecor[PETIT_VOLCAN2].decalageYDecor = 0;

    dofus->map.spriteDecor[GRAND_PARTERRE].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[GRAND_PARTERRE].spriteLargeur = 158;
    dofus->map.spriteDecor[GRAND_PARTERRE].spriteHauteur = 130;
    dofus->map.spriteDecor[GRAND_PARTERRE].spriteX = 303;
    dofus->map.spriteDecor[GRAND_PARTERRE].spriteY = 294;
    dofus->map.spriteDecor[GRAND_PARTERRE].decalageXDecor = -20;
    dofus->map.spriteDecor[GRAND_PARTERRE].decalageYDecor = -40;

    dofus->map.spriteDecor[ECLABOUSSURE].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[ECLABOUSSURE].spriteLargeur = 147;
    dofus->map.spriteDecor[ECLABOUSSURE].spriteHauteur = 152;
    dofus->map.spriteDecor[ECLABOUSSURE].spriteX = 365;
    dofus->map.spriteDecor[ECLABOUSSURE].spriteY = 0;
    dofus->map.spriteDecor[ECLABOUSSURE].decalageXDecor = -27;
    dofus->map.spriteDecor[ECLABOUSSURE].decalageYDecor = -120;

    dofus->map.spriteDecor[ECLA2].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[ECLA2].spriteLargeur = 80;
    dofus->map.spriteDecor[ECLA2].spriteHauteur = 83;
    dofus->map.spriteDecor[ECLA2].spriteX = 510;
    dofus->map.spriteDecor[ECLA2].spriteY = 258;
    dofus->map.spriteDecor[ECLA2].decalageXDecor = 5;
    dofus->map.spriteDecor[ECLA2].decalageYDecor = -50;

    dofus->map.spriteDecor[FUMEE_GRANDE].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE_GRANDE].spriteLargeur = 213;
    dofus->map.spriteDecor[FUMEE_GRANDE].spriteHauteur = 259;
    dofus->map.spriteDecor[FUMEE_GRANDE].spriteX = 510;
    dofus->map.spriteDecor[FUMEE_GRANDE].spriteY = 0;
    dofus->map.spriteDecor[FUMEE_GRANDE].decalageXDecor = -76;
    dofus->map.spriteDecor[FUMEE_GRANDE].decalageYDecor = -230;

    dofus->map.spriteDecor[PAR_TERRE2].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[PAR_TERRE2].spriteLargeur = 20;
    dofus->map.spriteDecor[PAR_TERRE2].spriteHauteur = 16;
    dofus->map.spriteDecor[PAR_TERRE2].spriteX = 661;
    dofus->map.spriteDecor[PAR_TERRE2].spriteY = 317;
    dofus->map.spriteDecor[PAR_TERRE2].decalageXDecor = 30;
    dofus->map.spriteDecor[PAR_TERRE2].decalageYDecor = 10;

    dofus->map.spriteDecor[ECLAGRAND].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[ECLAGRAND].spriteLargeur = 82;
    dofus->map.spriteDecor[ECLAGRAND].spriteHauteur = 88;
    dofus->map.spriteDecor[ECLAGRAND].spriteX = 723;
    dofus->map.spriteDecor[ECLAGRAND].spriteY = 0;
    dofus->map.spriteDecor[ECLAGRAND].decalageXDecor = 0;
    dofus->map.spriteDecor[ECLAGRAND].decalageYDecor = 0;

    dofus->map.spriteDecor[ECLAMOY].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[ECLAMOY].spriteLargeur = 60;
    dofus->map.spriteDecor[ECLAMOY].spriteHauteur = 65;
    dofus->map.spriteDecor[ECLAMOY].spriteX = 723;
    dofus->map.spriteDecor[ECLAMOY].spriteY = 88;
    dofus->map.spriteDecor[ECLAMOY].decalageXDecor = 0;
    dofus->map.spriteDecor[ECLAMOY].decalageYDecor = 0;

    dofus->map.spriteDecor[ECLAPETIT].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[ECLAPETIT].spriteLargeur = 40;
    dofus->map.spriteDecor[ECLAPETIT].spriteHauteur = 43;
    dofus->map.spriteDecor[ECLAPETIT].spriteX = 723;
    dofus->map.spriteDecor[ECLAPETIT].spriteY = 152;
    dofus->map.spriteDecor[ECLAPETIT].decalageXDecor = 0;
    dofus->map.spriteDecor[ECLAPETIT].decalageYDecor = 0;

    dofus->map.spriteDecor[JET1].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[JET1].spriteLargeur = 50;
    dofus->map.spriteDecor[JET1].spriteHauteur = 70;
    dofus->map.spriteDecor[JET1].spriteX = 723;
    dofus->map.spriteDecor[JET1].spriteY = 195;
    dofus->map.spriteDecor[JET1].decalageXDecor = 10;
    dofus->map.spriteDecor[JET1].decalageYDecor = -40;

    dofus->map.spriteDecor[JET2].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[JET2].spriteLargeur = 45;
    dofus->map.spriteDecor[JET2].spriteHauteur = 47;
    dofus->map.spriteDecor[JET2].spriteX = 773;
    dofus->map.spriteDecor[JET2].spriteY = 195;
    dofus->map.spriteDecor[JET2].decalageXDecor = 20;
    dofus->map.spriteDecor[JET2].decalageYDecor = -20;


    dofus->map.spriteDecor[JET3].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[JET3].spriteLargeur = 30;
    dofus->map.spriteDecor[JET3].spriteHauteur = 32;
    dofus->map.spriteDecor[JET3].spriteX = 773;
    dofus->map.spriteDecor[JET3].spriteY = 242;
    dofus->map.spriteDecor[JET3].decalageXDecor = 25;
    dofus->map.spriteDecor[JET3].decalageYDecor = -10;

    dofus->map.spriteDecor[JET4].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[JET4].spriteLargeur = 30;
    dofus->map.spriteDecor[JET4].spriteHauteur = 42;
    dofus->map.spriteDecor[JET4].spriteX = 805;
    dofus->map.spriteDecor[JET4].spriteY = 0;
    dofus->map.spriteDecor[JET4].decalageXDecor = 25;
    dofus->map.spriteDecor[JET4].decalageYDecor = -15;

    dofus->map.spriteDecor[JET5].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[JET5].spriteLargeur = 20;
    dofus->map.spriteDecor[JET5].spriteHauteur = 28;
    dofus->map.spriteDecor[JET5].spriteX = 805;
    dofus->map.spriteDecor[JET5].spriteY = 41;
    dofus->map.spriteDecor[JET5].decalageXDecor = 30;
    dofus->map.spriteDecor[JET5].decalageYDecor = 0;

    dofus->map.spriteDecor[JET6].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[JET6].spriteLargeur = 75;
    dofus->map.spriteDecor[JET6].spriteHauteur = 103;
    dofus->map.spriteDecor[JET6].spriteX = 835;
    dofus->map.spriteDecor[JET6].spriteY = 0;
    dofus->map.spriteDecor[JET6].decalageXDecor = 0;
    dofus->map.spriteDecor[JET6].decalageYDecor = -70;

    dofus->map.spriteDecor[FUMEE1].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE1].spriteLargeur = 70;
    dofus->map.spriteDecor[FUMEE1].spriteHauteur = 154;
    dofus->map.spriteDecor[FUMEE1].spriteX = 818;
    dofus->map.spriteDecor[FUMEE1].spriteY = 243;
    dofus->map.spriteDecor[FUMEE1].decalageXDecor = 0;
    dofus->map.spriteDecor[FUMEE1].decalageYDecor = -130;

    dofus->map.spriteDecor[FUMEE2].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE2].spriteLargeur = 126;
    dofus->map.spriteDecor[FUMEE2].spriteHauteur = 276;
    dofus->map.spriteDecor[FUMEE2].spriteX = 910;
    dofus->map.spriteDecor[FUMEE2].spriteY = 0;
    dofus->map.spriteDecor[FUMEE2].decalageXDecor = -30;
    dofus->map.spriteDecor[FUMEE2].decalageYDecor = -260;

    dofus->map.spriteDecor[FUMEE3].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE3].spriteLargeur = 135;
    dofus->map.spriteDecor[FUMEE3].spriteHauteur = 243;
    dofus->map.spriteDecor[FUMEE3].spriteX = 1036;
    dofus->map.spriteDecor[FUMEE3].spriteY = 0;
    dofus->map.spriteDecor[FUMEE3].decalageXDecor = -30;
    dofus->map.spriteDecor[FUMEE3].decalageYDecor = -220;

    dofus->map.spriteDecor[FUMEE4].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE4].spriteLargeur = 50;
    dofus->map.spriteDecor[FUMEE4].spriteHauteur = 93;
    dofus->map.spriteDecor[FUMEE4].spriteX = 1187;
    dofus->map.spriteDecor[FUMEE4].spriteY = 9;
    dofus->map.spriteDecor[FUMEE4].decalageXDecor = 15;
    dofus->map.spriteDecor[FUMEE4].decalageYDecor = -75;

    dofus->map.spriteDecor[FUMEE5].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE5].spriteLargeur = 100;
    dofus->map.spriteDecor[FUMEE5].spriteHauteur = 122;
    dofus->map.spriteDecor[FUMEE5].spriteX = 1267;
    dofus->map.spriteDecor[FUMEE5].spriteY = 0;
    dofus->map.spriteDecor[FUMEE5].decalageXDecor = -10;
    dofus->map.spriteDecor[FUMEE5].decalageYDecor = -95;

    dofus->map.spriteDecor[FUMEE6].image = &dofus->tabBitmap[SPRITE_DECOR];
    dofus->map.spriteDecor[FUMEE6].spriteLargeur = 200;
    dofus->map.spriteDecor[FUMEE6].spriteHauteur = 244;
    dofus->map.spriteDecor[FUMEE6].spriteX = 1367;
    dofus->map.spriteDecor[FUMEE6].spriteY = 0;
    dofus->map.spriteDecor[FUMEE6].decalageXDecor = -70;
    dofus->map.spriteDecor[FUMEE6].decalageYDecor = -220;

}

//ACTUALISATIONS POSITIONS

void actualiserPositionSourisJoueur(Dofus *dofus) {
    int beforeX, beforeY, afterX, afterY;

    beforeX = dofus->interactionExterieure.mouse.celluleIso.celluleX; //detecte le chmgt de cellule de la souris
    beforeY = dofus->interactionExterieure.mouse.celluleIso.celluleY;

    calculPositionSourisEnCelluleXY(dofus);

    calculPositionSourisEnCelluleIso(dofus);

    calculPositionSoursiEnOffsetDansUneCelluleXY(dofus);

    calculPositionSourisEnCelluleIsoReactualiseeGraceSpriteCheat(dofus);

    razOutOfMapBorders(dofus);

    afterX = dofus->interactionExterieure.mouse.celluleIso.celluleX; //detecte le chmgt de cellule de la souris
    afterY = dofus->interactionExterieure.mouse.celluleIso.celluleY;

    if (beforeX != afterX || beforeY != afterY) { //detecte le chmgt de cellule de la souris
        dofus->interactionExterieure.mouse.boolChangementDeCelluleIso = true;
    } else {
        dofus->interactionExterieure.mouse.boolChangementDeCelluleIso = false;
    }
}

void calculPositionSourisEnCelluleXY(Dofus *dofus) {
    dofus->interactionExterieure.mouse.celluleXY.celluleX =
            dofus->allegro.event.mouse.x / dofus->map.mapTile[0][0].spriteLargeur;
    dofus->interactionExterieure.mouse.celluleXY.celluleY =
            dofus->allegro.event.mouse.y / dofus->map.mapTile[0][0].spriteHauteur;

}

void razOutOfMapBorders(Dofus *dofus) {
    if (dofus->interactionExterieure.mouse.celluleIso.celluleX<0 ||
                                                               dofus->interactionExterieure.mouse.celluleIso.celluleX>(
            NBCELLULEX - 1)
        || dofus->interactionExterieure.mouse.celluleIso.celluleY<0
                                                                  ||
                                                                  dofus->interactionExterieure.mouse.celluleIso.celluleY>(
            NBCELLULEY - 1)) {
        dofus->interactionExterieure.mouse.celluleIso.celluleX = 0;
        dofus->interactionExterieure.mouse.celluleIso.celluleY = 0;
        dofus->interactionExterieure.mouse.outOfMapBorders = true;

    } else {
        dofus->interactionExterieure.mouse.outOfMapBorders = false;
    }
}

void calculPositionSourisEnCelluleIso(Dofus *dofus) {
    dofus->interactionExterieure.mouse.celluleIso.celluleX =
            (dofus->interactionExterieure.mouse.celluleXY.celluleY - dofus->map.Origine.celluleY)
            + (dofus->interactionExterieure.mouse.celluleXY.celluleX -
               dofus->map.Origine.celluleX);//celluleX sélectionée iso
    dofus->interactionExterieure.mouse.celluleIso.celluleY =
            (dofus->interactionExterieure.mouse.celluleXY.celluleY - dofus->map.Origine.celluleY)
            - (dofus->interactionExterieure.mouse.celluleXY.celluleX -
               dofus->map.Origine.celluleX);//celluleY sélectionée iso
}

void calculPositionSoursiEnOffsetDansUneCelluleXY(Dofus *dofus) {
    dofus->interactionExterieure.mouse.offsetCellule.x =
            dofus->allegro.event.mouse.x % dofus->map.mapTile[0][0].spriteLargeur;
    dofus->interactionExterieure.mouse.offsetCellule.y =
            dofus->allegro.event.mouse.y % dofus->map.mapTile[0][0].spriteHauteur;
}

void calculPositionSourisEnCelluleIsoReactualiseeGraceSpriteCheat(Dofus *dofus) {
    ALLEGRO_COLOR color = al_get_pixel(dofus->tabBitmap[SPRITE_MAP], dofus->interactionExterieure.mouse.offsetCellule.x,
                                       dofus->interactionExterieure.mouse.offsetCellule.y);


    if (color.r && !color.g && !color.b) {
        //... celule en -1 des X
        dofus->interactionExterieure.mouse.celluleIso.celluleX -= 1;
    } else if (!color.r && color.g && !color.b) {
        //.. cellule en +y
        dofus->interactionExterieure.mouse.celluleIso.celluleY += 1;
    } else if (color.r && color.g && !color.b) {
        //cellule en +x
        dofus->interactionExterieure.mouse.celluleIso.celluleX += 1;
    } else if (!color.r && !color.g && color.b) {
        //cellule  ej -y
        dofus->interactionExterieure.mouse.celluleIso.celluleY -= 1;
    }
}

int isometricCoordsToScreenX(Dofus *dofus) {
    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            if (dofus->interactionExterieure.mouse.celluleIso.celluleX == x &&
                dofus->interactionExterieure.mouse.celluleIso.celluleY == y) {
                return dofus->map.mapTile[y][x].coordsXY.screenX;
            }
        }
    }
}

int isometricCoordsToScreenY(Dofus *dofus) {
    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            if (dofus->interactionExterieure.mouse.celluleIso.celluleX == x &&
                dofus->interactionExterieure.mouse.celluleIso.celluleY == y) {
                return dofus->map.mapTile[y][x].coordsXY.screenY;
            }
        }
    }
}

void calculClicSurPersoPourTousChemin(Dofus *dofus) {
    if (!dofus->sortEnMain) {
        if (dofus->interactionExterieure.mouse.celluleIso.celluleX == dofus->joueurActif->celluleActuelle.celluleX &&
            dofus->interactionExterieure.mouse.celluleIso.celluleY == dofus->joueurActif->celluleActuelle.celluleY) {
            dofus->pages.pageJeu.boolClicCheminPerso = !dofus->pages.pageJeu.boolClicCheminPerso;
        } else {
            dofus->pages.pageJeu.boolClicCheminPerso = false;
        }
    }
}

//AFFICHAGE
void initKillFeed(Dofus *dofus) {
    dofus->pages.pageJeu.nbFeed = 1;
    dofus->pages.pageJeu.tabKillFeed[0].color = al_map_rgb(230, 20, 20);
}

void dessinerFondKillFeed(int i, Dofus *dofus) {
    al_draw_filled_rounded_rectangle(1050, 25 + 70 * i, 1050 + 200, 25 + 70 * i + 60, 10, 10,
                                     dofus->pages.pageJeu.tabKillFeed[i].color);
}

void dessinerLogoDroite(Dofus *dofus, int i) {
    if (dofus->joueurActif->ptrClasse == &dofus->classes[IOP]) {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].image),
                              dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteX,
                              dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteY,
                              dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteLargeur,
                              dofus->pages.pageJeu.spriteHUD[LOGO_IOP_STATIQUE].spriteHauteur, 1055, 35 + 70 * i, 0);
    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[FECA]) {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].image),
                              dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteX,
                              dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteY,
                              dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteLargeur,
                              dofus->pages.pageJeu.spriteHUD[LOGO_FECA_STATIQUE].spriteHauteur, 1055, 35 + 70 * i, 0);

    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[ECA]) {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].image),
                              dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteX,
                              dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteY,
                              dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteLargeur,
                              dofus->pages.pageJeu.spriteHUD[LOGO_ECA_STAT].spriteHauteur, 1055, 35 + 70 * i, 0);

    } else if (dofus->joueurActif->ptrClasse == &dofus->classes[OSA]) {
        al_draw_bitmap_region(*(dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].image),
                              dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteX,
                              dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteY,
                              dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteLargeur,
                              dofus->pages.pageJeu.spriteHUD[LOGO_OSA_STATIQUE].spriteHauteur, 1055, 35 + 70 * i, 0);
    }
}

void afficherKillFeed(Dofus *dofus) {
    initKillFeed(dofus);
    for (int i = 0; i < dofus->pages.pageJeu.nbFeed; i++) {
        dessinerFondKillFeed(i, dofus);
        dessinerLogoDroite(dofus, i);
    }
}

void afficherFondMap(Dofus *dofus) {

    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {

            al_draw_bitmap_region(*(dofus->map.spriteTile[dofus->map.mapTile[y][x].typeBloc].image),
                                  dofus->map.spriteTile[dofus->map.mapTile[y][x].typeBloc].spriteX,
                                  dofus->map.spriteTile[dofus->map.mapTile[y][x].typeBloc].spriteY,
                                  dofus->map.spriteTile[dofus->map.mapTile[y][x].typeBloc].spriteLargeur,
                                  dofus->map.spriteTile[dofus->map.mapTile[y][x].typeBloc].spriteHauteur,
                                  dofus->map.mapTile[y][x].coordsXY.screenX,
                                  dofus->map.mapTile[y][x].coordsXY.screenY,
                                  0);


        }
    }
}

void afficherDecor(Dofus *dofus) {

    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {

            if (dofus->map.mapTile[y][x].decor != 0 && dofus->map.mapTile[y][x].decor != 50) {
                al_draw_bitmap_region(*(dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].image),
                                      dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].spriteX,
                                      dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].spriteY,
                                      dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].spriteLargeur,
                                      dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].spriteHauteur,
                                      dofus->map.mapTile[y][x].coordsXY.screenX +
                                      dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].decalageXDecor,
                                      dofus->map.mapTile[y][x].coordsXY.screenY +
                                      dofus->map.spriteDecor[dofus->map.mapTile[y][x].decor].decalageYDecor,
                                      0);
            } else if(dofus->map.mapTile[y][x].decor == 50){
                al_draw_bitmap(dofus->tabBitmap[TOMBE],
                               dofus->map.mapTile[y - 1][x - 1].coordsXY.screenX,
                               dofus->map.mapTile[y - 1][x - 1].coordsXY.screenY, 0);
            }
        }
    }
}

void afficherBlocPleins(Dofus *dofus) {
    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            if (dofus->map.mapTile[y][x].blocPlein) {
                al_draw_textf(dofus->allegro.fonts[INTER_20PX], al_map_rgb(255, 255, 255),
                              dofus->map.mapTile[y][x].coordsXY.screenX, dofus->map.mapTile[y][x].coordsXY.screenY, 0,
                              "Bloc");
            }
        }
    }
}

void affichageHover(Dofus *dofus) {
    al_draw_bitmap(dofus->tabBitmap[HALO], dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenX, dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenY, 0);
    if (!dofus->interactionExterieure.mouse.outOfMapBorders) {
        int temp = valeurAbsolue(
                dofus->interactionExterieure.mouse.celluleIso.celluleY - dofus->joueurActif->celluleActuelle.celluleY) +
                   valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                                 dofus->joueurActif->celluleActuelle.celluleX);
        if (dofus->interactionExterieure.mouse.celluleIso.celluleX >= 0 &&
            dofus->interactionExterieure.mouse.celluleIso.celluleX < NBCELLULEX &&
            dofus->interactionExterieure.mouse.celluleIso.celluleY >= 0 &&
            dofus->interactionExterieure.mouse.celluleIso.celluleY < NBCELLULEY &&
            !dofus->interactionExterieure.mouse.outOfMapBorders) {
            if (dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein !=
                true && temp <= dofus->joueurActif->nbPmActuels) {
                al_draw_bitmap_region(*dofus->map.spriteTile[HOVER].image, dofus->map.spriteTile[HOVER].spriteX,
                                      dofus->map.spriteTile[HOVER].spriteY, dofus->map.spriteTile[HOVER].spriteLargeur,
                                      dofus->map.spriteTile[BASIC].spriteHauteur, isometricCoordsToScreenX(dofus),
                                      isometricCoordsToScreenY(dofus), 0);
            } else {
                al_draw_bitmap(dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN], isometricCoordsToScreenX(dofus),
                               isometricCoordsToScreenY(dofus), 0);
            }
        }
    }
}

void afficherContourTile(Dofus *dofus) {
    for (int y = 0; y < NBCELLULEY; y++) {
        for (int x = 0; x < NBCELLULEX; x++) {
            al_draw_bitmap_region(*dofus->map.spriteTile[CONTOUR].image, dofus->map.spriteTile[CONTOUR].spriteX,
                                  dofus->map.spriteTile[CONTOUR].spriteY, dofus->map.spriteTile[CONTOUR].spriteLargeur,
                                  dofus->map.spriteTile[CONTOUR].spriteHauteur,
                                  dofus->map.mapTile[y][x].coordsXY.screenX, dofus->map.mapTile[y][x].coordsXY.screenY,
                                  0);
        }
    }
}

void affichageTexteDebug(Dofus *dofus) {
    al_draw_textf(dofus->allegro.fonts[INTER_20PX], al_map_rgb(255, 255, 255), 0, 0, 0, "CellX : %d CellY : %d",
                  dofus->interactionExterieure.mouse.celluleIso.celluleX,
                  dofus->interactionExterieure.mouse.celluleIso.celluleY);
    if (dofus->interactionExterieure.mouse.outOfMapBorders) {
        al_draw_textf(dofus->allegro.fonts[INTER_20PX], al_map_rgb(255, 255, 255), 0, 20, 0, "OutOfBorders!");
    }
    if (dofus->interactionExterieure.mouse.boolChangementDeCelluleIso) {
        al_draw_textf(dofus->allegro.fonts[INTER_20PX], al_map_rgb(255, 255, 255), 0, 20, 0, "Chmgt Cell!");

    }
}

void afficherJoueurActif(Dofus *dofus) {
    /*al_draw_bitmap_region(*(dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                          dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenX +
                          10,
                          dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenY -
                          78, 0);*/

    Joueurs* temp = NULL;
    temp = dofus->joueurActif;
    float coefficientX = 0;
    float coefficientY = 0;

    switch (temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes - 1].orientation) {
        case HAUT:{
            coefficientX = 0.24f;
            coefficientY = -0.12f;
            break;
        }
        case BAS:{
            coefficientX = -0.24f;
            coefficientY = 0.12f;
            break;
        }
        case DROITE:{
            coefficientX = 0.24f;
            coefficientY = 0.12f;
            break;
        }
        case GAUCHE:{
            coefficientX = -0.24f;
            coefficientY = -0.12f;
            break;
        }

    }


    for (int j = 0; j < dofus->nbJoueursEnVie; j++) {
        if (!temp->joueurEnDeplacement && temp->mort == false) {
                if (temp->ptrClasse == &dofus->classes[IOP]) {
                    al_draw_bitmap_region(
                            *(dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                            dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                            dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                            dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                            dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                            10,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                            78, 0);
                } else if (temp->ptrClasse == &dofus->classes[FECA]) {
                    al_draw_bitmap_region(
                            *(dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                            dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                            dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                            dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                            dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                            10,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                            78, 0);
                } else if (temp->ptrClasse == &dofus->classes[ECA]) {
                    al_draw_bitmap_region(
                            *(dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                            dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                            dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                            dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                            dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                            10,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                            78, 0);

                } else if (temp->ptrClasse == &dofus->classes[OSA]) {
                    al_draw_bitmap_region(
                            *(dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                            dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                            dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                            dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                            dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenX +
                            10,
                            dofus->map.mapTile[temp->celluleActuelle.celluleY][temp->celluleActuelle.celluleX].coordsXY.screenY -
                            78, 0);
                }
            } else if (temp->joueurEnDeplacement) {
            if(dofus->interactionExterieure.compteurTimer == 1){
                al_play_sample(dofus->allegro.music[FOOTSTEPS],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
            }
            if (temp->ptrClasse == &dofus->classes[IOP]) {
                if (dofus->interactionExterieure.compteurTimer <= 10) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].image),
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].spriteX,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].spriteY,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].spriteLargeur,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS1].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 10 &&
                           dofus->interactionExterieure.compteurTimer <= 20) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].image),
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].spriteX,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].spriteY,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].spriteLargeur,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS2].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 20 &&
                           dofus->interactionExterieure.compteurTimer <= 30) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].image),
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].spriteX,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].spriteY,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].spriteLargeur,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS3].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 30 &&
                           dofus->interactionExterieure.compteurTimer <= 40) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].image),
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].spriteX,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].spriteY,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].spriteLargeur,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS4].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 40 &&
                           dofus->interactionExterieure.compteurTimer <= 50) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].image),
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].spriteX,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].spriteY,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].spriteLargeur,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS5].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 50 &&
                           dofus->interactionExterieure.compteurTimer <= 60) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].image),
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].spriteX,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].spriteY,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].spriteLargeur,
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[IOP][temp->orientation][POS6].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                }
            } else if (temp->ptrClasse == &dofus->classes[FECA]) {
                if (dofus->interactionExterieure.compteurTimer <= 10) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].image),
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].spriteX,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].spriteY,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].spriteLargeur,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS1].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 10 &&
                           dofus->interactionExterieure.compteurTimer <= 20) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].image),
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].spriteX,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].spriteY,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].spriteLargeur,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS2].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 20 &&
                           dofus->interactionExterieure.compteurTimer <= 30) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].image),
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].spriteX,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].spriteY,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].spriteLargeur,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS3].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 30 &&
                           dofus->interactionExterieure.compteurTimer <= 40) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].image),
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].spriteX,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].spriteY,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].spriteLargeur,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS4].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 40 &&
                           dofus->interactionExterieure.compteurTimer <= 50) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].image),
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].spriteX,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].spriteY,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].spriteLargeur,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS5].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 50 &&
                           dofus->interactionExterieure.compteurTimer <= 60) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].image),
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].spriteX,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].spriteY,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].spriteLargeur,
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[FECA][temp->orientation][POS6].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                }
            } else if (temp->ptrClasse == &dofus->classes[ECA]) {
                if (dofus->interactionExterieure.compteurTimer <= 10) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].image),
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].spriteX,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].spriteY,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].spriteLargeur,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS1].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 10 &&
                           dofus->interactionExterieure.compteurTimer <= 20) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].image),
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].spriteX,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].spriteY,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].spriteLargeur,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS2].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 20 &&
                           dofus->interactionExterieure.compteurTimer <= 30) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].image),
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].spriteX,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].spriteY,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].spriteLargeur,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS3].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 30 &&
                           dofus->interactionExterieure.compteurTimer <= 40) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].image),
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].spriteX,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].spriteY,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].spriteLargeur,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS4].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 40 &&
                           dofus->interactionExterieure.compteurTimer <= 50) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].image),
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].spriteX,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].spriteY,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].spriteLargeur,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS5].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 50 &&
                           dofus->interactionExterieure.compteurTimer <= 60) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].image),
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].spriteX,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].spriteY,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].spriteLargeur,
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[ECA][temp->orientation][POS6].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                }

            } else if (temp->ptrClasse == &dofus->classes[OSA]) {
                if (dofus->interactionExterieure.compteurTimer <= 10) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].image),
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].spriteX,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].spriteY,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].spriteLargeur,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS1].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 10 &&
                           dofus->interactionExterieure.compteurTimer <= 20) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].image),
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].spriteX,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].spriteY,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].spriteLargeur,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS2].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 20 &&
                           dofus->interactionExterieure.compteurTimer <= 30) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].image),
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].spriteX,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].spriteY,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].spriteLargeur,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS3].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 30 &&
                           dofus->interactionExterieure.compteurTimer <= 40) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].image),
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].spriteX,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].spriteY,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].spriteLargeur,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].decalageXDecor + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS4].decalageYDecor + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 40 &&
                           dofus->interactionExterieure.compteurTimer <= 50) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].image),
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].spriteX,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].spriteY,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].spriteLargeur,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS5].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                } else if (dofus->interactionExterieure.compteurTimer > 50 &&
                           dofus->interactionExterieure.compteurTimer <= 60) {
                    al_draw_bitmap_region(
                            *(dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].image),
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].spriteX,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].spriteY,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].spriteLargeur,
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].spriteHauteur,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenX +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].decalageXDecor  + dofus->interactionExterieure.compteurTimer * coefficientX,
                            dofus->map.mapTile[temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleY][temp->tabCheminCellules[dofus->interactionExterieure.nbSecondes].celluleX].coordsXY.screenY +
                            dofus->classes->animationMvmnt[OSA][temp->orientation][POS6].decalageYDecor  + dofus->interactionExterieure.compteurTimer * coefficientY, 0);
                }
            }
        }


            temp = temp->next;//permet de parcourir LSCC sans modifier joueurActif


        }
    }


/* for (;dofus->joueurActif != dofus->joueur; dofus->joueurActif = dofus->joueurActif->next) {
     al_draw_bitmap_region(*(dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image),
                           dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                           dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                           dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                           dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                           dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenX +
                           10,
                           dofus->map.mapTile[dofus->joueurActif->celluleActuelle.celluleY][dofus->joueurActif->celluleActuelle.celluleX].coordsXY.screenY -
                           78, 0);
 }*/


void dessinerTousCheminsClicSurPerso(Dofus *dofus) {
    if (!dofus->sortEnMain) {
        if (dofus->pages.pageJeu.boolClicCheminPerso) {
            for (int y = 0; y < NBCELLULEY; y++) {
                for (int x = 0; x < NBCELLULEX; x++) {
                    if (dofus->map.mapTile[y][x].blocPlein != true) {
                        if ((dofus->joueurActif->next->celluleActuelle.celluleX !=
                             dofus->map.mapTile[y][x].coordsIso.celluleX ||
                             dofus->joueurActif->next->celluleActuelle.celluleY !=
                             dofus->map.mapTile[y][x].coordsIso.celluleY) &&
                            (dofus->joueurActif->next->next->celluleActuelle.celluleX !=
                             dofus->map.mapTile[y][x].coordsIso.celluleX ||
                             dofus->joueurActif->next->next->celluleActuelle.celluleY !=
                             dofus->map.mapTile[y][x].coordsIso.celluleY) &&
                            (dofus->joueurActif->next->next->next->celluleActuelle.celluleX !=
                             dofus->map.mapTile[y][x].coordsIso.celluleX ||
                             dofus->joueurActif->next->next->next->celluleActuelle.celluleY !=
                             dofus->map.mapTile[y][x].coordsIso.celluleY)) {
                            if (1 <=
                                (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - x) +
                                 valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - y)) &&
                                dofus->joueurActif->nbPmActuels >=
                                (valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleX - x) +
                                 valeurAbsolue(dofus->joueurActif->celluleActuelle.celluleY - y))) {
                                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN], dofus->map.mapTile[y][x].coordsXY.screenX,
                                               dofus->map.mapTile[y][x].coordsXY.screenY, 0);
                            }
                        }
                    }
                }
            }
        }
    }
}


void dessinerCheminLorsDeplacementSouris(Dofus *dofus) {
    if (!dofus->sortEnMain) {
        if (!dofus->interactionExterieure.mouse.boolCliqueDeplacement &&
            (dofus->interactionExterieure.mouse.celluleIso.celluleX != dofus->joueurActif->celluleActuelle.celluleX) ||
            (dofus->interactionExterieure.mouse.celluleIso.celluleY != dofus->joueurActif->celluleActuelle.celluleY)) {
            for (int i = 0; i < dofus->joueurActif->nbDeplacementDansLeTour; i++) {
                al_draw_bitmap(dofus->tabBitmap[TILE_CHEMIN],
                               dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[i].celluleY][dofus->joueurActif->tabCheminCellules[i].celluleX].coordsXY.screenX,
                               dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[i].celluleY][dofus->joueurActif->tabCheminCellules[i].celluleX].coordsXY.screenY,
                               0);
            }
        }
    }
}

void affichageGeneral(Dofus *dofus) {
    al_clear_to_color(BLANC);
    al_draw_bitmap(dofus->tabBitmap[LAVA_BG], 0, 0, 0);
    afficherFondMap(dofus);
    afficherContourTile(dofus);
    dessinerTousCheminsClicSurPerso(dofus);
    dessinerCheminLorsDeplacementSouris(dofus);
    affichageHover(dofus);
    afficherDecor(dofus);
    affichageTexteDebug(dofus);
    affichageGeneralHUD(dofus);
    //afficherBlocPleins(dofus);
    afficherJoueurActif(dofus);
    afficherKillFeed(dofus);
    al_flip_display();
}



//BOUCLES



void calculDeplacementPMsurXetYAvecTabChemin(Dofus *dofus) {
    dofus->joueurActif->nbDeplacementDansLeTour = 0;
    bool conditionSurY = false;
    bool conditionSurX = false;
    bool conditionObstacle = false;
    bool conditionJoueur = false;
    if (dofus->sortEnMain != true && !dofus->joueurActif->joueurEnDeplacement && !dofus->interactionExterieure.mouse.boolCliqueDeplacement) {
        if ((dofus->joueurActif->celluleActuelle.celluleX !=
             dofus->interactionExterieure.mouse.celluleIso.celluleX ||
             dofus->joueurActif->celluleActuelle.celluleY !=
             dofus->interactionExterieure.mouse.celluleIso.celluleY) &&
             (dofus->joueurActif->next->celluleActuelle.celluleX !=
             dofus->interactionExterieure.mouse.celluleIso.celluleX ||
             dofus->joueurActif->next->celluleActuelle.celluleY !=
             dofus->interactionExterieure.mouse.celluleIso.celluleY) &&
            (dofus->joueurActif->next->next->celluleActuelle.celluleX !=
             dofus->interactionExterieure.mouse.celluleIso.celluleX ||
             dofus->joueurActif->next->next->celluleActuelle.celluleY !=
             dofus->interactionExterieure.mouse.celluleIso.celluleY) &&
            (dofus->joueurActif->next->next->next->celluleActuelle.celluleX !=
             dofus->interactionExterieure.mouse.celluleIso.celluleX ||
             dofus->joueurActif->next->next->next->celluleActuelle.celluleY !=
             dofus->interactionExterieure.mouse.celluleIso.celluleY)) {
            if (!dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein) {
                if (valeurAbsolue(
                        dofus->interactionExterieure.mouse.celluleIso.celluleX -
                        dofus->joueurActif->celluleActuelle.celluleX) <
                    valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY -
                                  dofus->joueurActif->celluleActuelle.celluleY)) {
                    conditionSurY = true;
                }

                if ((((dofus->interactionExterieure.mouse.celluleIso.celluleY >
                       dofus->joueurActif->celluleActuelle.celluleY) &&
                      dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY -
                                         2][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1 &&
                      (dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                       dofus->joueurActif->celluleActuelle.celluleX) && (valeurAbsolue(
                        dofus->joueurActif->celluleActuelle.celluleY -
                        dofus->interactionExterieure.mouse.celluleIso.celluleY) != 1)) ||
                     (dofus->interactionExterieure.mouse.celluleIso.celluleY <
                      dofus->joueurActif->celluleActuelle.celluleY &&
                      dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY +
                                         2][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1 &&
                      (dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                       dofus->joueurActif->celluleActuelle.celluleX) && (dofus->joueurActif->celluleActuelle.celluleY -
                                                                         dofus->interactionExterieure.mouse.celluleIso.celluleY !=
                                                                         1)) ||
                     (dofus->interactionExterieure.mouse.celluleIso.celluleX >
                      dofus->joueurActif->celluleActuelle.celluleX &&
                      dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][
                              dofus->interactionExterieure.mouse.celluleIso.celluleX - 2].blocPlein == 1 &&
                      (dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                       dofus->joueurActif->celluleActuelle.celluleY) && (valeurAbsolue(
                             dofus->joueurActif->celluleActuelle.celluleX -
                             dofus->interactionExterieure.mouse.celluleIso.celluleX) != 1)) ||
                     (dofus->interactionExterieure.mouse.celluleIso.celluleX <
                      dofus->joueurActif->celluleActuelle.celluleX &&
                      dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][
                              dofus->interactionExterieure.mouse.celluleIso.celluleX + 2].blocPlein == 1 &&
                      (dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                       dofus->joueurActif->celluleActuelle.celluleY) && (valeurAbsolue(
                             dofus->joueurActif->celluleActuelle.celluleX -
                             dofus->interactionExterieure.mouse.celluleIso.celluleX) != 1)))
                    || ((dofus->interactionExterieure.mouse.celluleIso.celluleY >
                         dofus->joueurActif->celluleActuelle.celluleY) &&
                        dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY -
                                           1][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1 &&
                        (dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                         dofus->joueurActif->celluleActuelle.celluleX)) ||
                    (dofus->interactionExterieure.mouse.celluleIso.celluleY <
                     dofus->joueurActif->celluleActuelle.celluleY &&
                     dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY +
                                        1][dofus->interactionExterieure.mouse.celluleIso.celluleX].blocPlein == 1 &&
                     (dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                      dofus->joueurActif->celluleActuelle.celluleX)) ||
                    (dofus->interactionExterieure.mouse.celluleIso.celluleX >
                     dofus->joueurActif->celluleActuelle.celluleX &&
                     dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][
                             dofus->interactionExterieure.mouse.celluleIso.celluleX - 1].blocPlein == 1 &&
                     (dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                      dofus->joueurActif->celluleActuelle.celluleY)) ||
                    (dofus->interactionExterieure.mouse.celluleIso.celluleX <
                     dofus->joueurActif->celluleActuelle.celluleX &&
                     dofus->map.mapTile[dofus->interactionExterieure.mouse.celluleIso.celluleY][
                             dofus->interactionExterieure.mouse.celluleIso.celluleX + 1].blocPlein == 1 &&
                     (dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                      dofus->joueurActif->celluleActuelle.celluleY)) &&
                    (dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                     dofus->joueurActif->celluleActuelle.celluleX ||
                     dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                     dofus->joueurActif->celluleActuelle.celluleY)) {
                    conditionObstacle = true;
                }

                if (true) {
                    if (dofus->interactionExterieure.mouse.celluleIso.celluleY >
                        dofus->joueurActif->celluleActuelle.celluleY) {
                        if ((dofus->interactionExterieure.mouse.celluleIso.celluleY - 1 ==
                             dofus->joueurActif->next->celluleActuelle.celluleY &&
                             dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                             dofus->joueurActif->next->celluleActuelle.celluleX
                             && (dofus->joueurActif->celluleActuelle.celluleY + 1
                                 == dofus->joueurActif->next->celluleActuelle.celluleY
                                 || dofus->joueurActif->celluleActuelle.celluleY + 2
                                    == dofus->joueurActif->next->celluleActuelle.celluleY))
                            || (dofus->interactionExterieure.mouse.celluleIso.celluleY - 2 ==
                                dofus->joueurActif->next->celluleActuelle.celluleY &&
                                dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                                dofus->joueurActif->next->celluleActuelle.celluleX &&
                                (dofus->joueurActif->celluleActuelle.celluleY + 1
                                 == dofus->joueurActif->next->celluleActuelle.celluleY
                                 || dofus->joueurActif->celluleActuelle.celluleY + 2
                                 == dofus->joueurActif->next->celluleActuelle.celluleY))) {
                            conditionJoueur = true;
                        }
                    }

                    if (dofus->interactionExterieure.mouse.celluleIso.celluleY <
                        dofus->joueurActif->celluleActuelle.celluleY) {
                        if ((dofus->interactionExterieure.mouse.celluleIso.celluleY + 1 ==
                             dofus->joueurActif->next->celluleActuelle.celluleY &&
                             dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                             dofus->joueurActif->next->celluleActuelle.celluleX
                             && (dofus->joueurActif->celluleActuelle.celluleY - 1
                                 == dofus->joueurActif->next->celluleActuelle.celluleY
                                 || dofus->joueurActif->celluleActuelle.celluleY - 2
                                    == dofus->joueurActif->next->celluleActuelle.celluleY))
                            || (dofus->interactionExterieure.mouse.celluleIso.celluleY + 2 ==
                                dofus->joueurActif->next->celluleActuelle.celluleY &&
                                dofus->interactionExterieure.mouse.celluleIso.celluleX ==
                                dofus->joueurActif->next->celluleActuelle.celluleX) &&
                               (dofus->joueurActif->celluleActuelle.celluleY - 1
                                == dofus->joueurActif->next->celluleActuelle.celluleY
                                || dofus->joueurActif->celluleActuelle.celluleY - 2
                                   == dofus->joueurActif->next->celluleActuelle.celluleY)) {
                            conditionJoueur = true;
                        }
                    }

                    if (dofus->interactionExterieure.mouse.celluleIso.celluleX >
                        dofus->joueurActif->celluleActuelle.celluleX) {
                        if ((dofus->interactionExterieure.mouse.celluleIso.celluleX - 1 ==
                             dofus->joueurActif->next->celluleActuelle.celluleX &&
                             dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                             dofus->joueurActif->next->celluleActuelle.celluleY &&
                                (dofus->joueurActif->celluleActuelle.celluleX + 1
                                 == dofus->joueurActif->next->celluleActuelle.celluleX
                                 || dofus->joueurActif->celluleActuelle.celluleX + 2
                                    == dofus->joueurActif->next->celluleActuelle.celluleX))
                            || (dofus->interactionExterieure.mouse.celluleIso.celluleX - 2 ==
                                dofus->joueurActif->next->celluleActuelle.celluleX &&
                                dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                                dofus->joueurActif->next->celluleActuelle.celluleY)
                                && (dofus->joueurActif->celluleActuelle.celluleX + 1
                                    == dofus->joueurActif->next->celluleActuelle.celluleX
                                    || dofus->joueurActif->celluleActuelle.celluleX + 2
                                       == dofus->joueurActif->next->celluleActuelle.celluleX)) {
                            conditionJoueur = true;
                        }
                    }

                    if (dofus->interactionExterieure.mouse.celluleIso.celluleX <
                        dofus->joueurActif->celluleActuelle.celluleX) {
                        if ((dofus->interactionExterieure.mouse.celluleIso.celluleX + 1 ==
                             dofus->joueurActif->next->celluleActuelle.celluleX &&
                             dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                             dofus->joueurActif->next->celluleActuelle.celluleY
                             && (dofus->joueurActif->celluleActuelle.celluleX - 1
                                 == dofus->joueurActif->next->celluleActuelle.celluleX
                                 || dofus->joueurActif->celluleActuelle.celluleX - 2
                                    == dofus->joueurActif->next->celluleActuelle.celluleX))
                            || (dofus->interactionExterieure.mouse.celluleIso.celluleX + 2 ==
                                dofus->joueurActif->next->celluleActuelle.celluleX &&
                                dofus->interactionExterieure.mouse.celluleIso.celluleY ==
                                dofus->joueurActif->next->celluleActuelle.celluleY) &&
                               (dofus->joueurActif->celluleActuelle.celluleX - 1
                                == dofus->joueurActif->next->celluleActuelle.celluleX
                                || dofus->joueurActif->celluleActuelle.celluleX - 2
                                   == dofus->joueurActif->next->celluleActuelle.celluleX)) {
                            conditionJoueur = true;
                        }
                    }
                }


                if (valeurAbsolue(
                        dofus->interactionExterieure.mouse.celluleIso.celluleX -
                        dofus->joueurActif->celluleActuelle.celluleX) >=
                    valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleY -
                                  dofus->joueurActif->celluleActuelle.celluleY)) {
                    conditionSurX = true;
                }
                int temp = valeurAbsolue(
                        dofus->interactionExterieure.mouse.celluleIso.celluleY -
                        dofus->joueurActif->celluleActuelle.celluleY) +
                           valeurAbsolue(dofus->interactionExterieure.mouse.celluleIso.celluleX -
                                         dofus->joueurActif->celluleActuelle.celluleX);
                if (!conditionObstacle && !conditionJoueur) {
                    if (temp <= dofus->joueurActif->nbPmActuels) {
                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->celluleActuelle.celluleX;
                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->celluleActuelle.celluleY;

                        for (int i = 0; i < temp; i++) {

                            if (conditionSurY) {
                                if (!dofus->map.mapTile[
                                        dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour -
                                                1].celluleY +
                                        1][dofus->joueurActif->tabCheminCellules[
                                        dofus->joueurActif->nbDeplacementDansLeTour -
                                        1].celluleX].blocPlein &&
                                    dofus->interactionExterieure.mouse.celluleIso.celluleY >
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                          1].celluleY) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY + 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
                                        dofus->joueurActif->orientation = BAS;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = BAS;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY += 1;
                                        dofus->joueurActif->orientation = BAS;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = BAS;

                                    }
                                } else if (!dofus->map.mapTile[
                                        dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour -
                                                1].celluleY - 1]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX].blocPlein &&
                                           dofus->interactionExterieure.mouse.celluleIso.celluleY <
                                           dofus->joueurActif->tabCheminCellules[
                                                   dofus->joueurActif->nbDeplacementDansLeTour -
                                                   1].celluleY) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY - 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
                                        dofus->joueurActif->orientation = HAUT;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = HAUT;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY -= 1;
                                        dofus->joueurActif->orientation = HAUT;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = HAUT;
                                    }
                                } else if (!dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[
                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX + 1].blocPlein &&
                                           dofus->interactionExterieure.mouse.celluleIso.celluleX >
                                           dofus->joueurActif->tabCheminCellules[
                                                   dofus->joueurActif->nbDeplacementDansLeTour -
                                                   1].celluleX) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX + 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
                                        dofus->joueurActif->orientation = DROITE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = DROITE;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX += 1;
                                        dofus->joueurActif->orientation = DROITE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = DROITE;

                                    }
                                } else if (!dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[
                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX - 1].blocPlein &&
                                           dofus->interactionExterieure.mouse.celluleIso.celluleX <
                                           dofus->joueurActif->tabCheminCellules[
                                                   dofus->joueurActif->nbDeplacementDansLeTour -
                                                   1].celluleX) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX - 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
                                        dofus->joueurActif->orientation = GAUCHE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = GAUCHE;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX -= 1;
                                        dofus->joueurActif->orientation = GAUCHE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = GAUCHE;
                                    }
                                }
                            } else if (conditionSurX) {
                                if (!dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[
                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX - 1].blocPlein &&
                                    dofus->interactionExterieure.mouse.celluleIso.celluleX <
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                          1].celluleX) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX - 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
                                        dofus->joueurActif->orientation = GAUCHE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = GAUCHE;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX -= 1;
                                        dofus->joueurActif->orientation = GAUCHE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = GAUCHE;
                                    }
                                } else if (!dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[
                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX + 1].blocPlein &&
                                           dofus->interactionExterieure.mouse.celluleIso.celluleX >
                                           dofus->joueurActif->tabCheminCellules[
                                                   dofus->joueurActif->nbDeplacementDansLeTour -
                                                   1].celluleX) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX + 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
                                        dofus->joueurActif->orientation = DROITE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = DROITE;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX += 1;
                                        dofus->joueurActif->orientation = DROITE;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = DROITE;
                                    }
                                } else if (!dofus->map.mapTile[
                                        dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour -
                                                1].celluleY + 1]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX].blocPlein &&
                                           dofus->interactionExterieure.mouse.celluleIso.celluleY >
                                           dofus->joueurActif->tabCheminCellules[
                                                   dofus->joueurActif->nbDeplacementDansLeTour -
                                                   1].celluleY) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY + 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
                                        dofus->joueurActif->orientation = BAS;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = BAS;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY += 1;
                                        dofus->joueurActif->orientation = BAS;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = BAS;
                                    }
                                } else if (!dofus->map.mapTile[
                                        dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour -
                                                1].celluleY - 1]
                                [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                       1].celluleX].blocPlein &&
                                           dofus->interactionExterieure.mouse.celluleIso.celluleY <
                                           dofus->joueurActif->tabCheminCellules[
                                                   dofus->joueurActif->nbDeplacementDansLeTour -
                                                   1].celluleY) {
                                    if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY =
                                                dofus->joueurActif->tabCheminCellules[
                                                        dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY - 1;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->tabCheminCellules[
                                                dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
                                        dofus->joueurActif->orientation = HAUT;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = HAUT;
                                    } else {
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY -= 1;
                                        dofus->joueurActif->orientation = HAUT;
                                        dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = HAUT;
                                    }
                                }
                            } else if (!dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[
                                    dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY]
                            [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                   1].celluleX +
                             1].blocPlein &&
                                       dofus->interactionExterieure.mouse.celluleIso.celluleX >
                                       dofus->joueurActif->tabCheminCellules[
                                               dofus->joueurActif->nbDeplacementDansLeTour -
                                               1].celluleX) {
                                if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX =
                                            dofus->joueurActif->tabCheminCellules[
                                                    dofus->joueurActif->nbDeplacementDansLeTour -
                                                    1].celluleX + 1;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->tabCheminCellules[
                                            dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
                                    dofus->joueurActif->orientation = DROITE;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = DROITE;
                                } else {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX += 1;
                                    dofus->joueurActif->orientation = DROITE;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = DROITE;
                                }
                            } else if (!dofus->map.mapTile[dofus->joueurActif->tabCheminCellules[
                                    dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY]
                            [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                   1].celluleX -
                             1].blocPlein &&
                                       dofus->interactionExterieure.mouse.celluleIso.celluleX <
                                       dofus->joueurActif->tabCheminCellules[
                                               dofus->joueurActif->nbDeplacementDansLeTour -
                                               1].celluleX) {
                                if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX =
                                            dofus->joueurActif->tabCheminCellules[
                                                    dofus->joueurActif->nbDeplacementDansLeTour -
                                                    1].celluleX - 1;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY = dofus->joueurActif->tabCheminCellules[
                                            dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleY;
                                    dofus->joueurActif->orientation = GAUCHE;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = GAUCHE;
                                } else {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX -= 1;
                                    dofus->joueurActif->orientation = GAUCHE;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = GAUCHE;
                                }
                            } else if (!dofus->map.mapTile[
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                          1].celluleY + 1]
                            [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                   1].celluleX].blocPlein &&
                                       dofus->interactionExterieure.mouse.celluleIso.celluleY >
                                       dofus->joueurActif->tabCheminCellules[
                                               dofus->joueurActif->nbDeplacementDansLeTour -
                                               1].celluleY) {
                                if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY =
                                            dofus->joueurActif->tabCheminCellules[
                                                    dofus->joueurActif->nbDeplacementDansLeTour -
                                                    1].celluleY + 1;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->tabCheminCellules[
                                            dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
                                    dofus->joueurActif->orientation = BAS;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = BAS;
                                } else {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY += 1;
                                    dofus->joueurActif->orientation = BAS;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = BAS;
                                }
                            } else if (!dofus->map.mapTile[
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                          1].celluleY - 1]
                            [dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour -
                                                                   1].celluleX].blocPlein &&
                                       dofus->interactionExterieure.mouse.celluleIso.celluleY <
                                       dofus->joueurActif->tabCheminCellules[
                                               dofus->joueurActif->nbDeplacementDansLeTour -
                                               1].celluleY) {
                                if (dofus->joueurActif->nbDeplacementDansLeTour != 0) {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY =
                                            dofus->joueurActif->tabCheminCellules[
                                                    dofus->joueurActif->nbDeplacementDansLeTour -
                                                    1].celluleY - 1;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleX = dofus->joueurActif->tabCheminCellules[
                                            dofus->joueurActif->nbDeplacementDansLeTour - 1].celluleX;
                                    dofus->joueurActif->orientation = HAUT;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour - 1].orientation = HAUT;
                                } else {
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].celluleY -= 1;
                                    dofus->joueurActif->orientation = HAUT;
                                    dofus->joueurActif->tabCheminCellules[dofus->joueurActif->nbDeplacementDansLeTour].orientation = HAUT;
                                }
                            }
                            dofus->joueurActif->nbDeplacementDansLeTour++;
                        }
                    }
                }
            }
        }
    }
}

int valeurAbsolue(int a) {
    if (a < 0) a = -a;
    return a;
}

void boucleTest(Dofus *dofus) {

    dofus->pages.pageJeu.boolPageJeu = false;

    initalisationDataMap(dofus);

    affichageGeneral(dofus);

    while (!dofus->pages.pageJeu.boolPageJeu) {

        if (dofus->interactionExterieure.mouse.boolCliqueDeplacement) {
            actualisationCoordsIsoJoueurLorsDuClicChemin(dofus);
        }

        if (dofus->interactionExterieure.mouse.boolChangementDeCelluleIso) {
            calculDeplacementPMsurXetYAvecTabChemin(dofus);
        }

        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);

        if (dofus->allegro.event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            dofus->pages.pageJeu.boolPageJeu = true;
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_AXES) {
            dofus->allegro.coordonneesSourisX = dofus->allegro.event.mouse.x;
            dofus->allegro.coordonneesSourisY = dofus->allegro.event.mouse.y;
            actualiserPositionSourisJoueur(dofus);
            dofus->dessin = true;
            calculHoverLogos(dofus);
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN) {
            dofus->allegro.etatBoutonSouris = dofus->allegro.event.mouse.button;
            calculClicLogo(dofus);
            dofus->dessin = true;
            for (int i = 0; i < dofus->joueurActif->nbDeplacementDansLeTour; i++) {
                printf("%d : (%d,%d)\n", i, dofus->joueurActif->tabCheminCellules[i].celluleX,
                       dofus->joueurActif->tabCheminCellules[i].celluleY);

            }
            if (dofus->allegro.event.mouse.button == 1) {

                dofus->interactionExterieure.mouse.boolCliqueDeplacement = true;

                calculClicSurPersoPourTousChemin(dofus);
            }
        }
        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
            dofus->allegro.etatBoutonSouris = dofus->allegro.event.mouse.button;
            if (dofus->pages.pageJeu.logoTerminerTourClic) {
                dofus->joueurActif = dofus->joueurActif->next;//à changer d'endroit
                dofus->pages.pageJeu.logoTerminerTourClic = false;
            }
            dofus->dessin = true;
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_TIMER) {
            if (dofus->dessin) {
                affichageGeneral(dofus);
                dofus->dessin = false;
            }
        }
    }
}

/* void bouclePlacementLibre(Dofus* dofus){
    //dofus->nbJoueurs = 2;
    dofus->pages.pageLancerPartie.boolPageLancerPartie = false;

    initalisationDataMap(dofus);
    affichageGeneral(dofus);


    while (dofus->joueur->next == dofus->joueur || dofus->pages.pageLancerPartie.boolPageLancerPartie != 0 ){
        if (dofus->interactionExterieure.mouse.boolCliqueDeplacement) {
            actualisationCoordsDeplacementDuJoueurTeleportation(dofus);
        }
        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);

        if (dofus->allegro.event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            dofus->pages.pageJeu.boolPageJeu = true;
        }
        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_AXES) {
            dofus->allegro.coordonneesSourisX = dofus->allegro.event.mouse.x;
            dofus->allegro.coordonneesSourisY = dofus->allegro.event.mouse.y;
            actualiserPositionSourisJoueur(dofus);
            dofus->dessin = true;
            calculHoverLogos(dofus);
        }
        if (dofus->allegro.event.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
            dofus->allegro.etatBoutonSouris = dofus->allegro.event.mouse.button;
            if(dofus->pages.pageJeu.logoTerminerTourClic){
                dofus->joueurActif = dofus->joueurActif->next;//à changer d'endroit
                dofus->pages.pageJeu.logoTerminerTourClic = false;
            }
            dofus->dessin = true;
        }

        if (dofus->allegro.event.type == ALLEGRO_EVENT_TIMER) {
            if (dofus->dessin) {
                affichageGeneral(dofus);
                dofus->dessin = false;
            }
        }
        for (dofus->joueurActif; dofus->joueurActif->next == dofus->joueur ; dofus->joueur->next) {
            placementLibreDebutGame(dofus);
        }
    }
}*/



