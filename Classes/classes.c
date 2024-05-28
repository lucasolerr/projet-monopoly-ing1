#include "classes.h"
#include "../Pages/SelectionNombreJoueur/selectionNombreJoueur.h"
#include "../Pages/SelectionClasse/selectionClasse.h"
#include "../Pages/ChoixNom/choixNom.h"

//BOUCLE TEST PL A SUPPRIMER

void affichageGeneralPL(Dofus* dofus){
    al_clear_to_color(BLANC);

    choixNomJoueur(dofus);
    //printf("%s", dofus->joueurActif->strNomJoueur);

    //dessinerEtChoisirNombreJoueurs(dofus);
    //dessinerEtChoisirClasseJoueurs(dofus);

    //testDessinerTousJoueursEnJeu(dofus);
    al_flip_display();
}

void initBitmapSpriteAnimMvmnt(Dofus* dofus){

    //IOPPPPPPP FAIT

    dofus->classes->animationMvmnt[IOP][DROITE][POS1].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][DROITE][POS1].spriteX = 43;
    dofus->classes->animationMvmnt[IOP][DROITE][POS1].spriteY = 147;
    dofus->classes->animationMvmnt[IOP][DROITE][POS1].spriteHauteur = 97;
    dofus->classes->animationMvmnt[IOP][DROITE][POS1].spriteLargeur = 68;
    dofus->classes->animationMvmnt[IOP][DROITE][POS1].decalageXDecor = 10;
    dofus->classes->animationMvmnt[IOP][DROITE][POS1].decalageYDecor = -60;

    dofus->classes->animationMvmnt[IOP][DROITE][POS2].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][DROITE][POS2].spriteX = 175;
    dofus->classes->animationMvmnt[IOP][DROITE][POS2].spriteY = 151;
    dofus->classes->animationMvmnt[IOP][DROITE][POS2].spriteHauteur = 97;
    dofus->classes->animationMvmnt[IOP][DROITE][POS2].spriteLargeur = 71;
    dofus->classes->animationMvmnt[IOP][DROITE][POS2].decalageXDecor = 10;
    dofus->classes->animationMvmnt[IOP][DROITE][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[IOP][DROITE][POS3].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][DROITE][POS3].spriteX = 316;
    dofus->classes->animationMvmnt[IOP][DROITE][POS3].spriteY = 156;
    dofus->classes->animationMvmnt[IOP][DROITE][POS3].spriteHauteur = 97;
    dofus->classes->animationMvmnt[IOP][DROITE][POS3].spriteLargeur = 61;
    dofus->classes->animationMvmnt[IOP][DROITE][POS3].decalageXDecor = 20;
    dofus->classes->animationMvmnt[IOP][DROITE][POS3].decalageYDecor = -63;

    dofus->classes->animationMvmnt[IOP][DROITE][POS4].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][DROITE][POS4].spriteX = 447;
    dofus->classes->animationMvmnt[IOP][DROITE][POS4].spriteY = 152;
    dofus->classes->animationMvmnt[IOP][DROITE][POS4].spriteHauteur = 99;
    dofus->classes->animationMvmnt[IOP][DROITE][POS4].spriteLargeur = 63;
    dofus->classes->animationMvmnt[IOP][DROITE][POS4].decalageXDecor = 20;
    dofus->classes->animationMvmnt[IOP][DROITE][POS4].decalageYDecor = -63;

    dofus->classes->animationMvmnt[IOP][DROITE][POS5].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][DROITE][POS5].spriteX = 576;
    dofus->classes->animationMvmnt[IOP][DROITE][POS5].spriteY = 146;
    dofus->classes->animationMvmnt[IOP][DROITE][POS5].spriteHauteur = 89;
    dofus->classes->animationMvmnt[IOP][DROITE][POS5].spriteLargeur = 78;
    dofus->classes->animationMvmnt[IOP][DROITE][POS5].decalageXDecor = 0;
    dofus->classes->animationMvmnt[IOP][DROITE][POS5].decalageYDecor = -60;

    dofus->classes->animationMvmnt[IOP][DROITE][POS6].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][DROITE][POS6].spriteX = 716;
    dofus->classes->animationMvmnt[IOP][DROITE][POS6].spriteY = 152;
    dofus->classes->animationMvmnt[IOP][DROITE][POS6].spriteHauteur = 91;
    dofus->classes->animationMvmnt[IOP][DROITE][POS6].spriteLargeur = 78;
    dofus->classes->animationMvmnt[IOP][DROITE][POS6].decalageXDecor = 8;
    dofus->classes->animationMvmnt[IOP][DROITE][POS6].decalageYDecor = -60;

    dofus->classes->animationMvmnt[IOP][BAS][POS1].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][BAS][POS1].spriteX = 24;
    dofus->classes->animationMvmnt[IOP][BAS][POS1].spriteY = 416;
    dofus->classes->animationMvmnt[IOP][BAS][POS1].spriteHauteur = 97;
    dofus->classes->animationMvmnt[IOP][BAS][POS1].spriteLargeur = 69;
    dofus->classes->animationMvmnt[IOP][BAS][POS1].decalageXDecor = 0;
    dofus->classes->animationMvmnt[IOP][BAS][POS1].decalageYDecor = -65;

    dofus->classes->animationMvmnt[IOP][BAS][POS2].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][BAS][POS2].spriteX = 161;
    dofus->classes->animationMvmnt[IOP][BAS][POS2].spriteY = 415;
    dofus->classes->animationMvmnt[IOP][BAS][POS2].spriteHauteur = 97;
    dofus->classes->animationMvmnt[IOP][BAS][POS2].spriteLargeur = 69;
    dofus->classes->animationMvmnt[IOP][BAS][POS2].decalageXDecor = -3;
    dofus->classes->animationMvmnt[IOP][BAS][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[IOP][BAS][POS3].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][BAS][POS3].spriteX = 298;
    dofus->classes->animationMvmnt[IOP][BAS][POS3].spriteY = 417;
    dofus->classes->animationMvmnt[IOP][BAS][POS3].spriteHauteur = 98;
    dofus->classes->animationMvmnt[IOP][BAS][POS3].spriteLargeur = 74;
    dofus->classes->animationMvmnt[IOP][BAS][POS3].decalageXDecor = -6;
    dofus->classes->animationMvmnt[IOP][BAS][POS3].decalageYDecor = -56;

    dofus->classes->animationMvmnt[IOP][BAS][POS4].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][BAS][POS4].spriteX = 437;
    dofus->classes->animationMvmnt[IOP][BAS][POS4].spriteY = 422;
    dofus->classes->animationMvmnt[IOP][BAS][POS4].spriteHauteur = 100;
    dofus->classes->animationMvmnt[IOP][BAS][POS4].spriteLargeur = 74;
    dofus->classes->animationMvmnt[IOP][BAS][POS4].decalageXDecor = -3;
    dofus->classes->animationMvmnt[IOP][BAS][POS4].decalageYDecor = -60;

    dofus->classes->animationMvmnt[IOP][BAS][POS5].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][BAS][POS5].spriteX = 569;
    dofus->classes->animationMvmnt[IOP][BAS][POS5].spriteY = 414;
    dofus->classes->animationMvmnt[IOP][BAS][POS5].spriteHauteur = 79;
    dofus->classes->animationMvmnt[IOP][BAS][POS5].spriteLargeur = 84;
    dofus->classes->animationMvmnt[IOP][BAS][POS5].decalageXDecor = -3;
    dofus->classes->animationMvmnt[IOP][BAS][POS5].decalageYDecor = -50;

    dofus->classes->animationMvmnt[IOP][BAS][POS6].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][BAS][POS6].spriteX = 715;
    dofus->classes->animationMvmnt[IOP][BAS][POS6].spriteY = 423;
    dofus->classes->animationMvmnt[IOP][BAS][POS6].spriteHauteur = 92;
    dofus->classes->animationMvmnt[IOP][BAS][POS6].spriteLargeur = 65;
    dofus->classes->animationMvmnt[IOP][BAS][POS6].decalageXDecor = 6;
    dofus->classes->animationMvmnt[IOP][BAS][POS6].decalageYDecor = -67;

    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].spriteX = 34;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].spriteY = 679;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].spriteHauteur = 91;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].spriteLargeur = 74;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].decalageXDecor = 6;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS1].decalageYDecor = -67;
                                        
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].spriteX = 156;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].spriteY = 680;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].spriteHauteur = 92;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].spriteLargeur = 78;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].decalageXDecor = 0;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS2].decalageYDecor = -67;

    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].spriteX = 292;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].spriteY = 681;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].spriteHauteur = 96;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].spriteLargeur = 78;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].decalageXDecor = 6;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS3].decalageYDecor = -67;

    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].spriteX = 445;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].spriteY = 680;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].spriteHauteur = 113;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].spriteLargeur = 61;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].decalageXDecor = 2;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS4].decalageYDecor = -80;

    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].spriteX = 576;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].spriteY = 682;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].spriteHauteur = 115;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].spriteLargeur = 61;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].decalageXDecor = -7;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS5].decalageYDecor = -74;


    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].spriteX = 713;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].spriteY = 678;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].spriteHauteur = 93;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].spriteLargeur = 76;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].decalageXDecor = 6;
    dofus->classes->animationMvmnt[IOP][GAUCHE][POS6].decalageYDecor = -56;

    dofus->classes->animationMvmnt[IOP][HAUT][POS1].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][HAUT][POS1].spriteX = 32;
    dofus->classes->animationMvmnt[IOP][HAUT][POS1].spriteY = 966;
    dofus->classes->animationMvmnt[IOP][HAUT][POS1].spriteHauteur = 117;
    dofus->classes->animationMvmnt[IOP][HAUT][POS1].spriteLargeur = 77;
    dofus->classes->animationMvmnt[IOP][HAUT][POS1].decalageXDecor = 19;
    dofus->classes->animationMvmnt[IOP][HAUT][POS1].decalageYDecor = -80;

    dofus->classes->animationMvmnt[IOP][HAUT][POS2].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][HAUT][POS2].spriteX = 156;
    dofus->classes->animationMvmnt[IOP][HAUT][POS2].spriteY = 960;
    dofus->classes->animationMvmnt[IOP][HAUT][POS2].spriteHauteur = 96;
    dofus->classes->animationMvmnt[IOP][HAUT][POS2].spriteLargeur = 80;
    dofus->classes->animationMvmnt[IOP][HAUT][POS2].decalageXDecor = -6;
    dofus->classes->animationMvmnt[IOP][HAUT][POS2].decalageYDecor = -70;

    dofus->classes->animationMvmnt[IOP][HAUT][POS3].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][HAUT][POS3].spriteX = 292;
    dofus->classes->animationMvmnt[IOP][HAUT][POS3].spriteY = 964;
    dofus->classes->animationMvmnt[IOP][HAUT][POS3].spriteHauteur = 95;
    dofus->classes->animationMvmnt[IOP][HAUT][POS3].spriteLargeur = 80;
    dofus->classes->animationMvmnt[IOP][HAUT][POS3].decalageXDecor = 0;
    dofus->classes->animationMvmnt[IOP][HAUT][POS3].decalageYDecor = -62;

    dofus->classes->animationMvmnt[IOP][HAUT][POS4].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][HAUT][POS4].spriteX = 437;
    dofus->classes->animationMvmnt[IOP][HAUT][POS4].spriteY = 967;
    dofus->classes->animationMvmnt[IOP][HAUT][POS4].spriteHauteur = 89;
    dofus->classes->animationMvmnt[IOP][HAUT][POS4].spriteLargeur = 80;
    dofus->classes->animationMvmnt[IOP][HAUT][POS4].decalageXDecor = 0;
    dofus->classes->animationMvmnt[IOP][HAUT][POS4].decalageYDecor = -70;

    dofus->classes->animationMvmnt[IOP][HAUT][POS5].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][HAUT][POS5].spriteX = 584;
    dofus->classes->animationMvmnt[IOP][HAUT][POS5].spriteY = 965;
    dofus->classes->animationMvmnt[IOP][HAUT][POS5].spriteHauteur = 92;
    dofus->classes->animationMvmnt[IOP][HAUT][POS5].spriteLargeur = 65;
    dofus->classes->animationMvmnt[IOP][HAUT][POS5].decalageXDecor = 10;
    dofus->classes->animationMvmnt[IOP][HAUT][POS5].decalageYDecor = -64;

    dofus->classes->animationMvmnt[IOP][HAUT][POS6].image = &dofus->tabBitmap[SPRITE_IOP_ANIM];
    dofus->classes->animationMvmnt[IOP][HAUT][POS6].spriteX = 704;
    dofus->classes->animationMvmnt[IOP][HAUT][POS6].spriteY = 967;
    dofus->classes->animationMvmnt[IOP][HAUT][POS6].spriteHauteur = 101;
    dofus->classes->animationMvmnt[IOP][HAUT][POS6].spriteLargeur = 76;
    dofus->classes->animationMvmnt[IOP][HAUT][POS6].decalageXDecor = 6;
    dofus->classes->animationMvmnt[IOP][HAUT][POS6].decalageYDecor = -70;


    // FECAAAAAAAAAAA FAIT


    dofus->classes->animationMvmnt[FECA][DROITE][POS1].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][DROITE][POS1].spriteX = 42;
    dofus->classes->animationMvmnt[FECA][DROITE][POS1].spriteY = 145;
    dofus->classes->animationMvmnt[FECA][DROITE][POS1].spriteHauteur = 92;
    dofus->classes->animationMvmnt[FECA][DROITE][POS1].spriteLargeur = 69;
    dofus->classes->animationMvmnt[FECA][DROITE][POS1].decalageXDecor = 15;
    dofus->classes->animationMvmnt[FECA][DROITE][POS1].decalageYDecor = -67;

    dofus->classes->animationMvmnt[FECA][DROITE][POS2].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][DROITE][POS2].spriteX = 170;
    dofus->classes->animationMvmnt[FECA][DROITE][POS2].spriteY = 142;
    dofus->classes->animationMvmnt[FECA][DROITE][POS2].spriteHauteur = 100;
    dofus->classes->animationMvmnt[FECA][DROITE][POS2].spriteLargeur = 77;
    dofus->classes->animationMvmnt[FECA][DROITE][POS2].decalageXDecor = 10;
    dofus->classes->animationMvmnt[FECA][DROITE][POS2].decalageYDecor = -67;

    dofus->classes->animationMvmnt[FECA][DROITE][POS3].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][DROITE][POS3].spriteX = 308;
    dofus->classes->animationMvmnt[FECA][DROITE][POS3].spriteY = 145;
    dofus->classes->animationMvmnt[FECA][DROITE][POS3].spriteHauteur = 100;
    dofus->classes->animationMvmnt[FECA][DROITE][POS3].spriteLargeur = 77;
    dofus->classes->animationMvmnt[FECA][DROITE][POS3].decalageXDecor = 14;
    dofus->classes->animationMvmnt[FECA][DROITE][POS3].decalageYDecor = -69;

    dofus->classes->animationMvmnt[FECA][DROITE][POS4].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][DROITE][POS4].spriteX = 445;
    dofus->classes->animationMvmnt[FECA][DROITE][POS4].spriteY = 143;
    dofus->classes->animationMvmnt[FECA][DROITE][POS4].spriteHauteur = 83;
    dofus->classes->animationMvmnt[FECA][DROITE][POS4].spriteLargeur = 77;
    dofus->classes->animationMvmnt[FECA][DROITE][POS4].decalageXDecor = 4;
    dofus->classes->animationMvmnt[FECA][DROITE][POS4].decalageYDecor = -56;

    dofus->classes->animationMvmnt[FECA][DROITE][POS5].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][DROITE][POS5].spriteX = 580;
    dofus->classes->animationMvmnt[FECA][DROITE][POS5].spriteY = 144;
    dofus->classes->animationMvmnt[FECA][DROITE][POS5].spriteHauteur = 89;
    dofus->classes->animationMvmnt[FECA][DROITE][POS5].spriteLargeur = 70;
    dofus->classes->animationMvmnt[FECA][DROITE][POS5].decalageXDecor = 0;
    dofus->classes->animationMvmnt[FECA][DROITE][POS5].decalageYDecor = -60;

    dofus->classes->animationMvmnt[FECA][DROITE][POS6].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][DROITE][POS6].spriteX = 724;
    dofus->classes->animationMvmnt[FECA][DROITE][POS6].spriteY = 147;
    dofus->classes->animationMvmnt[FECA][DROITE][POS6].spriteHauteur = 93;
    dofus->classes->animationMvmnt[FECA][DROITE][POS6].spriteLargeur = 61;
    dofus->classes->animationMvmnt[FECA][DROITE][POS6].decalageXDecor = 15;
    dofus->classes->animationMvmnt[FECA][DROITE][POS6].decalageYDecor = -67;

    dofus->classes->animationMvmnt[FECA][BAS][POS1].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][BAS][POS1].spriteX = 28;
    dofus->classes->animationMvmnt[FECA][BAS][POS1].spriteY = 415;
    dofus->classes->animationMvmnt[FECA][BAS][POS1].spriteHauteur = 83;
    dofus->classes->animationMvmnt[FECA][BAS][POS1].spriteLargeur = 73;
    dofus->classes->animationMvmnt[FECA][BAS][POS1].decalageXDecor = 9;
    dofus->classes->animationMvmnt[FECA][BAS][POS1].decalageYDecor = -52;

    dofus->classes->animationMvmnt[FECA][BAS][POS2].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][BAS][POS2].spriteX = 162;
    dofus->classes->animationMvmnt[FECA][BAS][POS2].spriteY = 414;
    dofus->classes->animationMvmnt[FECA][BAS][POS2].spriteHauteur = 86;
    dofus->classes->animationMvmnt[FECA][BAS][POS2].spriteLargeur = 74;
    dofus->classes->animationMvmnt[FECA][BAS][POS2].decalageXDecor = -3;
    dofus->classes->animationMvmnt[FECA][BAS][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[FECA][BAS][POS3].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][BAS][POS3].spriteX = 301;
    dofus->classes->animationMvmnt[FECA][BAS][POS3].spriteY = 419;
    dofus->classes->animationMvmnt[FECA][BAS][POS3].spriteHauteur = 89;
    dofus->classes->animationMvmnt[FECA][BAS][POS3].spriteLargeur = 61;
    dofus->classes->animationMvmnt[FECA][BAS][POS3].decalageXDecor = -6;
    dofus->classes->animationMvmnt[FECA][BAS][POS3].decalageYDecor = -56;

    dofus->classes->animationMvmnt[FECA][BAS][POS4].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][BAS][POS4].spriteX = 439;
    dofus->classes->animationMvmnt[FECA][BAS][POS4].spriteY = 415;
    dofus->classes->animationMvmnt[FECA][BAS][POS4].spriteHauteur = 87;
    dofus->classes->animationMvmnt[FECA][BAS][POS4].spriteLargeur = 63;
    dofus->classes->animationMvmnt[FECA][BAS][POS4].decalageXDecor = -3;
    dofus->classes->animationMvmnt[FECA][BAS][POS4].decalageYDecor = -60;

    dofus->classes->animationMvmnt[FECA][BAS][POS5].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][BAS][POS5].spriteX = 569;
    dofus->classes->animationMvmnt[FECA][BAS][POS5].spriteY = 415;
    dofus->classes->animationMvmnt[FECA][BAS][POS5].spriteHauteur = 96;
    dofus->classes->animationMvmnt[FECA][BAS][POS5].spriteLargeur = 76;
    dofus->classes->animationMvmnt[FECA][BAS][POS5].decalageXDecor = -3;
    dofus->classes->animationMvmnt[FECA][BAS][POS5].decalageYDecor = -60;

    dofus->classes->animationMvmnt[FECA][BAS][POS6].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][BAS][POS6].spriteX = 709;
    dofus->classes->animationMvmnt[FECA][BAS][POS6].spriteY = 415;
    dofus->classes->animationMvmnt[FECA][BAS][POS6].spriteHauteur = 99;
    dofus->classes->animationMvmnt[FECA][BAS][POS6].spriteLargeur = 74;
    dofus->classes->animationMvmnt[FECA][BAS][POS6].decalageXDecor = 0;
    dofus->classes->animationMvmnt[FECA][BAS][POS6].decalageYDecor = -62;

    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].spriteX = 21;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].spriteY = 688;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].spriteHauteur = 116;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].spriteLargeur = 77;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].decalageXDecor = -19;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS1].decalageYDecor = -80;

    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].spriteX = 164;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].spriteY = 684;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].spriteHauteur = 96;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].spriteLargeur = 79;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].decalageXDecor = -4;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].spriteX = 300;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].spriteY = 682;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].spriteHauteur = 96;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].spriteLargeur = 79;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].decalageXDecor = -3;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS3].decalageYDecor = -64;

    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].spriteX = 434;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].spriteY = 687;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].spriteHauteur = 89;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].spriteLargeur = 79;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].decalageXDecor = 0;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS4].decalageYDecor = -66;

    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].spriteX = 572;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].spriteY = 689;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].spriteHauteur = 103;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].spriteLargeur = 79;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].decalageXDecor = -14;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS5].decalageYDecor = -74;


    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].spriteX = 711;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].spriteY = 686;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].spriteHauteur = 90;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].spriteLargeur = 83;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].decalageXDecor = -3;
    dofus->classes->animationMvmnt[FECA][GAUCHE][POS6].decalageYDecor = -65;

    dofus->classes->animationMvmnt[FECA][HAUT][POS1].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][HAUT][POS1].spriteX = 30;
    dofus->classes->animationMvmnt[FECA][HAUT][POS1].spriteY = 985;
    dofus->classes->animationMvmnt[FECA][HAUT][POS1].spriteHauteur = 90;
    dofus->classes->animationMvmnt[FECA][HAUT][POS1].spriteLargeur = 83;
    dofus->classes->animationMvmnt[FECA][HAUT][POS1].decalageXDecor = 0;
    dofus->classes->animationMvmnt[FECA][HAUT][POS1].decalageYDecor = -65;

    dofus->classes->animationMvmnt[FECA][HAUT][POS2].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][HAUT][POS2].spriteX = 161;
    dofus->classes->animationMvmnt[FECA][HAUT][POS2].spriteY = 983;
    dofus->classes->animationMvmnt[FECA][HAUT][POS2].spriteHauteur = 103;
    dofus->classes->animationMvmnt[FECA][HAUT][POS2].spriteLargeur = 83;
    dofus->classes->animationMvmnt[FECA][HAUT][POS2].decalageXDecor = 5;
    dofus->classes->animationMvmnt[FECA][HAUT][POS2].decalageYDecor = -70;

    dofus->classes->animationMvmnt[FECA][HAUT][POS3].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][HAUT][POS3].spriteX = 306;
    dofus->classes->animationMvmnt[FECA][HAUT][POS3].spriteY = 990;
    dofus->classes->animationMvmnt[FECA][HAUT][POS3].spriteHauteur = 87;
    dofus->classes->animationMvmnt[FECA][HAUT][POS3].spriteLargeur = 75;
    dofus->classes->animationMvmnt[FECA][HAUT][POS3].decalageXDecor = 3;
    dofus->classes->animationMvmnt[FECA][HAUT][POS3].decalageYDecor = -62;

    dofus->classes->animationMvmnt[FECA][HAUT][POS4].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][HAUT][POS4].spriteX = 443;
    dofus->classes->animationMvmnt[FECA][HAUT][POS4].spriteY = 994;
    dofus->classes->animationMvmnt[FECA][HAUT][POS4].spriteHauteur = 87;
    dofus->classes->animationMvmnt[FECA][HAUT][POS4].spriteLargeur = 78;
    dofus->classes->animationMvmnt[FECA][HAUT][POS4].decalageXDecor = 0;
    dofus->classes->animationMvmnt[FECA][HAUT][POS4].decalageYDecor = -60;

    dofus->classes->animationMvmnt[FECA][HAUT][POS5].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][HAUT][POS5].spriteX = 579;
    dofus->classes->animationMvmnt[FECA][HAUT][POS5].spriteY = 979;
    dofus->classes->animationMvmnt[FECA][HAUT][POS5].spriteHauteur = 113;
    dofus->classes->animationMvmnt[FECA][HAUT][POS5].spriteLargeur = 72;
    dofus->classes->animationMvmnt[FECA][HAUT][POS5].decalageXDecor = 16;
    dofus->classes->animationMvmnt[FECA][HAUT][POS5].decalageYDecor = -78;

    dofus->classes->animationMvmnt[FECA][HAUT][POS6].image = &dofus->tabBitmap[SPRITE_FECA_ANIM];
    dofus->classes->animationMvmnt[FECA][HAUT][POS6].spriteX = 719;
    dofus->classes->animationMvmnt[FECA][HAUT][POS6].spriteY = 978;
    dofus->classes->animationMvmnt[FECA][HAUT][POS6].spriteHauteur = 114;
    dofus->classes->animationMvmnt[FECA][HAUT][POS6].spriteLargeur = 72;
    dofus->classes->animationMvmnt[FECA][HAUT][POS6].decalageXDecor = 19;
    dofus->classes->animationMvmnt[FECA][HAUT][POS6].decalageYDecor = -79;



    //ECAAAAAA FAIIT

    dofus->classes->animationMvmnt[ECA][DROITE][POS1].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][DROITE][POS1].spriteX = 42;
    dofus->classes->animationMvmnt[ECA][DROITE][POS1].spriteY = 145;
    dofus->classes->animationMvmnt[ECA][DROITE][POS1].spriteHauteur = 106;
    dofus->classes->animationMvmnt[ECA][DROITE][POS1].spriteLargeur = 68;
    dofus->classes->animationMvmnt[ECA][DROITE][POS1].decalageXDecor = 19;
    dofus->classes->animationMvmnt[ECA][DROITE][POS1].decalageYDecor = -70;

    dofus->classes->animationMvmnt[ECA][DROITE][POS2].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][DROITE][POS2].spriteX = 175;
    dofus->classes->animationMvmnt[ECA][DROITE][POS2].spriteY = 151;
    dofus->classes->animationMvmnt[ECA][DROITE][POS2].spriteHauteur = 97;
    dofus->classes->animationMvmnt[ECA][DROITE][POS2].spriteLargeur = 71;
    dofus->classes->animationMvmnt[ECA][DROITE][POS2].decalageXDecor = 3;
    dofus->classes->animationMvmnt[ECA][DROITE][POS2].decalageYDecor = -64;

    dofus->classes->animationMvmnt[ECA][DROITE][POS3].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][DROITE][POS3].spriteX = 316;
    dofus->classes->animationMvmnt[ECA][DROITE][POS3].spriteY = 156;
    dofus->classes->animationMvmnt[ECA][DROITE][POS3].spriteHauteur = 97;
    dofus->classes->animationMvmnt[ECA][DROITE][POS3].spriteLargeur = 61;
    dofus->classes->animationMvmnt[ECA][DROITE][POS3].decalageXDecor = 10;
    dofus->classes->animationMvmnt[ECA][DROITE][POS3].decalageYDecor = -47;

    dofus->classes->animationMvmnt[ECA][DROITE][POS4].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][DROITE][POS4].spriteX = 447;
    dofus->classes->animationMvmnt[ECA][DROITE][POS4].spriteY = 152;
    dofus->classes->animationMvmnt[ECA][DROITE][POS4].spriteHauteur = 99;
    dofus->classes->animationMvmnt[ECA][DROITE][POS4].spriteLargeur = 70;
    dofus->classes->animationMvmnt[ECA][DROITE][POS4].decalageXDecor = 7;
    dofus->classes->animationMvmnt[ECA][DROITE][POS4].decalageYDecor = -53;

    dofus->classes->animationMvmnt[ECA][DROITE][POS5].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][DROITE][POS5].spriteX = 576;
    dofus->classes->animationMvmnt[ECA][DROITE][POS5].spriteY = 146;
    dofus->classes->animationMvmnt[ECA][DROITE][POS5].spriteHauteur = 100;
    dofus->classes->animationMvmnt[ECA][DROITE][POS5].spriteLargeur = 78;
    dofus->classes->animationMvmnt[ECA][DROITE][POS5].decalageXDecor = 0;
    dofus->classes->animationMvmnt[ECA][DROITE][POS5].decalageYDecor = -68;

    dofus->classes->animationMvmnt[ECA][DROITE][POS6].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][DROITE][POS6].spriteX = 716;
    dofus->classes->animationMvmnt[ECA][DROITE][POS6].spriteY = 152;
    dofus->classes->animationMvmnt[ECA][DROITE][POS6].spriteHauteur = 91;
    dofus->classes->animationMvmnt[ECA][DROITE][POS6].spriteLargeur = 78;
    dofus->classes->animationMvmnt[ECA][DROITE][POS6].decalageXDecor = 1;
    dofus->classes->animationMvmnt[ECA][DROITE][POS6].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][BAS][POS1].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][BAS][POS1].spriteX = 24;
    dofus->classes->animationMvmnt[ECA][BAS][POS1].spriteY = 416;
    dofus->classes->animationMvmnt[ECA][BAS][POS1].spriteHauteur = 97;
    dofus->classes->animationMvmnt[ECA][BAS][POS1].spriteLargeur = 69;
    dofus->classes->animationMvmnt[ECA][BAS][POS1].decalageXDecor = 0;
    dofus->classes->animationMvmnt[ECA][BAS][POS1].decalageYDecor = -65;

    dofus->classes->animationMvmnt[ECA][BAS][POS2].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][BAS][POS2].spriteX = 161;
    dofus->classes->animationMvmnt[ECA][BAS][POS2].spriteY = 415;
    dofus->classes->animationMvmnt[ECA][BAS][POS2].spriteHauteur = 97;
    dofus->classes->animationMvmnt[ECA][BAS][POS2].spriteLargeur = 69;
    dofus->classes->animationMvmnt[ECA][BAS][POS2].decalageXDecor = -3;
    dofus->classes->animationMvmnt[ECA][BAS][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][BAS][POS3].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][BAS][POS3].spriteX = 298;
    dofus->classes->animationMvmnt[ECA][BAS][POS3].spriteY = 417;
    dofus->classes->animationMvmnt[ECA][BAS][POS3].spriteHauteur = 98;
    dofus->classes->animationMvmnt[ECA][BAS][POS3].spriteLargeur = 74;
    dofus->classes->animationMvmnt[ECA][BAS][POS3].decalageXDecor = -6;
    dofus->classes->animationMvmnt[ECA][BAS][POS3].decalageYDecor = -56;

    dofus->classes->animationMvmnt[ECA][BAS][POS4].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][BAS][POS4].spriteX = 430;
    dofus->classes->animationMvmnt[ECA][BAS][POS4].spriteY = 422;
    dofus->classes->animationMvmnt[ECA][BAS][POS4].spriteHauteur = 100;
    dofus->classes->animationMvmnt[ECA][BAS][POS4].spriteLargeur = 80;
    dofus->classes->animationMvmnt[ECA][BAS][POS4].decalageXDecor = -3;
    dofus->classes->animationMvmnt[ECA][BAS][POS4].decalageYDecor = -50;

    dofus->classes->animationMvmnt[ECA][BAS][POS5].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][BAS][POS5].spriteX = 560;
    dofus->classes->animationMvmnt[ECA][BAS][POS5].spriteY = 414;
    dofus->classes->animationMvmnt[ECA][BAS][POS5].spriteHauteur = 93;
    dofus->classes->animationMvmnt[ECA][BAS][POS5].spriteLargeur = 84;
    dofus->classes->animationMvmnt[ECA][BAS][POS5].decalageXDecor = -3;
    dofus->classes->animationMvmnt[ECA][BAS][POS5].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][BAS][POS6].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][BAS][POS6].spriteX = 700;
    dofus->classes->animationMvmnt[ECA][BAS][POS6].spriteY = 423;
    dofus->classes->animationMvmnt[ECA][BAS][POS6].spriteHauteur = 92;
    dofus->classes->animationMvmnt[ECA][BAS][POS6].spriteLargeur = 75;
    dofus->classes->animationMvmnt[ECA][BAS][POS6].decalageXDecor = 6;
    dofus->classes->animationMvmnt[ECA][BAS][POS6].decalageYDecor = -61;

    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].spriteX = 15;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].spriteY = 679;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].spriteHauteur = 91;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].spriteLargeur = 84;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].decalageXDecor = 0;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS1].decalageYDecor = -53;

    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].spriteX = 156;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].spriteY = 680;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].spriteHauteur = 120;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].spriteLargeur = 78;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].decalageXDecor = -7;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].spriteX = 292;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].spriteY = 681;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].spriteHauteur = 112;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].spriteLargeur = 78;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].decalageXDecor = 0;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS3].decalageYDecor = -77;

    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].spriteX = 430;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].spriteY = 680;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].spriteHauteur = 113;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].spriteLargeur = 78;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].decalageXDecor = -4;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS4].decalageYDecor = -55;

    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].spriteX = 564;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].spriteY = 682;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].spriteHauteur = 115;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].spriteLargeur = 81;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].decalageXDecor = 0;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS5].decalageYDecor = -54;


    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].spriteX = 700;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].spriteY = 678;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].spriteHauteur = 93;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].spriteLargeur = 90;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].decalageXDecor = 6;
    dofus->classes->animationMvmnt[ECA][GAUCHE][POS6].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][HAUT][POS1].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][HAUT][POS1].spriteX = 32;
    dofus->classes->animationMvmnt[ECA][HAUT][POS1].spriteY = 960;
    dofus->classes->animationMvmnt[ECA][HAUT][POS1].spriteHauteur = 125;
    dofus->classes->animationMvmnt[ECA][HAUT][POS1].spriteLargeur = 77;
    dofus->classes->animationMvmnt[ECA][HAUT][POS1].decalageXDecor = 0;
    dofus->classes->animationMvmnt[ECA][HAUT][POS1].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][HAUT][POS2].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][HAUT][POS2].spriteX = 156;
    dofus->classes->animationMvmnt[ECA][HAUT][POS2].spriteY = 960;
    dofus->classes->animationMvmnt[ECA][HAUT][POS2].spriteHauteur = 96;
    dofus->classes->animationMvmnt[ECA][HAUT][POS2].spriteLargeur = 80;
    dofus->classes->animationMvmnt[ECA][HAUT][POS2].decalageXDecor = -6;
    dofus->classes->animationMvmnt[ECA][HAUT][POS2].decalageYDecor = -70;

    dofus->classes->animationMvmnt[ECA][HAUT][POS3].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][HAUT][POS3].spriteX = 292;
    dofus->classes->animationMvmnt[ECA][HAUT][POS3].spriteY = 964;
    dofus->classes->animationMvmnt[ECA][HAUT][POS3].spriteHauteur = 95;
    dofus->classes->animationMvmnt[ECA][HAUT][POS3].spriteLargeur = 80;
    dofus->classes->animationMvmnt[ECA][HAUT][POS3].decalageXDecor = -10;
    dofus->classes->animationMvmnt[ECA][HAUT][POS3].decalageYDecor = -62;

    dofus->classes->animationMvmnt[ECA][HAUT][POS4].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][HAUT][POS4].spriteX = 437;
    dofus->classes->animationMvmnt[ECA][HAUT][POS4].spriteY = 967;
    dofus->classes->animationMvmnt[ECA][HAUT][POS4].spriteHauteur = 110;
    dofus->classes->animationMvmnt[ECA][HAUT][POS4].spriteLargeur = 80;
    dofus->classes->animationMvmnt[ECA][HAUT][POS4].decalageXDecor = 10;
    dofus->classes->animationMvmnt[ECA][HAUT][POS4].decalageYDecor = -70;

    dofus->classes->animationMvmnt[ECA][HAUT][POS5].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][HAUT][POS5].spriteX = 584;
    dofus->classes->animationMvmnt[ECA][HAUT][POS5].spriteY = 965;
    dofus->classes->animationMvmnt[ECA][HAUT][POS5].spriteHauteur = 92;
    dofus->classes->animationMvmnt[ECA][HAUT][POS5].spriteLargeur = 65;
    dofus->classes->animationMvmnt[ECA][HAUT][POS5].decalageXDecor = 14;
    dofus->classes->animationMvmnt[ECA][HAUT][POS5].decalageYDecor = -60;

    dofus->classes->animationMvmnt[ECA][HAUT][POS6].image = &dofus->tabBitmap[SPRITE_ECA_ANIM];
    dofus->classes->animationMvmnt[ECA][HAUT][POS6].spriteX = 704;
    dofus->classes->animationMvmnt[ECA][HAUT][POS6].spriteY = 967;
    dofus->classes->animationMvmnt[ECA][HAUT][POS6].spriteHauteur = 101;
    dofus->classes->animationMvmnt[ECA][HAUT][POS6].spriteLargeur = 86;
    dofus->classes->animationMvmnt[ECA][HAUT][POS6].decalageXDecor = -13;
    dofus->classes->animationMvmnt[ECA][HAUT][POS6].decalageYDecor = -56;

    //OSAAAAAAAAAA AUCUN DECALAGE

    dofus->classes->animationMvmnt[OSA][DROITE][POS1].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][DROITE][POS1].spriteX = 43;
    dofus->classes->animationMvmnt[OSA][DROITE][POS1].spriteY = 147;
    dofus->classes->animationMvmnt[OSA][DROITE][POS1].spriteHauteur = 107;
    dofus->classes->animationMvmnt[OSA][DROITE][POS1].spriteLargeur = 78;
    dofus->classes->animationMvmnt[OSA][DROITE][POS1].decalageXDecor = 10;
    dofus->classes->animationMvmnt[OSA][DROITE][POS1].decalageYDecor = -73;

    dofus->classes->animationMvmnt[OSA][DROITE][POS2].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][DROITE][POS2].spriteX = 175;
    dofus->classes->animationMvmnt[OSA][DROITE][POS2].spriteY = 151;
    dofus->classes->animationMvmnt[OSA][DROITE][POS2].spriteHauteur = 107;
    dofus->classes->animationMvmnt[OSA][DROITE][POS2].spriteLargeur = 71;
    dofus->classes->animationMvmnt[OSA][DROITE][POS2].decalageXDecor = 10;
    dofus->classes->animationMvmnt[OSA][DROITE][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[OSA][DROITE][POS3].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][DROITE][POS3].spriteX = 316;
    dofus->classes->animationMvmnt[OSA][DROITE][POS3].spriteY = 156;
    dofus->classes->animationMvmnt[OSA][DROITE][POS3].spriteHauteur = 107;
    dofus->classes->animationMvmnt[OSA][DROITE][POS3].spriteLargeur = 61;
    dofus->classes->animationMvmnt[OSA][DROITE][POS3].decalageXDecor = 20;
    dofus->classes->animationMvmnt[OSA][DROITE][POS3].decalageYDecor = -73;

    dofus->classes->animationMvmnt[OSA][DROITE][POS4].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][DROITE][POS4].spriteX = 447;
    dofus->classes->animationMvmnt[OSA][DROITE][POS4].spriteY = 152;
    dofus->classes->animationMvmnt[OSA][DROITE][POS4].spriteHauteur = 99;
    dofus->classes->animationMvmnt[OSA][DROITE][POS4].spriteLargeur = 68;
    dofus->classes->animationMvmnt[OSA][DROITE][POS4].decalageXDecor = 6;
    dofus->classes->animationMvmnt[OSA][DROITE][POS4].decalageYDecor = -69;

    dofus->classes->animationMvmnt[OSA][DROITE][POS5].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][DROITE][POS5].spriteX = 576;
    dofus->classes->animationMvmnt[OSA][DROITE][POS5].spriteY = 146;
    dofus->classes->animationMvmnt[OSA][DROITE][POS5].spriteHauteur = 96;
    dofus->classes->animationMvmnt[OSA][DROITE][POS5].spriteLargeur = 78;
    dofus->classes->animationMvmnt[OSA][DROITE][POS5].decalageXDecor = -10;
    dofus->classes->animationMvmnt[OSA][DROITE][POS5].decalageYDecor = -67;

    dofus->classes->animationMvmnt[OSA][DROITE][POS6].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][DROITE][POS6].spriteX = 716;
    dofus->classes->animationMvmnt[OSA][DROITE][POS6].spriteY = 152;
    dofus->classes->animationMvmnt[OSA][DROITE][POS6].spriteHauteur = 100;
    dofus->classes->animationMvmnt[OSA][DROITE][POS6].spriteLargeur = 78;
    dofus->classes->animationMvmnt[OSA][DROITE][POS6].decalageXDecor = 0;
    dofus->classes->animationMvmnt[OSA][DROITE][POS6].decalageYDecor = -73;

    dofus->classes->animationMvmnt[OSA][BAS][POS1].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][BAS][POS1].spriteX = 24;
    dofus->classes->animationMvmnt[OSA][BAS][POS1].spriteY = 416;
    dofus->classes->animationMvmnt[OSA][BAS][POS1].spriteHauteur = 111;
    dofus->classes->animationMvmnt[OSA][BAS][POS1].spriteLargeur = 69;
    dofus->classes->animationMvmnt[OSA][BAS][POS1].decalageXDecor = 10;
    dofus->classes->animationMvmnt[OSA][BAS][POS1].decalageYDecor = -80;

    dofus->classes->animationMvmnt[OSA][BAS][POS2].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][BAS][POS2].spriteX = 161;
    dofus->classes->animationMvmnt[OSA][BAS][POS2].spriteY = 415;
    dofus->classes->animationMvmnt[OSA][BAS][POS2].spriteHauteur = 109;
    dofus->classes->animationMvmnt[OSA][BAS][POS2].spriteLargeur = 69;
    dofus->classes->animationMvmnt[OSA][BAS][POS2].decalageXDecor = 9;
    dofus->classes->animationMvmnt[OSA][BAS][POS2].decalageYDecor = -80;

    dofus->classes->animationMvmnt[OSA][BAS][POS3].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][BAS][POS3].spriteX = 298;
    dofus->classes->animationMvmnt[OSA][BAS][POS3].spriteY = 417;
    dofus->classes->animationMvmnt[OSA][BAS][POS3].spriteHauteur = 98;
    dofus->classes->animationMvmnt[OSA][BAS][POS3].spriteLargeur = 89;
    dofus->classes->animationMvmnt[OSA][BAS][POS3].decalageXDecor = 3;
    dofus->classes->animationMvmnt[OSA][BAS][POS3].decalageYDecor = -76;

    dofus->classes->animationMvmnt[OSA][BAS][POS4].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][BAS][POS4].spriteX = 437;
    dofus->classes->animationMvmnt[OSA][BAS][POS4].spriteY = 422;
    dofus->classes->animationMvmnt[OSA][BAS][POS4].spriteHauteur = 100;
    dofus->classes->animationMvmnt[OSA][BAS][POS4].spriteLargeur = 74;
    dofus->classes->animationMvmnt[OSA][BAS][POS4].decalageXDecor = 6;
    dofus->classes->animationMvmnt[OSA][BAS][POS4].decalageYDecor = -70;

    dofus->classes->animationMvmnt[OSA][BAS][POS5].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][BAS][POS5].spriteX = 560;
    dofus->classes->animationMvmnt[OSA][BAS][POS5].spriteY = 414;
    dofus->classes->animationMvmnt[OSA][BAS][POS5].spriteHauteur = 115;
    dofus->classes->animationMvmnt[OSA][BAS][POS5].spriteLargeur = 94;
    dofus->classes->animationMvmnt[OSA][BAS][POS5].decalageXDecor = 6;
    dofus->classes->animationMvmnt[OSA][BAS][POS5].decalageYDecor = -75;

    dofus->classes->animationMvmnt[OSA][BAS][POS6].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][BAS][POS6].spriteX = 700;
    dofus->classes->animationMvmnt[OSA][BAS][POS6].spriteY = 423;
    dofus->classes->animationMvmnt[OSA][BAS][POS6].spriteHauteur = 106;
    dofus->classes->animationMvmnt[OSA][BAS][POS6].spriteLargeur = 75;
    dofus->classes->animationMvmnt[OSA][BAS][POS6].decalageXDecor = -3;
    dofus->classes->animationMvmnt[OSA][BAS][POS6].decalageYDecor = -80;

    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].spriteX = 24;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].spriteY = 679;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].spriteHauteur = 91;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].spriteLargeur = 84;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].decalageXDecor = 16;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS1].decalageYDecor = -60;

    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].spriteX = 140;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].spriteY = 680;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].spriteHauteur = 92;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].spriteLargeur = 96;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].decalageXDecor = -6;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS2].decalageYDecor = -60;

    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].spriteX = 280;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].spriteY = 681;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].spriteHauteur = 96;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].spriteLargeur = 92;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].decalageXDecor = 0;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS3].decalageYDecor = -60;

    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].spriteX = 440;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].spriteY = 670;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].spriteHauteur = 120;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].spriteLargeur = 90;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].decalageXDecor = -5;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS4].decalageYDecor = -65;

    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].spriteX = 576;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].spriteY = 672;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].spriteHauteur = 115;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].spriteLargeur = 81;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].decalageXDecor = -10;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS5].decalageYDecor = -68;

    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].spriteX = 695;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].spriteY = 678;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].spriteHauteur = 93;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].spriteLargeur = 94;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].decalageXDecor = 9;
    dofus->classes->animationMvmnt[OSA][GAUCHE][POS6].decalageYDecor = -63;

    dofus->classes->animationMvmnt[OSA][HAUT][POS1].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][HAUT][POS1].spriteX = 32;
    dofus->classes->animationMvmnt[OSA][HAUT][POS1].spriteY = 966;
    dofus->classes->animationMvmnt[OSA][HAUT][POS1].spriteHauteur = 117;
    dofus->classes->animationMvmnt[OSA][HAUT][POS1].spriteLargeur = 77;
    dofus->classes->animationMvmnt[OSA][HAUT][POS1].decalageXDecor = 10;
    dofus->classes->animationMvmnt[OSA][HAUT][POS1].decalageYDecor = -70;

    dofus->classes->animationMvmnt[OSA][HAUT][POS2].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][HAUT][POS2].spriteX = 156;
    dofus->classes->animationMvmnt[OSA][HAUT][POS2].spriteY = 960;
    dofus->classes->animationMvmnt[OSA][HAUT][POS2].spriteHauteur = 200;
    dofus->classes->animationMvmnt[OSA][HAUT][POS2].spriteLargeur = 80;
    dofus->classes->animationMvmnt[OSA][HAUT][POS2].decalageXDecor = -6;
    dofus->classes->animationMvmnt[OSA][HAUT][POS2].decalageYDecor = -50;

    dofus->classes->animationMvmnt[OSA][HAUT][POS3].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][HAUT][POS3].spriteX = 292;
    dofus->classes->animationMvmnt[OSA][HAUT][POS3].spriteY = 964;
    dofus->classes->animationMvmnt[OSA][HAUT][POS3].spriteHauteur = 95;
    dofus->classes->animationMvmnt[OSA][HAUT][POS3].spriteLargeur = 89;
    dofus->classes->animationMvmnt[OSA][HAUT][POS3].decalageXDecor = -10;
    dofus->classes->animationMvmnt[OSA][HAUT][POS3].decalageYDecor = -55;

    dofus->classes->animationMvmnt[OSA][HAUT][POS4].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][HAUT][POS4].spriteX = 437;
    dofus->classes->animationMvmnt[OSA][HAUT][POS4].spriteY = 967;
    dofus->classes->animationMvmnt[OSA][HAUT][POS4].spriteHauteur = 89;
    dofus->classes->animationMvmnt[OSA][HAUT][POS4].spriteLargeur = 89;
    dofus->classes->animationMvmnt[OSA][HAUT][POS4].decalageXDecor = -7;
    dofus->classes->animationMvmnt[OSA][HAUT][POS4].decalageYDecor = -55;

    dofus->classes->animationMvmnt[OSA][HAUT][POS5].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][HAUT][POS5].spriteX = 584;
    dofus->classes->animationMvmnt[OSA][HAUT][POS5].spriteY = 965;
    dofus->classes->animationMvmnt[OSA][HAUT][POS5].spriteHauteur = 92;
    dofus->classes->animationMvmnt[OSA][HAUT][POS5].spriteLargeur = 79;
    dofus->classes->animationMvmnt[OSA][HAUT][POS5].decalageXDecor = 2;
    dofus->classes->animationMvmnt[OSA][HAUT][POS5].decalageYDecor = -54;

    dofus->classes->animationMvmnt[OSA][HAUT][POS6].image = &dofus->tabBitmap[SPRITE_OSA_ANIM];
    dofus->classes->animationMvmnt[OSA][HAUT][POS6].spriteX = 704;
    dofus->classes->animationMvmnt[OSA][HAUT][POS6].spriteY = 967;
    dofus->classes->animationMvmnt[OSA][HAUT][POS6].spriteHauteur = 101;
    dofus->classes->animationMvmnt[OSA][HAUT][POS6].spriteLargeur = 89;
    dofus->classes->animationMvmnt[OSA][HAUT][POS6].decalageXDecor = -5;
    dofus->classes->animationMvmnt[OSA][HAUT][POS6].decalageYDecor = -60;
}

void initBitmapPersoIopEnJeu(Dofus *dofus) {
    dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteX = 294;
    dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur = 50;
    dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX = 166;
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 50;
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteX = 45;
    dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteLargeur = 45;
    dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteX = 945;
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 50;
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteX = 820;
    dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteLargeur = 55;
    dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 695;
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 50;
    dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteX = 562;
    dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteLargeur = 45;
    dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteHauteur = 110;

    dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 430;
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 0;
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 50;
    dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 110;
}
void initBitmapPersoFecaEnJeu(Dofus *dofus) {
    dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX = 303;
    dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur = 45;
    dofus->tabClasseFecaEnJeu[FECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX = 160;
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 54;
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_DROITE_EN_JEU].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteX = 45;
    dofus->tabClasseFecaEnJeu[FECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteLargeur = 55;
    dofus->tabClasseFecaEnJeu[FECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteX = 950;
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 50;
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_DOS_EN_JEU].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteX = 820;
    dofus->tabClasseFecaEnJeu[FECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteLargeur = 45;
    dofus->tabClasseFecaEnJeu[FECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 692;
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 47;
    dofus->tabClasseFecaEnJeu[FECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteX = 558;
    dofus->tabClasseFecaEnJeu[FECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteLargeur = 55;
    dofus->tabClasseFecaEnJeu[FECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteHauteur = 110;

    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 430;
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 127;
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 50;
    dofus->tabClasseFecaEnJeu[FECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 110;
}
void initBitmapPersoEcaEnJeu(Dofus *dofus) {
    dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX = 304;
    dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur = 40;
    dofus->tabClasseEcaEnJeu[ECA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX = 169;
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 45;
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_DROITE_EN_JEU].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteX = 45;
    dofus->tabClasseEcaEnJeu[ECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteLargeur = 45;
    dofus->tabClasseEcaEnJeu[ECA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteX = 954;
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 40;
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_DOS_EN_JEU].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteX = 820;
    dofus->tabClasseEcaEnJeu[ECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteLargeur = 45;
    dofus->tabClasseEcaEnJeu[ECA_DOS_EN_JEU].skin[SPRITE_DOS].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 695;
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 40;
    dofus->tabClasseEcaEnJeu[ECA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteX = 565;
    dofus->tabClasseEcaEnJeu[ECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteLargeur = 45;
    dofus->tabClasseEcaEnJeu[ECA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteHauteur = 100;

    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 430;
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 265;
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 45;
    dofus->tabClasseEcaEnJeu[ECA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 100;
}
void initBitmapPersoOsaEnJeu(Dofus *dofus) {
    dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteX = 297;
    dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX = 165;
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_DROITE_EN_JEU].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteX = 35;
    dofus->tabClasseOsaEnJeu[OSA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteX = 946;
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_DOS_EN_JEU].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_DOS_EN_JEU].skin[SPRITE_DOS].spriteX = 820;
    dofus->tabClasseOsaEnJeu[OSA_DOS_EN_JEU].skin[SPRITE_DOS].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_DOS_EN_JEU].skin[SPRITE_DOS].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_DOS_EN_JEU].skin[SPRITE_DOS].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 692;
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteX = 560;
    dofus->tabClasseOsaEnJeu[OSA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteLargeur = 53;
    dofus->tabClasseOsaEnJeu[OSA_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteHauteur = 105;

    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 430;
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 395;
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 50;
    dofus->tabClasseOsaEnJeu[OSA_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 105;
}

void dessinerIopFaceEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU], dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_FACE_EN_JEU].skin[SPRITE_FACE].spriteHauteur, x, y, 0);
}
void dessinerIopMiFaceDroiteEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU],
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_DROITE_EN_JEU].skin[SPRITE_MI_FACE_DROITE].spriteHauteur, x, y, 0);
}
void dessinerIopDroiteEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU], dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_DROITE_EN_JEU].skin[SPRITE_DROITE].spriteHauteur, x, y, 0);
}
void dessinerIopMiDosDroiteEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU],
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_DROITE_EN_JEU].skin[SPRITE_MI_DOS_DROITE].spriteHauteur, x, y, 0);
}
void dessinerIopDosEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU], dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_DOS_EN_JEU].skin[SPRITE_DOS].spriteHauteur, x, y, 0);
}
void dessinerIopMiDosGaucheEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU],
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_MI_DOS_GAUCHE_EN_JEU].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur, x, y,0);
}
void dessinerIopGaucheEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU],
                          dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_GAUCHE_EN_JEU].skin[SPRITE_GAUCHE].spriteHauteur, x, y, 0);
}
void dessinerIopMiFaceGaucheEnJeu (Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_EN_JEU],
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteX,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteY,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur,
                          dofus->tabClasseIopEnJeu[IOP_MI_FACE_GAUCHE_EN_JEU].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur, x, y, 0);
}

void testDessinerTousJoueursEnJeu (Dofus *dofus) {
    dessinerIopFaceEnJeu(dofus, 100, 0);
    dessinerIopMiFaceDroiteEnJeu(dofus, 200, 0);
    dessinerIopDroiteEnJeu(dofus, 300, 0);
    dessinerIopMiDosDroiteEnJeu(dofus, 400, 0);
    dessinerIopDosEnJeu(dofus, 100, 150);
    dessinerIopMiDosGaucheEnJeu(dofus, 200, 150);
    dessinerIopGaucheEnJeu(dofus, 300, 150);
    dessinerIopMiFaceGaucheEnJeu(dofus, 400, 150);
}

void initBitmapPersoEnJeuALL (Dofus *dofus) {
    initBitmapPersoIopEnJeu(dofus);
    initBitmapPersoFecaEnJeu(dofus);
    initBitmapPersoEcaEnJeu(dofus);
    initBitmapPersoOsaEnJeu(dofus);
}
void initClasseEnJeuALL (Dofus *dofus){
    initClasseIop(dofus);
    initClasseFeca(dofus);
    initClasseEca(dofus);
    initClasseOsa(dofus);
}

void initClasseIop(Dofus *dofus) {
    dofus->classes[IOP].nbPV = 1000;
    dofus->classes[IOP].nbPM = 3;
    dofus->classes[IOP].nbPA = 6;
}
void initClasseFeca(Dofus *dofus) {
    dofus->classes[FECA].nbPV = 1000;
    dofus->classes[FECA].nbPM = 3;
    dofus->classes[FECA].nbPA = 6;
}
void initClasseEca(Dofus *dofus) {
    dofus->classes[ECA].nbPV = 1000;
    dofus->classes[ECA].nbPM = 3;
    dofus->classes[ECA].nbPA = 6;
}
void initClasseOsa(Dofus *dofus) {
    dofus->classes[OSA].nbPV = 1000;
    dofus->classes[OSA].nbPM = 3;
    dofus->classes[OSA].nbPA = 6;
}