#include "choixNom.h"

void initBitmapChoixNomJoueurs(Dofus *dofus) {
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteX = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteX = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteX = 2560;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteX = 3840;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_UN].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_UN].spriteX = 0;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_UN].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_UN].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_UN].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX_HOOVER].spriteX = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX_HOOVER].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX].spriteX = 2560;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX].spriteY = 0;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_DEUX].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteX = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteX = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteX = 2560;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteX = 3840;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ_HOOVER].spriteX = 0;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ_HOOVER].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ].spriteX = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_CINQ].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_SIX_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_SIX_HOOVER].spriteX = 2560;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_SIX_HOOVER].spriteY = 720;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_SIX_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_SIX_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteX = 0;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteX = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteHauteur = 720;


    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteX = 2560;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteHauteur = 720;


    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_1];
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteX = 3840;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteHauteur = 720;


    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_HUIT].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_HUIT].spriteX = 0;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_HUIT].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_HUIT].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_HUIT].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF_HOOVER].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF_HOOVER].spriteX = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF].image = &dofus->tabBitmap[BITMAP_NOM_JOUEUR_2];
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF].spriteX = 2560;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF].spriteY = 1440;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF].spriteLargeur = 1280;
    dofus->pages.pageChoixNomJoueur.bitmap2[NOM_JOUEUR_NEUF].spriteHauteur = 720;
}

void dessinerAllNom(Dofus *dofus) {
    al_draw_bitmap_region(*dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].image,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteX,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteY,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteLargeur,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_ALL].spriteHauteur, 0, 0,
                          0);
}

void dessinerChoixNomJoueur1(Dofus *dofus) {
    if (POSITION_JOUEUR_UN) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom1 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_UN].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "Raptor");
    }
}
void detecterCliqueNom1(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_UN) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur2(Dofus *dofus) {
    if (POSITION_JOUEUR_DEUX) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom2 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_DEUX].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "TheKiller");
    }
}
void detecterCliqueNom2(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_DEUX) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur3(Dofus *dofus) {
    if (POSITION_JOUEUR_TROIS) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom3 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_TROIS].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "GOD");
    }
}
void detecterCliqueNom3(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_TROIS) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur4(Dofus *dofus) {
    if (POSITION_JOUEUR_QUATRE) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom4 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_QUATRE].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "KING");
    }
}
void detecterCliqueNom4(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_QUATRE) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur5(Dofus *dofus) {
    if (POSITION_JOUEUR_CINQ) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom5 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_CINQ].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (POSITION_JOUEUR_CINQ) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
            dofus->pages.pageChoixNomJoueur.boolCliqueNom5 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "El Chefe");
    }
}
void detecterCliqueNom5(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_CINQ) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur6(Dofus *dofus) {
    if (POSITION_JOUEUR_SIX) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom6 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SIX].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (POSITION_JOUEUR_SIX) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom6 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "GAMER");
    }
}
void detecterCliqueNom6(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_SIX) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur7(Dofus *dofus) {
    if (POSITION_JOUEUR_SEPT) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom7 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SEPT].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "QUEEN");
    }
}
void detecterCliqueNom7(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_SEPT) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur8(Dofus *dofus) {
    if (POSITION_JOUEUR_HUIT) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom8 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_HUIT].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "JustEpic");
    }
}
void detecterCliqueNom8(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_HUIT) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = true;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void dessinerChoixNomJoueur9(Dofus *dofus) {
    if (POSITION_JOUEUR_NEUF) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    if (dofus->pages.pageChoixNomJoueur.boolCliqueNom1 == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2],
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_NEUF].spriteHauteur,
                              0, 0, 0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1160, 20, 0);
    }
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
        dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 &&
         dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        strcpy(dofus->joueurActif->strNomJoueur, "ThePowerful");
    }
}
void detecterCliqueNom9(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_JOUEUR_UN) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = true;
        dofus->pages.pageChoixNomJoueur.selection = true;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
    }
}

void allNom(Dofus *dofus) {
    detecterCliqueNom1(dofus);
    dessinerChoixNomJoueur1(dofus);
    detecterCliqueNom2(dofus);
    dessinerChoixNomJoueur2(dofus);
    detecterCliqueNom3(dofus);
    dessinerChoixNomJoueur3(dofus);
    detecterCliqueNom4(dofus);
    dessinerChoixNomJoueur4(dofus);
    detecterCliqueNom5(dofus);
    dessinerChoixNomJoueur5(dofus);
    detecterCliqueNom6(dofus);
    dessinerChoixNomJoueur6(dofus);
    detecterCliqueNom7(dofus);
    dessinerChoixNomJoueur7(dofus);
    detecterCliqueNom8(dofus);
    dessinerChoixNomJoueur8(dofus);
    detecterCliqueNom9(dofus);
    dessinerChoixNomJoueur9(dofus);
}

void detecterFlecheRetourCliquerChoixNom(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_FLECHE_RETOUR_CHOIX_NOM) {
        for (int i = 0; i < 30; i++) {
            dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
        }
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.listeNom = false;
        dofus->pages.pageChoixNomJoueur.selection = false;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = false;
        dofus->pages.pageChoixNomJoueur.boolFlecheRetour = false;
        dofus->pages.pageChoixNomJoueur.hooverDemanderNom = false;
        dofus->allegro.etatBoutonSouris = 0;
    }
}

void detecterToucheClavier(Dofus *dofus) {
    char tmp = switchCaseToucheClavier(dofus);
    if (tmp == '\0') {
        if (dofus->pages.pageChoixNomJoueur.indice != 0) {
            dofus->pages.pageChoixNomJoueur.indice--;
        }
    }
    dofus->pages.pageChoixNomJoueur.nomJoueur[dofus->pages.pageChoixNomJoueur.indice] = tmp;
    if (tmp != '\0') {
        if (dofus->pages.pageChoixNomJoueur.indice < 25) {
            dofus->pages.pageChoixNomJoueur.indice++;
        }
    }
}

void dessinerLaToucheClavier(Dofus *dofus) {
    if (dofus->pages.pageChoixNomJoueur.boolChoixEffectuer) {
        al_draw_textf(dofus->allegro.fonts[AMARANTE_40PX], GRIS, 357, 285, 0, "%s",
                      dofus->pages.pageChoixNomJoueur.nomJoueur);
    }
}

void dessinerDemanderNom(Dofus *dofus) {
    al_draw_bitmap_region(*dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].image,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteX,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteY,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteLargeur,
                          dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM].spriteHauteur, 0, 0, 0);
    detecterFlecheRetourCliquerChoixNom(dofus);
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                          1000, 262, 0);
    if (dofus->allegro.coordonneesSourisX > 1000 && dofus->allegro.coordonneesSourisX < 1095 &&
        dofus->allegro.coordonneesSourisY > 262 && dofus->allegro.coordonneesSourisY < 357) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1002, 262, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 &&
        (dofus->allegro.coordonneesSourisX > 1000 && dofus->allegro.coordonneesSourisX < 1095 &&
         dofus->allegro.coordonneesSourisY > 262 && dofus->allegro.coordonneesSourisY < 357)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1002, 262, 0);
        strcpy(dofus->joueurActif->strNomJoueur, dofus->pages.pageChoixNomJoueur.nomJoueur);
        dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = false;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}
void dessinerDemanderNomHoover(Dofus *dofus) {
    if (dofus->pages.pageChoixNomJoueur.hooverDemanderNom == false) {
        al_draw_bitmap_region(*dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].image,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteX,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteY,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixNomJoueur.bitmap[NOM_JOUEUR_SAISIR_NOM_MI_HOOVER].spriteHauteur, 0,
                              0, 0);
    }

}

char switchCaseToucheClavier(Dofus *dofus) {
    switch (dofus->allegro.event.keyboard.keycode) {
        case ALLEGRO_KEY_A : {
            return 'A';
        }
        case ALLEGRO_KEY_B : {
            return 'B';
        }
        case ALLEGRO_KEY_C : {
            return 'C';
        }
        case ALLEGRO_KEY_D : {
            return 'D';
        }
        case ALLEGRO_KEY_E : {
            return 'E';
        }
        case ALLEGRO_KEY_F : {
            return 'F';
        }
        case ALLEGRO_KEY_G : {
            return 'G';
        }
        case ALLEGRO_KEY_H : {
            return 'H';
        }
        case ALLEGRO_KEY_I : {
            return 'I';
        }
        case ALLEGRO_KEY_J : {
            return 'J';
        }
            return 'Z';
        case ALLEGRO_KEY_K : {
            return 'K';
        }
        case ALLEGRO_KEY_L : {
            return 'L';
        }
        case ALLEGRO_KEY_M : {
            return 'M';
        }
        case ALLEGRO_KEY_N : {
            return 'N';
        }
        case ALLEGRO_KEY_O : {
            return 'O';
        }
        case ALLEGRO_KEY_P : {
            return 'P';
        }
        case ALLEGRO_KEY_Q : {
            return 'Q';
        }
        case ALLEGRO_KEY_R : {
            return 'R';
        }
        case ALLEGRO_KEY_S : {
            return 'S';
        }
        case ALLEGRO_KEY_T : {
            return 'T';
        }
        case ALLEGRO_KEY_U : {
            return 'U';
        }
        case ALLEGRO_KEY_V : {
            return 'V';
        }
        case ALLEGRO_KEY_W: {
            return 'W';
        }
        case ALLEGRO_KEY_X : {
            return 'X';
        }
        case ALLEGRO_KEY_Y : {
            return 'Y';
        }
        case ALLEGRO_KEY_Z : {
            return 'Z';
        }
        case ALLEGRO_KEY_BACKSPACE : {
            return '\0';
        }
        case ALLEGRO_KEY_SPACE: {
            return ' ';
        }
        case ALLEGRO_KEY_0 : {
            return '0';
        }
        case ALLEGRO_KEY_1 : {
            return '1';
        }
        case ALLEGRO_KEY_2 : {
            return '2';
        }
        case ALLEGRO_KEY_3: {
            return '3';
        }
        case ALLEGRO_KEY_4 : {
            return '4';
        }
        case ALLEGRO_KEY_5 : {
            return '5';
        }
        case ALLEGRO_KEY_6 : {
            return '6';
        }
        case ALLEGRO_KEY_7 : {
            return '7';
        }
        case ALLEGRO_KEY_8: {
            return '8';
        }
        case ALLEGRO_KEY_9: {
            return '9';
        }
    }
}

void dessinerListePropose(Dofus *dofus) {
    if (dofus->pages.pageChoixNomJoueur.listeNom == true) {
        dessinerAllNom(dofus);
        allNom(dofus);
    }
}

void detecterCliqueSurListe(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_BOUTON_LISTE &&
        dofus->pages.pageChoixNomJoueur.listeNom == false) {
        for (int i = 0; i < 30; i++) {
            dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
        }
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = false;
        dofus->pages.pageChoixNomJoueur.hooverDemanderNom = false;
        dofus->pages.pageChoixNomJoueur.listeNom = true;
        dofus->allegro.etatBoutonSouris = 0;
    }
}
void detecterCliqueSurChoixNom(Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && CASE_NOM &&
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer == false) {
        dofus->pages.pageChoixNomJoueur.boolCliqueNom1 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom2 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom3 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom4 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom5 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom6 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom7 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom8 = false;
        dofus->pages.pageChoixNomJoueur.boolCliqueNom9 = false;
        dofus->pages.pageChoixNomJoueur.boolChoixEffectuer = true;
        dofus->pages.pageChoixNomJoueur.hooverDemanderNom = true;
        dofus->allegro.etatBoutonSouris = 0;
    }
}

void dessinerEntrerNomApresClique(Dofus *dofus) {
    dessinerDemanderNomHoover(dofus);
    if (dofus->pages.pageChoixNomJoueur.hooverDemanderNom == true) {
        dessinerDemanderNom(dofus);
        al_draw_rectangle(348, 261, 932, 366, NOIR, 2);
    }
}

void saisieNomJoueur(Dofus *dofus) {
    dessinerEntrerNomApresClique(dofus);
    dessinerLaToucheClavier(dofus);
}

void detecterLesCliques(Dofus *dofus) {
    detecterFlecheRetourCliquerChoixNom(dofus);
    detecterCliqueSurListe(dofus);
    detecterCliqueSurChoixNom(dofus);
}

void choixNomJoueur(Dofus *dofus) {
    detecterLesCliques(dofus);
    saisieNomJoueur(dofus);
    dessinerListePropose(dofus);
}

/*void affichageGeneralChoixNomJoueurs(Dofus* dofus){
    al_clear_to_color(BLANC);

    choixNomJoueur(dofus);

    al_flip_display();
}

void boucleChoixNomJoueurs(Dofus *dofus) {
    dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = false;
    affichageGeneralChoixNomJoueurs(dofus);

    for (int i = 0; i < 30; i++) {
        dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
    }

    while (!dofus->pages.pageChoixNomJoueur.boolPageChoixNom) {

        if(dofus->pages.pageChoixNomJoueur.boolChoixEffectuer){
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
            dofus->dessin = true;
        }

        al_wait_for_event(dofus->allegro.queue, &dofus->allegro.event);
        switch (dofus->allegro.event.type) {
            case ALLEGRO_EVENT_MOUSE_AXES : {
                dofus->interactionExterieure.mouse.celluleXY.screenX = dofus->allegro.event.mouse.x;
                dofus->interactionExterieure.mouse.celluleXY.screenY = dofus->allegro.event.mouse.y;
                dofus->allegro.coordonneesSourisX = dofus->allegro.event.mouse.x;
                dofus->allegro.coordonneesSourisY = dofus->allegro.event.mouse.y;
                actualiserPositionSourisJoueur(dofus);
                dofus->dessin = true;
                break;
            }
            case ALLEGRO_EVENT_MOUSE_BUTTON_DOWN : {
                switch (dofus->allegro.event.mouse.button) {
                    case 1 : {
                        dofus->interactionExterieure.mouse.clic = 1;
                        dofus->allegro.etatBoutonSouris = 1;
                        break;
                    }
                }
                dofus->dessin = true;
                break;
            }
            case ALLEGRO_EVENT_MOUSE_BUTTON_UP : {
                switch (dofus->allegro.event.mouse.button) {
                    case 1 : {
                        dofus->interactionExterieure.mouse.clic = 0;
                        dofus->allegro.etatBoutonSouris = 0;
                        break;
                    }
                }
                dofus->dessin = true;
                break;
            }
            case ALLEGRO_EVENT_KEY_DOWN : {
                dofus->allegro.toucheClavier = dofus->allegro.event.keyboard.keycode;
                if (dofus->pages.pageChoixNomJoueur.boolChoixEffectuer) {
                    detecterToucheClavier(dofus);
                    dofus->dessin = true;
                }
                switch (dofus->allegro.event.keyboard.keycode) {
                    case ALLEGRO_KEY_ESCAPE : {
                        dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                        dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_TIMER : {
                if (dofus->dessin) {
                    affichageGeneralChoixNomJoueurs(dofus);
                    dofus->dessin = false;
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE : {
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                break;
            }
        }
    }
}*/



/*  Fonction pour faire barre vertciale
if ((al_get_timer_count(dofus->allegro.chrono) % 60 == 1)) {
        dofus->pages.pageJeu.animSortEca = false;
        dofus->pages.pageJeu.animSortIop = false;
        dofus->pages.pageJeu.animSortFeca = false;
    }
*/