#include "../Structures/structures.h"
#include "bitmaps.h"


void bitmapCreateAll(Dofus* dofus){
    bitmapCreateSpriteTile(dofus);
    bitmapSortsCreate(dofus);
    bitmapSpriteDecorCreate(dofus);
    bitmapCreatePersonnagesEnJeu(dofus);
    bitmapCreatePersonnagesClasse(dofus);
    bitmapCreateNombreJoueur(dofus);
    bitmapCreateNomJoueur1(dofus);
    bitmapCreateNomJoueur2(dofus);
    bitmapCreateClasseDecors(dofus);
    bitmapCreateLavaBg(dofus);
    bitmapCreateSpriteHUD(dofus);
    bitmapCreateHoverTileBlocPlein(dofus);
    bitmapCreateBoutonValiderPL(dofus);
    bitmapCreateTileChemin(dofus);
    bitmapCreateSpriteIopAnim(dofus);
    bitmapCreateLogo(dofus);
    bitmapCreateNombreJoueurBouton(dofus);
    bitmapCreateTileZoneSort(dofus);
    bitmapCreateFinDeGame(dofus);
    bitmapCreatePageAide(dofus);
}


void bitmapCreateLavaBg(Dofus* dofus){
    dofus->tabBitmap[LAVA_BG] = al_load_bitmap("../Sources/img/bg2.png");
    dofus->tabBitmap[MENU_PRINCIPAL] = al_load_bitmap("../Sources/img/menuPrincipal.png");
    dofus->tabBitmap[TOMBE] = al_load_bitmap("../Sources/img/tombe.png");
}

void bitmapCreateLogo(Dofus* dofus){
    dofus->tabBitmap[LOGO_DISPLAY] = al_load_bitmap("../Sources/img/dofus.png");
    dofus->tabBitmap[HALO] = al_load_bitmap("../Sources/img/halo.png");
}


void libererBitmapLogo(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[LOGO_DISPLAY]);
    al_destroy_bitmap(dofus->tabBitmap[HALO]);
}

void bitmapCreateHoverTileBlocPlein(Dofus* dofus){
    dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN] = al_load_bitmap("../Sources/img/imgHoverBlocPlein.png");
}

void libererBitmapHoverTileBlocPlein(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[IMG_HOVER_BLOC_PLEIN]);
}

void bitmapCreateSpriteHUD(Dofus* dofus){
    dofus->tabBitmap[SPRITE_HUD] = al_load_bitmap("../Sources/img/spriteHUDInGame.png");
    dofus->tabBitmap[GIF_FIRE] = al_load_bitmap("../Sources/img/gif/fire.png");
    dofus->tabBitmap[GIF_SWORD] = al_load_bitmap("../Sources/img/gif/sword.png");
    dofus->tabBitmap[GIF_WATER] = al_load_bitmap("../Sources/img/gif/water.png");
    dofus->tabBitmap[GIF_BOW] = al_load_bitmap("../Sources/img/gif/bow.png");
    assert(dofus->tabBitmap[GIF_SWORD]);
}

void bitmapCreateSpriteTile(Dofus* dofus){
    dofus->tabBitmap[SPRITE_MAP] = al_load_bitmap("../Sources/img/sprite4.png");
}

void bitmapSortsCreate(Dofus* dofus){
    dofus->tabBitmap[BITMAP_SORTS] = al_load_bitmap("../Sources/img/sorts4Classes.png");
}


void bitmapSpriteDecorCreate(Dofus* dofus){
    dofus->tabBitmap[SPRITE_DECOR] = al_load_bitmap("../Sources/img/spriteDecor.png");
}

void bitmapCreatePersonnagesEnJeu (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_PERSO_EN_JEU] = al_load_bitmap("../Sources/img/bitmap_perso_en_jeu.png");
}
void bitmapCreatePersonnagesClasse (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE] = al_load_bitmap("../Sources/img/bitmap_perso_pour_selection_classe.png");
}

void bitmapCreateNombreJoueur (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS] = al_load_bitmap("../Sources/img/Nombre_de_Joueurs/Choix_Nombre_Joueurs.png");
}

void bitmapCreateNomJoueur1 (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_NOM_JOUEUR_1] = al_load_bitmap("../Sources/img/Choix_du_nom/Choix_nom_joueur1.png");
}

void bitmapCreateNomJoueur2 (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_NOM_JOUEUR_2] = al_load_bitmap("../Sources/img/Choix_du_nom/Choix_nom_joueur2.png");
}

void bitmapCreatePageAide (Dofus* dofus) {
    dofus->tabBitmap[SPRITE_PAGE_AIDE] = al_load_bitmap("../Sources/img/PageAide.png");
}

void bitmapCreateClasseDecors (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_CLASSE_DECOR] = al_load_bitmap("../Sources/img/Caracteristique_classes/selection_classe.png");
    assert(dofus->tabBitmap[BITMAP_CLASSE_DECOR]);
}

void bitmapCreateBoutonValiderPL(Dofus* dofus){
    dofus->tabBitmap[BITMAP_BOUTON_VALIDER] = al_load_bitmap("../Sources/img/Bouton_Valider_PL.png");
}

void bitmapCreateNombreJoueurBouton (Dofus* dofus) {
    dofus->tabBitmap[BITMAP_GROS_BOUTON_VALIDER] = al_load_bitmap("../Sources/img/Nombre_de_Joueurs/Bouton_Valider_PL_Nb_Joueur.png");
}

void bitmapCreateSpriteIopAnim(Dofus* dofus){
    dofus->tabBitmap[SPRITE_IOP_ANIM] = al_load_bitmap("../Sources/img/sprite_iop_anim_mvmnt.png");
    dofus->tabBitmap[SPRITE_FECA_ANIM] = al_load_bitmap("../Sources/img/sprite_feca_anim.png");
    dofus->tabBitmap[SPRITE_ECA_ANIM] = al_load_bitmap("../Sources/img/sprite_eca_anim.png");
    dofus->tabBitmap[SPRITE_OSA_ANIM] = al_load_bitmap("../Sources/img/sprite_osa_anim.png");
}
void bitmapCreateFinDeGame(Dofus* dofus){
    dofus->tabBitmap[FIN_DE_GAME] = al_load_bitmap("../Sources/img/fin_de_game.png");
    assert(dofus->tabBitmap[FIN_DE_GAME]);
}



void libererBitmapIopMvmnt(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_IOP_ANIM]);
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_FECA_ANIM]);
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_ECA_ANIM]);
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_OSA_ANIM]);
}

void bitmapCreateTileChemin(Dofus* dofus){
    dofus->tabBitmap[TILE_CHEMIN] = al_load_bitmap("../Sources/img/tileChemin.png");
}

void bitmapCreateTileZoneSort(Dofus* dofus){
    dofus->tabBitmap[BITMAP_ZONE_DEGAT] = al_load_bitmap("../Sources/img/degat.png");
}

void libererBitmpaTileChemin(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[TILE_CHEMIN]);
}

void libererBitmapTileZoneSort(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_ZONE_DEGAT]);
}

void libererBitmapSpriteTile(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_MAP]);
}

void libererBitmapSpriteHUD(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_HUD]);
    al_destroy_bitmap(dofus->tabBitmap[GIF_FIRE]);
    al_destroy_bitmap(dofus->tabBitmap[GIF_SWORD]);
    al_destroy_bitmap(dofus->tabBitmap[GIF_WATER]);
    al_destroy_bitmap(dofus->tabBitmap[GIF_BOW]);
}

void libererBitmapLavaBg(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[LAVA_BG]);
    al_destroy_bitmap(dofus->tabBitmap[MENU_PRINCIPAL]);
    al_destroy_bitmap(dofus->tabBitmap[TOMBE]);
}

void libererBitmapSpriteDecor(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[SPRITE_DECOR]);
}

void libererBitmapSorts(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_SORTS]);
}

void libererBitmapPersonnagesEnJeu(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_PERSO_EN_JEU]);
}

void libererBitmapPersonnagesClasse(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE]);
}

void libererBitmapNombreJoueur(Dofus *dofus) {
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_NOMBRE_JOUEURS]);
}

void libererBitmapNomJoueur1 (Dofus *dofus) {
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_NOM_JOUEUR_1]);
}

void libererBitmapNomJoueur2 (Dofus *dofus) {
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_NOM_JOUEUR_2]);
}

void libererBitmapClasseDecors(Dofus *dofus) {
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_CLASSE_DECOR]);
}

void libererBitmapBoutonValider(Dofus *dofus) {
    al_destroy_bitmap(dofus->tabBitmap[BITMAP_BOUTON_VALIDER]);
}

void libererBitmapPageAide (Dofus* dofus) {
    dofus->tabBitmap[SPRITE_PAGE_AIDE] = al_load_bitmap("../Sources/img/PageAide.png");
}

void libererBitmapFinDeGame(Dofus* dofus){
    al_destroy_bitmap(dofus->tabBitmap[FIN_DE_GAME]);
}



void libererBitmapAll(Dofus* dofus){
    libererBitmapSpriteTile(dofus);
    libererBitmapSpriteDecor(dofus);
    libererBitmapSorts(dofus);
    libererBitmapLavaBg(dofus);
    libererBitmapPersonnagesEnJeu(dofus);
    libererBitmapPersonnagesClasse(dofus);
    libererBitmapNombreJoueur(dofus);
    libererBitmapNomJoueur1(dofus);
    libererBitmapNomJoueur2(dofus);
    libererBitmapClasseDecors(dofus);
    libererBitmapSpriteHUD(dofus);
    libererBitmapHoverTileBlocPlein(dofus);
    libererBitmapBoutonValider(dofus);
    libererBitmpaTileChemin(dofus);
    libererBitmapLogo(dofus);
    libererBitmapIopMvmnt(dofus);
    libererBitmapTileZoneSort(dofus);
    libererBitmapPageAide(dofus);
    libererBitmapFinDeGame(dofus);
}
