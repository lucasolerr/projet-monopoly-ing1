#include "pageAide.h"

void initBitmapPageAide(Dofus *dofus) {
    dofus->pages.pageAide.bitmap[PAGE_INITIAL].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteX = 0;
    dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteY = 0;
    dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[APPRENDRE].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[APPRENDRE].spriteX = 1280;
    dofus->pages.pageAide.bitmap[APPRENDRE].spriteY = 0;
    dofus->pages.pageAide.bitmap[APPRENDRE].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[APPRENDRE].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[CLASSES_IMAGE].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteX = 3840;
    dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteY = 0;
    dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[CLASSES].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[CLASSES].spriteX = 2560;
    dofus->pages.pageAide.bitmap[CLASSES].spriteY = 0;
    dofus->pages.pageAide.bitmap[CLASSES].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[CLASSES].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[REGLES].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[REGLES].spriteX = 5120;
    dofus->pages.pageAide.bitmap[REGLES].spriteY = 0;
    dofus->pages.pageAide.bitmap[REGLES].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[REGLES].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[DEPLACEMENT].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteX = 0;
    dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteY = 720;
    dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteX = 1280;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteY = 720;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteX = 2560;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteY = 720;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteX = 3840;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteY = 720;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteHauteur = 720;

    dofus->pages.pageAide.bitmap[DOMMAGE].image = &dofus->tabBitmap[SPRITE_PAGE_AIDE];
    dofus->pages.pageAide.bitmap[DOMMAGE].spriteX = 5120;
    dofus->pages.pageAide.bitmap[DOMMAGE].spriteY = 720;
    dofus->pages.pageAide.bitmap[DOMMAGE].spriteLargeur = 1280;
    dofus->pages.pageAide.bitmap[DOMMAGE].spriteHauteur = 720;
}

void dessinerAide (Dofus *dofus) {
    if (dofus->pages.menuPrincipal.aideClique == true){
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteX,
                              dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteY,
                              dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteLargeur,
                              dofus->pages.pageAide.bitmap[PAGE_INITIAL].spriteHauteur, 0, O, 0);
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
}

void detecterClicPageAide(Dofus *dofus) {
    if (APPRENDRE_A_JOUER_AIDE) {
        dofus->pages.pageAide.apprendrePageAide = true;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (REGLES_JEU_AIDE) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= true;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (CLASSES_AIDE) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = true;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (POSITION_CONTINUER_CLASSES_IMAGE){
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = true;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if ((LIRE_SUITE_1 || IMAGE_1) && dofus->pages.pageAide.apprendrePageAide) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = true;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if ((LIRE_SUITE_2 || IMAGE_2) && dofus->pages.pageAide.apprendrePageAide) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = true;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if ((LIRE_SUITE_3 || IMAGE_3) && dofus->pages.pageAide.apprendrePageAide) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = true;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = true;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.menuPrincipal.aideClique) {
        dofus->pages.menuPrincipal.aideClique = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.apprendrePageAide) {
        dofus->pages.menuPrincipal.aideClique = true;
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.continuerClassesImage) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = true;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.classesPageAide) {
        dofus->pages.menuPrincipal.aideClique = true;
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.regleJeuPageAide) {
        dofus->pages.menuPrincipal.aideClique = true;
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.lireSuite1) {
        dofus->pages.menuPrincipal.aideClique = true;
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.lireSuite2) {
        dofus->pages.menuPrincipal.aideClique = true;
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (FLECHE_RETOUR_AIDE && dofus->pages.pageAide.lireSuite3) {
        dofus->pages.menuPrincipal.aideClique = true;
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (COMMENCER_COMBAT) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = true;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (UTILISER_SORT) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = true;
        dofus->pages.pageAide.retourMenu = false;
    }
    if (REVENIR_AU_MENU) {
        dofus->pages.pageAide.apprendrePageAide = false;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = true;
    }
    if (POSITION_CONTINUER_REGLE_JEU && dofus->pages.pageAide.regleJeuPageAide) {
        dofus->pages.pageAide.apprendrePageAide = true;
        dofus->pages.pageAide.regleJeuPageAide= false;
        dofus->pages.pageAide.classesPageAide = false;
        dofus->pages.pageAide.continuerClassesImage = false;
        dofus->pages.pageAide.lireSuite1 = false;
        dofus->pages.pageAide.lireSuite2 = false;
        dofus->pages.pageAide.lireSuite3 = false;
        dofus->pages.pageAide.boolFlecheRetourPageAideInitial = false;
        dofus->pages.pageAide.lireSuiteCommencerCombat = false;
        dofus->pages.pageAide.lireSuiteUtiliserSorts = false;
        dofus->pages.pageAide.retourMenu = false;
    }
}
void dessinerLesAides (Dofus *dofus) {
    if (dofus->pages.pageAide.apprendrePageAide) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[APPRENDRE].spriteX,
                              dofus->pages.pageAide.bitmap[APPRENDRE].spriteY,
                              dofus->pages.pageAide.bitmap[APPRENDRE].spriteLargeur,
                              dofus->pages.pageAide.bitmap[APPRENDRE].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.regleJeuPageAide) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[REGLES].spriteX,
                              dofus->pages.pageAide.bitmap[REGLES].spriteY,
                              dofus->pages.pageAide.bitmap[REGLES].spriteLargeur,
                              dofus->pages.pageAide.bitmap[REGLES].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.classesPageAide) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteX,
                              dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteY,
                              dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteLargeur,
                              dofus->pages.pageAide.bitmap[CLASSES_IMAGE].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.continuerClassesImage) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[CLASSES].spriteX,
                              dofus->pages.pageAide.bitmap[CLASSES].spriteY,
                              dofus->pages.pageAide.bitmap[CLASSES].spriteLargeur,
                              dofus->pages.pageAide.bitmap[CLASSES].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.lireSuite1) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteX,
                              dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteY,
                              dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteLargeur,
                              dofus->pages.pageAide.bitmap[DEPLACEMENT].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.lireSuite2) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteX,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteY,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteLargeur,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_3].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.lireSuite3) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[DOMMAGE].spriteX,
                              dofus->pages.pageAide.bitmap[DOMMAGE].spriteY,
                              dofus->pages.pageAide.bitmap[DOMMAGE].spriteLargeur,
                              dofus->pages.pageAide.bitmap[DOMMAGE].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.boolFlecheRetourPageAideInitial) {
        dofus->pages.menuPrincipal.aideClique = false;
    }
    if (dofus->pages.pageAide.lireSuiteCommencerCombat) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteX,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteY,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteLargeur,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_1].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.lireSuiteUtiliserSorts) {
        al_draw_bitmap_region(*dofus->pages.pageAide.bitmap[SPRITE_PAGE_AIDE].image,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteX,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteY,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteLargeur,
                              dofus->pages.pageAide.bitmap[PREMIER_COMBAT_2].spriteHauteur, 0, O, 0);
    }
    if (dofus->pages.pageAide.retourMenu) {
        dofus->pages.menuPrincipal.aideClique = true;
    }
}

void bouclePageAide(Dofus *dofus) {
    while (!dofus->pages.menuPrincipal.aideClique) {
        dessinerAide(dofus);
        detecterClicPageAide(dofus);
        dessinerLesAides(dofus);
    }
}
