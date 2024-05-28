#include "selectionClasse.h"

void initBitmapPageChoixClasse(Dofus *dofus) {
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteX = 2560;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteY = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteX = 3840;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteY = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteX = 5120;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteY = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteX = 3840;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteY = 720;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteX = 5120;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteY = 720;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteX = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteY = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_FLECHE_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_FLECHE_HOOVER].spriteX = 2560;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_FLECHE_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_FLECHE_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_FLECHE_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteX = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteY = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_FLECHE_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_FLECHE_HOOVER].spriteX = 3840;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_FLECHE_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_FLECHE_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_FLECHE_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteX = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteY = 720;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_FLECHE_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_FLECHE_HOOVER].spriteX = 0;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_FLECHE_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_FLECHE_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_FLECHE_HOOVER].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteX = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteY = 720;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_FLECHE_HOOVER].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_FLECHE_HOOVER].spriteX = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_FLECHE_HOOVER].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_FLECHE_HOOVER].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_FLECHE_HOOVER].spriteHauteur = 720;

    // CLASSES DISPONIBLE OU NON
    dofus->pages.pageChoixClasses.image[IOP_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[IOP_OCCUPE].spriteX = 6400;
    dofus->pages.pageChoixClasses.image[IOP_OCCUPE].spriteY = 0;
    dofus->pages.pageChoixClasses.image[IOP_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[IOP_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[FECA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[FECA_OCCUPE].spriteX = 7680;
    dofus->pages.pageChoixClasses.image[FECA_OCCUPE].spriteY = 0;
    dofus->pages.pageChoixClasses.image[FECA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[FECA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[ECA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[ECA_OCCUPE].spriteX = 8960;
    dofus->pages.pageChoixClasses.image[ECA_OCCUPE].spriteY = 0;
    dofus->pages.pageChoixClasses.image[ECA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[ECA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[OSA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[OSA_OCCUPE].spriteX = 10240;
    dofus->pages.pageChoixClasses.image[OSA_OCCUPE].spriteY = 0;
    dofus->pages.pageChoixClasses.image[OSA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[OSA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[IOP_FECA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[IOP_FECA_OCCUPE].spriteX = 6400;
    dofus->pages.pageChoixClasses.image[IOP_FECA_OCCUPE].spriteY = 720;
    dofus->pages.pageChoixClasses.image[IOP_FECA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[IOP_FECA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[IOP_ECA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[IOP_ECA_OCCUPE].spriteX = 7680;
    dofus->pages.pageChoixClasses.image[IOP_ECA_OCCUPE].spriteY = 720;
    dofus->pages.pageChoixClasses.image[IOP_ECA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[IOP_ECA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[FECA_OSA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[FECA_OSA_OCCUPE].spriteX = 8960;
    dofus->pages.pageChoixClasses.image[FECA_OSA_OCCUPE].spriteY = 720;
    dofus->pages.pageChoixClasses.image[FECA_OSA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[FECA_OSA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[ECA_OSA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[ECA_OSA_OCCUPE].spriteX = 10240;
    dofus->pages.pageChoixClasses.image[ECA_OSA_OCCUPE].spriteY = 720;
    dofus->pages.pageChoixClasses.image[ECA_OSA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[ECA_OSA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[ECA_DISPO].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[ECA_DISPO].spriteX = 11520;
    dofus->pages.pageChoixClasses.image[ECA_DISPO].spriteY = 720;
    dofus->pages.pageChoixClasses.image[ECA_DISPO].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[ECA_DISPO].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[IOP_OSA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[IOP_OSA_OCCUPE].spriteX = 6400;
    dofus->pages.pageChoixClasses.image[IOP_OSA_OCCUPE].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[IOP_OSA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[IOP_OSA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[FECA_ECA_OCCUPE].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[FECA_ECA_OCCUPE].spriteX = 7680;
    dofus->pages.pageChoixClasses.image[FECA_ECA_OCCUPE].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[FECA_ECA_OCCUPE].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[FECA_ECA_OCCUPE].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[IOP_DISPO].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[IOP_DISPO].spriteX = 8960;
    dofus->pages.pageChoixClasses.image[IOP_DISPO].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[IOP_DISPO].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[IOP_DISPO].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[FECA_DISPO].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[FECA_DISPO].spriteX = 10240;
    dofus->pages.pageChoixClasses.image[FECA_DISPO].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[FECA_DISPO].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[FECA_DISPO].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.image[OSA_DISPO].image = &dofus->tabBitmap[BITMAP_CLASSE_DECOR];
    dofus->pages.pageChoixClasses.image[OSA_DISPO].spriteX = 11520;
    dofus->pages.pageChoixClasses.image[OSA_DISPO].spriteY = 1440;
    dofus->pages.pageChoixClasses.image[OSA_DISPO].spriteLargeur = 1280;
    dofus->pages.pageChoixClasses.image[OSA_DISPO].spriteHauteur = 720;

    dofus->pages.pageChoixClasses.compteur = 2;
}

void initBitmapPersoIopSelectionClasse(Dofus *dofus) {
    dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX = 885;
    dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur = 160;
    dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur = 335;

    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX = 500;
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 150;
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 335;

    dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX = 130;
    dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur = 130;
    dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur = 335;

    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX = 2850;
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 135;
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 330;

    dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX = 2457;
    dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur = 165;
    dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur = 320;

    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 2088;
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 134;
    dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 330;

    dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX = 1690;
    dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur = 130;
    dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur = 330;

    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE];
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 1295;
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 0;
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 145;
    dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 335;
}
void initBitmapPersoFecaSelectionClasse(Dofus *dofus) {
    dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX = 906;
    dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur = 125;
    dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX = 484;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 152;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX = 96;
    dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur = 168;
    dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX = 2840;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 144;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX = 2467;
    dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur = 128;
    dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 2079;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 143;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX = 1677;
    dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur = 168;
    dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur = 335;

    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 1294;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 385;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 161;
    dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 335;
}
void initBitmapPersoEcaSelectionClasse(Dofus *dofus) {
    dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX = 912;
    dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur = 125;
    dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX = 507;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 137;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX = 117;
    dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur = 145;
    dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX = 2855;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 130;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX = 2470;
    dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur = 130;
    dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 2075;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 130;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX = 1685;
    dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur = 140;
    dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur = 300;

    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 1300;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 800;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 135;
    dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 300;
}
void initBitmapPersoOsaSelectionClasse(Dofus *dofus) {
    dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX = 895;
    dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur = 145;
    dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX = 498;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur = 145;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX = 104;
    dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur = 150;
    dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX = 2842;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur = 135;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX = 2462;
    dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur = 140;
    dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX = 2080;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur = 140;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX = 1690;
    dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur = 145;
    dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur = 310;

    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].image = &dofus->tabBitmap[BITMAP_PERSO_EN_JEU];
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX = 1300;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY = 1185;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur = 145;
    dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur = 310;
}

void initBitmapPersoSelectionClasseALL(Dofus *dofus) {
    initBitmapPersoIopSelectionClasse(dofus);
    initBitmapPersoFecaSelectionClasse(dofus);
    initBitmapPersoEcaSelectionClasse(dofus);
    initBitmapPersoOsaSelectionClasse(dofus);
}

void dessinerIopFaceSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur,
                          x, y, 0);
}
void dessinerIopMiFaceDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerIopDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerIopMiDosDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerIopDosSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur,
                          x, y, 0);
}
void dessinerIopMiDosGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerIopGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerIopMiFaceGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur,
                          dofus->tabClasseIopSelectionClasse[IOP_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur,
                          x, y, 0);
}

void dessinerFecaFaceSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaMiFaceDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaMiDosDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaDosSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaMiDosGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerFecaMiFaceGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur,
                          dofus->tabClasseFecaSelectionClasse[FECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur,
                          x, y, 0);
}

void dessinerEcaFaceSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaMiFaceDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaMiDosDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaDosSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaMiDosGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerEcaMiFaceGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur,
                          dofus->tabClasseEcaSelectionClasse[ECA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur,
                          x, y, 0);
}

void dessinerOsaFaceSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_FACE_SELECTION_CLASSE].skin[SPRITE_FACE].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaMiFaceDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_DROITE_SELECTION_CLASSE].skin[SPRITE_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaMiDosDroiteSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_DROITE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_DROITE].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaDosSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_DOS_SELECTION_CLASSE].skin[SPRITE_DOS].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaMiDosGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_DOS_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_DOS_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_GAUCHE_SELECTION_CLASSE].skin[SPRITE_GAUCHE].spriteHauteur,
                          x, y, 0);
}
void dessinerOsaMiFaceGaucheSelectionClasse(Dofus *dofus, int x, int y) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_PERSO_SELECTION_CLASSE],
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteX,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteY,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteLargeur,
                          dofus->tabClasseOsaSelectionClasse[OSA_MI_FACE_GAUCHE_SELECTION_CLASSE].skin[SPRITE_MI_FACE_GAUCHE].spriteHauteur,
                          x, y, 0);
}

void initBitmapClasse(Dofus *dofus) {
    initBitmapPageChoixClasse(dofus);
    initBitmapPersoSelectionClasseALL(dofus);
}

void dessinerClassesHoover(Dofus *dofus) {
    if (POSITION_SOURIS_CLASSE_IOP && dofus->pages.pageChoixClasses.boolCliqueClasseIop == false &&
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca == false &&
        dofus->pages.pageChoixClasses.boolCliqueClasseEca == false &&
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteX,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteY,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (POSITION_SOURIS_CLASSE_FECA && dofus->pages.pageChoixClasses.boolCliqueClasseIop == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseFeca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseEca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseOsa == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteX,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteY,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (POSITION_SOURIS_CLASSE_ECA && dofus->pages.pageChoixClasses.boolCliqueClasseIop == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseFeca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseEca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseOsa == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteX,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteY,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (POSITION_SOURIS_CLASSE_OSA && dofus->pages.pageChoixClasses.boolCliqueClasseIop == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseFeca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseEca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseOsa == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteX,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteY,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteLargeur,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA_HOOVER].spriteHauteur,
                              0, 0, 0);
    } else if (dofus->pages.pageChoixClasses.boolCliqueClasseIop == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseFeca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseEca == false &&
               dofus->pages.pageChoixClasses.boolCliqueClasseOsa == false &&
               dofus->pages.pageChoixClasses.choixEffectuer == false) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteX,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteY,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteLargeur,
                              dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ALL].spriteHauteur, 0, 0, 0);
    }
}

void switchCaseDessinerIopPlusieursFaces (Dofus *dofus) {
    switch (dofus->pages.pageChoixClasses.compteur) {
        case 1 : {
            dessinerIopMiFaceGaucheSelectionClasse(dofus, 140, 70);
            break;
        }
        case 2 : {
            dessinerIopFaceSelectionClasse(dofus, 133, 70);
            break;
        }
        case 3 : {
            dessinerIopMiFaceDroiteSelectionClasse(dofus, 140, 70);
            break;
        }
        case 4 : {
            dessinerIopDroiteSelectionClasse(dofus, 148, 70);
            break;
        }
        case 5 : {
            dessinerIopMiDosDroiteSelectionClasse(dofus, 140, 70);
            break;
        }
        case 6 : {
            dessinerIopDosSelectionClasse(dofus, 133, 70);
            break;
        }
        case 7 : {
            dessinerIopMiDosGaucheSelectionClasse(dofus, 140, 70);
            break;
        }
        case 0 : {
            dessinerIopGaucheSelectionClasse(dofus, 148, 70);
            break;
        }
    }
}
void detecterCliqueFlecheDroiteIop (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true){
        POSITION_FLECHE_DROITE_CASSE_IOP;
        if (POSITION_FLECHE_DROITE_CASSE_IOP && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur++;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    }
    if (dofus->pages.pageChoixClasses.compteur > 7) {
        dofus->pages.pageChoixClasses.compteur = 0;
    }
}
void detecterCliqueFlecheGaucheIop (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_GAUCHE_CASSE_IOP && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur--;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->pages.pageChoixClasses.compteur < 0) {
            dofus->pages.pageChoixClasses.compteur = 7;
        }
    }
}
void afficherClasseIop (Dofus *dofus) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteX,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteY,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteLargeur,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_IOP].spriteHauteur, 0, 0, 0);
    switchCaseDessinerIopPlusieursFaces(dofus);
    detecterCliqueFlecheDroiteIop(dofus);
    detecterCliqueFlecheGaucheIop(dofus);
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                          1160, 20, 0);
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 && (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        dofus->joueurActif->ptrClasse = &dofus->classes[IOP];
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
        dofus->pages.pagePlacementLibre.boolPagePlacementLibre = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = false;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}

void switchCaseDessinerFecaPlusieursFaces (Dofus *dofus) {
    switch (dofus->pages.pageChoixClasses.compteur) {
        case 1 : {
            dessinerFecaMiFaceGaucheSelectionClasse(dofus, 155, 70);
            break;
        }
        case 2 : {
            dessinerFecaFaceSelectionClasse(dofus, 155, 70);
            break;
        }
        case 3 : {
            dessinerFecaMiFaceDroiteSelectionClasse(dofus, 120, 70);
            break;
        }
        case 4 : {
            dessinerFecaDroiteSelectionClasse(dofus, 120, 70);
            break;
        }
        case 5 : {
            dessinerFecaMiDosDroiteSelectionClasse(dofus, 155, 70);
            break;
        }
        case 6 : {
            dessinerFecaDosSelectionClasse(dofus, 155, 70);
            break;
        }
        case 7 : {
            dessinerFecaMiDosGaucheSelectionClasse(dofus, 155, 70);
            break;
        }
        case 0 : {
            dessinerFecaGaucheSelectionClasse(dofus, 155, 70);
            break;
        }
    }
}
void detecterCliqueFlecheDroiteFeca (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_DROITE_CASSE_FECA && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur++;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    }
    if (dofus->pages.pageChoixClasses.compteur > 7) {
        dofus->pages.pageChoixClasses.compteur = 0;
    }
}
void detecterCliqueFlecheGaucheFeca (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_GAUCHE_CASSE_FECA && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur--;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->pages.pageChoixClasses.compteur < 0) {
            dofus->pages.pageChoixClasses.compteur = 7;
        }
    }
}
void afficherClasseFeca (Dofus *dofus) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteX,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteY,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteLargeur,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_FECA].spriteHauteur, 0, 0,
                          0);
    switchCaseDessinerFecaPlusieursFaces(dofus);
    detecterCliqueFlecheDroiteFeca(dofus);
    detecterCliqueFlecheGaucheFeca(dofus);
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                          1160, 20, 0);
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 && (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        dofus->joueurActif->ptrClasse = &dofus->classes[FECA];
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
        dofus->pages.pagePlacementLibre.boolPagePlacementLibre = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = false;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}

void switchCaseDessinerEcaPlusieursFaces (Dofus *dofus) {
    switch (dofus->pages.pageChoixClasses.compteur) {
        case 1 : {
            dessinerEcaMiFaceGaucheSelectionClasse(dofus, 150, 70);
            break;
        }
        case 2 : {
            dessinerEcaFaceSelectionClasse(dofus, 150, 70);
            break;
        }
        case 3 : {
            dessinerEcaMiFaceDroiteSelectionClasse(dofus, 140, 70);
            break;
        }
        case 4 : {
            dessinerEcaDroiteSelectionClasse(dofus, 140, 70);
            break;
        }
        case 5 : {
            dessinerEcaMiDosDroiteSelectionClasse(dofus, 150, 70);
            break;
        }
        case 6 : {
            dessinerEcaDosSelectionClasse(dofus, 150, 70);
            break;
        }
        case 7 : {
            dessinerEcaMiDosGaucheSelectionClasse(dofus, 150, 70);
            break;
        }
        case 0 : {
            dessinerEcaGaucheSelectionClasse(dofus, 150, 70);
            break;
        }
    }
}
void detecterCliqueFlecheDroiteEca (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_DROITE_CASSE_ECA && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur++;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    }
    if (dofus->pages.pageChoixClasses.compteur > 7) {
        dofus->pages.pageChoixClasses.compteur = 0;
    }
}
void detecterCliqueFlecheGaucheEca (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_GAUCHE_CASSE_ECA && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur--;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->pages.pageChoixClasses.compteur < 0) {
            dofus->pages.pageChoixClasses.compteur = 7;
        }
    }
}
void afficherClasseEca (Dofus *dofus) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteX,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteY,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteLargeur,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_ECA].spriteHauteur, 0, 0,
                          0);
    switchCaseDessinerEcaPlusieursFaces(dofus);
    detecterCliqueFlecheDroiteEca(dofus);
    detecterCliqueFlecheGaucheEca(dofus);
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                          1160, 20, 0);
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 && (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        dofus->joueurActif->ptrClasse = &dofus->classes[ECA];
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
        dofus->pages.pagePlacementLibre.boolPagePlacementLibre = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = false;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}

void switchCaseDessinerOsaPlusieursFaces (Dofus *dofus) {
    switch (dofus->pages.pageChoixClasses.compteur) {
        case 1 : {
            dessinerOsaMiFaceGaucheSelectionClasse(dofus, 165, 70);
            break;
        }
        case 2 : {
            dessinerOsaFaceSelectionClasse(dofus, 133, 70);
            break;
        }
        case 3 : {
            dessinerOsaMiFaceDroiteSelectionClasse(dofus, 133, 70);
            break;
        }
        case 4 : {
            dessinerOsaDroiteSelectionClasse(dofus, 133, 70);
            break;
        }
        case 5 : {
            dessinerOsaMiDosDroiteSelectionClasse(dofus, 155, 70);
            break;
        }
        case 6 : {
            dessinerOsaDosSelectionClasse(dofus, 155, 70);
            break;
        }
        case 7 : {
            dessinerOsaMiDosGaucheSelectionClasse(dofus, 155, 70);
            break;
        }
        case 0 : {
            dessinerOsaGaucheSelectionClasse(dofus, 173, 70);
            break;
        }
    }
}
void detecterCliqueFlecheDroiteOsa (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_DROITE_CASSE_OSA && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur++;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
    }
    if (dofus->pages.pageChoixClasses.compteur > 7) {
        dofus->pages.pageChoixClasses.compteur = 0;
    }
}
void detecterCliqueFlecheGaucheOsa (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.choixEffectuer == true) {
        if (POSITION_FLECHE_GAUCHE_CASSE_OSA && dofus->allegro.etatBoutonSouris == 1) {
            dofus->pages.pageChoixClasses.compteur--;
            al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
        }
        if (dofus->pages.pageChoixClasses.compteur < 0) {
            dofus->pages.pageChoixClasses.compteur = 7;
        }
    }
}
void afficherClasseOsa (Dofus *dofus) {
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_CLASSE_DECOR],
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteX,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteY,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteLargeur,
                          dofus->pages.pageChoixClasses.image[CHOIX_CLASSE_OSA].spriteHauteur, 0, 0,
                          0);
    switchCaseDessinerOsaPlusieursFaces(dofus);
    detecterCliqueFlecheDroiteOsa(dofus);
    detecterCliqueFlecheGaucheOsa(dofus);
    al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteX,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteY,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteLargeur,
                          dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_1].spriteHauteur,
                          1160, 20, 0);
    if (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_2].spriteHauteur,
                              1162, 20, 0);
    }
    if (dofus->allegro.etatBoutonSouris == 1 && (dofus->allegro.coordonneesSourisX > 1160 && dofus->allegro.coordonneesSourisX < 1255 && dofus->allegro.coordonneesSourisY > 20 && dofus->allegro.coordonneesSourisY < 115)) {
        al_draw_bitmap_region(dofus->tabBitmap[BITMAP_BOUTON_VALIDER],
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteX,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteY,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteLargeur,
                              dofus->pages.pageNombreJoueurSelection.bouton[BOUTON_VALIDER_3].spriteHauteur,
                              1162, 20, 0);
        dofus->joueurActif->ptrClasse = &dofus->classes[OSA];
        dofus->pages.pageChoixClasses.boolPageSelectionClasses = true;
        dofus->pages.pagePlacementLibre.boolPagePlacementLibre = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = false;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}

void detecterFlecheRetourCliquerSelectionClasse (Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_FLECHE_RETOUR_SELECTION_CLASSE && dofus->pages.pageChoixClasses.choixEffectuer == true) {
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = false;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->pages.pageChoixClasses.compteur = 2;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}

void detecterCliqueSurClasseIop (Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_SOURIS_CLASSE_IOP && dofus->pages.pageChoixClasses.choixEffectuer == false) {
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = true;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = true;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}
void dessinerClasseIopApresClique (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.boolCliqueClasseIop == 1) {
        dofus->interactionExterieure.mouse.clic = 0;
        afficherClasseIop(dofus);
    }
}

void detecterCliqueSurClasseFeca (Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_SOURIS_CLASSE_FECA && dofus->pages.pageChoixClasses.choixEffectuer == false) {
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = true;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = true;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}
void dessinerClasseFecaApresClique (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.boolCliqueClasseFeca == true) {
        dofus->interactionExterieure.mouse.clic = 0;
        afficherClasseFeca(dofus);
    }
}

void detecterCliqueSurClasseEca (Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_SOURIS_CLASSE_ECA && dofus->pages.pageChoixClasses.choixEffectuer == false) {
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = true;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = false;
        dofus->pages.pageChoixClasses.choixEffectuer = true;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}
void dessinerClasseEcaApresClique (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.boolCliqueClasseEca == 1) {
        dofus->interactionExterieure.mouse.clic = 0;
        afficherClasseEca(dofus);
    }
}

void detecterCliqueSurClasseOsa (Dofus *dofus) {
    if (dofus->allegro.etatBoutonSouris == 1 && POSITION_SOURIS_CLASSE_OSA && dofus->pages.pageChoixClasses.choixEffectuer == false) {
        dofus->pages.pageChoixClasses.boolCliqueClasseIop = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseFeca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseEca = false;
        dofus->pages.pageChoixClasses.boolCliqueClasseOsa = true;
        dofus->pages.pageChoixClasses.choixEffectuer = true;
        dofus->pages.pageChoixClasses.boolFlecheRetour = false;
        dofus->allegro.etatBoutonSouris = 0;
        al_play_sample(dofus->allegro.music[SON_BOUTTON],1,0,1,ALLEGRO_PLAYMODE_ONCE,0);
    }
}
void dessinerClasseOsaApresClique (Dofus *dofus) {
    if (dofus->pages.pageChoixClasses.boolCliqueClasseOsa == 1) {
        dofus->interactionExterieure.mouse.clic = 0;
        afficherClasseOsa(dofus);
    }
}

void dessinerEtChoisirClasseJoueurs(Dofus *dofus){
    dessinerClassesHoover(dofus);
    detecterFlecheRetourCliquerSelectionClasse(dofus);

    detecterCliqueSurClasseIop(dofus);
    dessinerClasseIopApresClique(dofus);

    detecterCliqueSurClasseFeca(dofus);
    dessinerClasseFecaApresClique(dofus);

    detecterCliqueSurClasseEca(dofus);
    dessinerClasseEcaApresClique(dofus);

    detecterCliqueSurClasseOsa(dofus);
    dessinerClasseOsaApresClique(dofus);

}




