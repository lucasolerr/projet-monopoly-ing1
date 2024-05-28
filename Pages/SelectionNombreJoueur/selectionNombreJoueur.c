#include "selectionNombreJoueur.h"
#include "../../Classes/classes.h"
#include "../../Map/map.h"
#include "../ChoixNom/choixNom.h"
#include "../SelectionClasse/selectionClasse.h"

void initBitmapSelectionJoueur(Dofus *dofus) {
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteX = 0;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteY = 0;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteX = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteY = 0;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteX = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteY = 720;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteX = 2560;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteY = 0;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteX = 2560;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteY = 720;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteX = 3840;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteY = 0;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].image = &dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS];
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteX = 3840;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteY = 720;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteLargeur = 1280;
    dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteHauteur = 720;

    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].image = &dofus->tabBitmap[BITMAP_BOUTON_VALIDER];
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX = 25;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY = 20;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur = 95;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur = 95;

    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].image = &dofus->tabBitmap[BITMAP_BOUTON_VALIDER];
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX = 308;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY = 20;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur = 92;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur = 100;

    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].image = &dofus->tabBitmap[BITMAP_BOUTON_VALIDER];
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX = 590;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY = 20;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur = 92;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur = 100;

    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].image = &dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER];
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX = 36;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY = 23;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur = 130;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur = 132;

    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].image = &dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER];
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX = 205;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY = 23;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur = 120;
    dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur = 132;
}

void dessinerChoixNombreJoueursHOOVER(Dofus *dofus) {
    if (NUMERO_2_POSITION && dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
        dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
        dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (NUMERO_3_POSITION && dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (NUMERO_4_POSITION && dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteHauteur, 0, 0, 0);
    }
}

void dessinerChoixNombreJoueursEtBouton(Dofus *dofus) {
    if (dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteHauteur, 0, 0,
                              0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1150, 30, 0);
        if (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
            dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur,
                                  1132, 20, 0);
        }
        if (dofus->interactionExterieure.mouse.clic == 1 &&
            (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
             dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur,
                                  1134, 20, 0);
            dofus->interactionExterieure.mouse.clic = 0;
            dofus->nbJoueursEnVie = 2;
            dofus->nbJoueurs = 2;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }

        if (POSITION_CROIX && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
            dofus->allegro.etatBoutonSouris = 0;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteHauteur, 0, 0,
                              0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1150, 30, 0);
        if (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
            dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur,
                                  1132, 20, 0);
        }
        if (dofus->interactionExterieure.mouse.clic == 1 &&
            (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
             dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur,
                                  1134, 20, 0);
            dofus->interactionExterieure.mouse.clic = 0;
            dofus->nbJoueursEnVie = 3;
            dofus->nbJoueurs = 3;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->allegro.etatBoutonSouris == 1 && POSITION_CROIX) {
            dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
            dofus->allegro.etatBoutonSouris = 0;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteHauteur, 0, 0,
                              0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1150, 30, 0);
        if (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
            dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur,
                                  1132, 20, 0);
        }
        if (dofus->interactionExterieure.mouse.clic == 1 &&
            (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
             dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur,
                                  1134, 20, 0);
            dofus->interactionExterieure.mouse.clic = 0;
            dofus->nbJoueursEnVie = 4;
            dofus->nbJoueurs = 4;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->allegro.etatBoutonSouris == 1 && POSITION_CROIX) {
            dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
            dofus->allegro.etatBoutonSouris = 0;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    }
}

void dessinerEtChoisirNombreJoueurs(Dofus *dofus) {
    dessinerChoixNombreJoueursHOOVER(dofus);
    dessinerChoixNombreJoueursEtBouton(dofus);
    if (dofus->allegro.etatBoutonSouris == 1 && NUMERO_2_POSITION) {
        dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = true;
        dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
        dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    } else if (dofus->allegro.etatBoutonSouris == 1 && NUMERO_3_POSITION) {
        dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
        dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = true;
        dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    } else if (dofus->allegro.etatBoutonSouris == 1 && NUMERO_4_POSITION) {
        dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
        dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
        dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = true;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}

void dessinerChoixNombreJoueursHOOVER2(Dofus *dofus) {
    if (NUMERO_2_POSITION && dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
        dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
        dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (NUMERO_3_POSITION && dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (NUMERO_4_POSITION && dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == false &&
               dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteHauteur, 0, 0, 0);
    }
}

void dessinerChoixNombreJoueursEtBouton2(Dofus *dofus) {

    if (POSITION_CROIX && dofus->allegro.event.mouse.button == 1) {
        dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
        dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
        dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteHauteur, 0, 0,
                              0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1150, 30, 0);
        if (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
            dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur,
                                  1132, 20, 0);
        }
        if (dofus->interactionExterieure.mouse.clic == 1 &&
            (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
             dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur,
                                  1134, 20, 0);
            dofus->nbJoueursEnVie = 2;
            dofus->nbJoueurs = 2;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }

    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteHauteur, 0, 0,
                              0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1150, 30, 0);
        if (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
            dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur,
                                  1132, 20, 0);
        }
        if (dofus->interactionExterieure.mouse.clic == 1 &&
            (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
             dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur,
                                  1134, 20, 0);
            dofus->interactionExterieure.mouse.clic = 0;
            dofus->nbJoueursEnVie = 3;
            dofus->nbJoueurs = 3;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->allegro.etatBoutonSouris == 1 && POSITION_CROIX) {
            dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
            dofus->allegro.etatBoutonSouris = 0;
        }
    } else if (dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur == true) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteHauteur, 0, 0,
                              0);
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                              1150, 30, 0);
        if (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
            dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2_GROS].spriteHauteur,
                                  1132, 20, 0);
        }
        if (dofus->interactionExterieure.mouse.clic == 1 &&
            (dofus->allegro.coordonneesSourisX > 1150 && dofus->allegro.coordonneesSourisX < 1245 &&
             dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
            al_draw_bitmap_region(dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER],
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteX,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteY,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteLargeur,
                                  dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3_GROS].spriteHauteur,
                                  1134, 20, 0);
            dofus->interactionExterieure.mouse.clic = 0;
            dofus->nbJoueursEnVie = 4;
            dofus->nbJoueurs = 4;
            dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
            dofus->pages.pageChoixNomJoueur.boolPageChoixNom = false;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->allegro.etatBoutonSouris == 1 && POSITION_CROIX) {
            dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur = false;
            dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur = false;
            dofus->allegro.etatBoutonSouris = 0;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    }
}

/*void dessinerSelectionNombreJoueurHOOVER(Dofus *dofus) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                          dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteX,
                          dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteY,
                          dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteLargeur,
                          dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_ALL].spriteHauteur, 0, 0, 0);
    if ((dofus->allegro.coordonneesSourisX > 123 && dofus->allegro.coordonneesSourisX < 455) &&
        (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if ((dofus->allegro.coordonneesSourisX > 472 && dofus->allegro.coordonneesSourisX < 806) &&
               (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if ((dofus->allegro.coordonneesSourisX > 824 && dofus->allegro.coordonneesSourisX < 1158) &&
               (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555) &&
               (!dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE_HOOVER].spriteHauteur,
                              0, 0, 0);
    }
    //printf("X : %d\t\tY : %d\t\tNombre joueurs : %d\n", dofus->allegro.coordonneesSourisX, dofus->allegro.coordonneesSourisY, nombreJoueurs);
}
void dessinerSelectionNombreJoueurCLIQUEE(Dofus *dofus) {
    if ((dofus->allegro.coordonneesSourisX > 123 && dofus->allegro.coordonneesSourisX < 455) &&
        (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555) &&
        (dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteHauteur, 0, 0,
                              0);
    } else if ((dofus->allegro.coordonneesSourisX > 472 && dofus->allegro.coordonneesSourisX < 806) &&
               (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555) &&
               (dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteHauteur, 0,
                              0, 0);
    } else if ((dofus->allegro.coordonneesSourisX > 824 && dofus->allegro.coordonneesSourisX < 1158) &&
               (dofus->allegro.coordonneesSourisY > 165 && dofus->allegro.coordonneesSourisY < 555) &&
               (dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteHauteur, 0,
                              0, 0);
    }
}
void demanderNombreJoueurs(Dofus *dofus) {
    dessinerSelectionNombreJoueurHOOVER(dofus);
    dessinerSelectionNombreJoueurCLIQUEE(dofus);
    if (dofus->pages.pageNombreJoueurSelection.boolCliqueDeuxJoueur) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_DEUX].spriteHauteur, 0, 0,
                              0);
    }
    if (dofus->pages.pageNombreJoueurSelection.boolCliqueTroisJoueur) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_TROIS].spriteHauteur, 0,
                              0, 0);
    }
    if (dofus->pages.pageNombreJoueurSelection.boolCliqueQuatreJoueur) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS],
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteX,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteY,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.image[NOMBRE_JOUEURS_QUATRE].spriteHauteur, 0,
                              0, 0);
    }
}*/

void affichageGeneralChoixNomJoueur(Dofus *dofus) {
    al_clear_to_color(BLANC);

    choixNomJoueur(dofus);

    al_flip_display();
}


void boucleChoixNomJoueur(Dofus *dofus) {
    affichageGeneralChoixNomJoueur(dofus);
    for (int i = 0; i < 30; i++) {
        dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
    }
    while (!dofus->pages.pageChoixNomJoueur.boolPageChoixNom) {
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
                        dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_TIMER : {
                if (dofus->dessin) {
                    affichageGeneralChoixNomJoueur(dofus);
                    dofus->dessin = false;
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE : {
                dofus->endGame = true;
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
                dofus->pages.pageJeu.boolPageJeu = true;
                dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
                exit(1);
                break;
            }
        }
    }
}

void affichageGeneralChoixNombreJoueurs(Dofus *dofus) {
    al_clear_to_color(BLANC);

    dessinerEtChoisirNombreJoueurs(dofus);

    al_flip_display();
}

void boucleChoixNombreJoueurs(Dofus *dofus) {

    affichageGeneralChoixNombreJoueurs(dofus);

    for (int i = 0; i < 30; i++) {
        dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
    }

    while (!dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection) {
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
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_TIMER : {
                if (dofus->dessin) {
                    affichageGeneralChoixNombreJoueurs(dofus);
                    dofus->dessin = false;
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE : {
                dofus->endGame = true;
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
                dofus->pages.pageJeu.boolPageJeu = true;
                dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
                exit(1);
                break;
            }
        }
    }
}

void affichageGeneralChoixClasse(Dofus *dofus) {
    al_clear_to_color(BLANC);

    dessinerEtChoisirClasseJoueurs(dofus);

    al_flip_display();
}

void boucleChoixClasse(Dofus *dofus) {

    affichageGeneralChoixClasse(dofus);
    for (int i = 0; i < 30; i++) {
        dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
    }

    while (!dofus->pages.pageChoixClasses.boolPageSelectionClasses) {
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
                        dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_TIMER : {
                if (dofus->dessin) {
                    affichageGeneralChoixClasse(dofus);
                    dofus->dessin = false;
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE : {
                dofus->endGame = true;
                dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                dofus->pages.pageChoixNomJoueur.boolPageChoixNom = true;
                dofus->pages.pageJeu.boolPageJeu = true;
                dofus->pages.pagePlacementLibre.boolPagePlacementLibre = true;
                exit(1);
                break;
            }
        }
    }
}

void boucleTestDePL(Dofus *dofus) {

    dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = false;
    affichageGeneralPL(dofus);

    for (int i = 0; i < 30; i++) {
        dofus->pages.pageChoixNomJoueur.nomJoueur[i] = '\0';
    }

    while (!dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection) {
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
                        break;
                    }
                }
                break;
            }
            case ALLEGRO_EVENT_TIMER : {
                if (dofus->dessin) {
                    affichageGeneralPL(dofus);
                    dofus->dessin = false;
                }
                break;
            }
            case ALLEGRO_EVENT_DISPLAY_CLOSE : {
                dofus->pages.pageNombreJoueurSelection.boolPageNombreJoueurSelection = true;
                break;
            }
        }
    }
}











