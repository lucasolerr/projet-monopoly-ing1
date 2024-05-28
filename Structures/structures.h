#ifndef ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_STRUCTURES_H
#define ING1_PROJET_2021_22_DOFUS_ARENA_EQUIPE_X_1_STRUCTURES_H

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_audio.h>

#define NBCELLULEX 13 //const pour la map
#define NBCELLULEY 13 //const pour la map

#define SCREEN_LARGEUR 1280 //const taille écran large
#define SCREEN_HAUTEUR 720 //const taille écran haut

#define NBSPRITEWATER 18


#define BLANC al_map_rgb(255, 255, 255)
#define NOIR al_map_rgb(0, 0, 0)
#define GRIS_FONCE al_map_rgb(50, 50, 50)
#define ROUGE al_map_rgb(255, 0, 0)
#define ORANGE al_map_rgb(240, 147, 61)
#define VERT al_map_rgb(0, 255, 0)
#define GRIS al_map_rgb(70, 70, 70)

//enum pour accéder facilement aux indices de tableaux en passant par des noms directement
//mais avoir la possibilité de free ou parcourir avec boucle for
enum FONTS {INTER_20PX, AMARANTE_20PX, AMARANTE_40PX, NB_FONTS};
enum TOUCHES { TAB, T1, T2, T3, T4, T5, T6, T7, T8, T9, A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, ECHAP, ENTREE, NB_TOUCHES};
enum BOUTON_MENU_PRINCIPAL {BOUTON_LANCER_PARTIE, BOUTON_AIDE, BOUTON_PARAMETRE, BOUTON_QUITTER, BOUTON_FLECHE_PERSO_NEXT, BOUTON_FLECHE_PERSO_PREV, BOUTON_FERMER, NB_BOUTONS_MENU_PRINCIPAL };
enum BOUTON_PAGE_CHOIX_PERSO {NB_BOUTONS_CHOIX_PERSO};
enum PAGES {MENU, PAGE_CHOIX_CLASSES, NB_PAGES}; //à compléter
enum CLASSES {IOP, FECA, OSA, ECA, NB_CLASSES};
enum SONS {SON_MENU_PRINCIPAL, SON_COMBAT, SON_BOUTTON, SON_DAMAGE, FOOTSTEPS, SOVA, WATER, FIRE, FLASHBANG, NB_SONS};
enum BITMAP{SPRITE_MAP, TOMBE, MENU_PRINCIPAL, GIF_SWORD, SPRITE_PAGE_AIDE, GIF_BOW, GIF_WATER, GIF_FIRE, SPRITE_IOP_ANIM, SPRITE_FECA_ANIM, SPRITE_ECA_ANIM, SPRITE_OSA_ANIM, HALO, LOGO_DISPLAY, TILE_CHEMIN, IMG_HOVER_BLOC_PLEIN,SPRITE_HUD, LAVA_BG, SPRITE_DECOR, BITMAP_SORTS, BITMAP_DEGAT_SORTS, BITMAP_PERSO_EN_JEU, BITMAP_PERSO_SELECTION_CLASSE, BITMAP_NOM_JOUEUR_1, BITMAP_NOM_JOUEUR_2, BITMAP_NOMBRE_JOUEURS, BITMAP_CLASSE_DECOR, BITMAP_BOUTON_VALIDER, BITMAP_GROS_BOUTON_VALIDER,BITMAP_ZONE_DEGAT, FIN_DE_GAME ,NB_BITMAP};

enum SPRITE_MAP {CHEAT, HOVER, CONTOUR, BASIC, BLOC_VOLANT, BLOC_FACE_DROITE_CUT,
        BLOC_PIC, BLOC_LAVE_GAUCHE, BLOC_BACK_PLAT, BLOC_FACE_PLAT, BLOC_LAVE_DROITE,
        BLOC_LAVE_CERCLE, BLOC_GAUCHE_PLAT, BLOC_IMMER_LAVE_BIG, BLOC_IMMER_LAVE_SMALL,
        BLOC_IMMER_LAVE_SMALL2, BLOC_LAVE_DROITE2, BLOC_LONG, BLOC_CUT_FACE_DROITE,
        BLOC_LAVE_GAUCHE_2, BLOC_GRAND, BLOC_POINTE, BLOC_LAVE_AUTOUR,
        NB_SPRITES_MAP}; //enum du tab struct Bitmap pour le sprite de la map

enum SPRITE_SORT{SPRITE_PRESSION,SPRITE_CONCENTRATION ,SPRITE_EPEE ,SPRITE_INTIMIDATION,SPRITE_SOUFFLE,SPRITE_BOND,
        SPRITE_GLYPHE , SPRITE_TENSION, SPRITE_BULLE, SPRITE_NUAGE, SPRITE_AVEUGLEMENT,
        SPRITE_BASTION,SPRITE_DEVORANTE, SPRITE_MAGIQUE, SPRITE_RECUL, SPRITE_HARCELANTE, SPRITE_DISPE,
        SPRITE_CINGLANTE, SPRITE_TOPKAJ, SPRITE_COUSSINET, SPRITE_LANGUE, SPRITE_BOND_FELIN, SPRITE_ODORAT,
        SPRITE_CONTRECOUP,NB_SPRITES_SORT};


enum SPRITE_CLASSE { SPRITE_FACE, SPRITE_MI_FACE_DROITE,
        SPRITE_DROITE, SPRITE_MI_DOS_DROITE, SPRITE_DOS,
        SPRITE_MI_DOS_GAUCHE, SPRITE_GAUCHE, SPRITE_MI_FACE_GAUCHE,
        NB_SPRITE_CLASSES };

enum IOP_SORTS { PRESSION, CONCENTRATION, EPEE, INTIMIDATION, SOUFFLE, BOND ,NB_SORTS_IOP};
enum FECA_SORTS { GLYPHE , TENSION, BULLE, NUAGE, AVEUGLEMENT, BASTION ,NB_SORTS_FECA};
enum OSA_SORTS { DEVORANTE, MAGIQUE, RECUL, HARCELANTE, DISPE, CINGLANTE,NB_SORTS_OSA};
enum ECA_SORTS { TOPKAJ, COUSSINET, LANGUE, BOND_FELIN, ODORAT, CONTRECOUP ,NB_SORTS_ECA};

enum IOP_CLASSES_EN_JEU { IOP_FACE_EN_JEU, IOP_MI_FACE_DROITE_EN_JEU, IOP_DROITE_EN_JEU, IOP_MI_DOS_DROITE_EN_JEU,
        IOP_DOS_EN_JEU, IOP_MI_DOS_GAUCHE_EN_JEU, IOP_GAUCHE_EN_JEU, IOP_MI_FACE_GAUCHE_EN_JEU, NB_CLASSES_POSITION_IOP_EN_JEU};
enum IOP_CLASSES_SELECTION_CLASSE { IOP_FACE_SELECTION_CLASSE, IOP_MI_FACE_DROITE_SELECTION_CLASSE, IOP_DROITE_SELECTION_CLASSE, IOP_MI_DOS_DROITE_SELECTION_CLASSE,
        IOP_DOS_SELECTION_CLASSE, IOP_MI_DOS_GAUCHE_SELECTION_CLASSE, IOP_GAUCHE_SELECTION_CLASSE, IOP_MI_FACE_GAUCHE_SELECTION_CLASSE, NB_CLASSES_POSITION_IOP_SELECTION_CLASSE};

enum FECA_CLASSES_EN_JEU { FECA_FACE_EN_JEU, FECA_MI_FACE_DROITE_EN_JEU, FECA_DROITE_EN_JEU, FECA_MI_DOS_DROITE_EN_JEU,
        FECA_DOS_EN_JEU, FECA_MI_DOS_GAUCHE_EN_JEU, FECA_GAUCHE_EN_JEU, FECA_MI_FACE_GAUCHE_EN_JEU, NB_CLASSES_POSITION_FECA_EN_JEU};
enum FECA_CLASSES_SELECTION_CLASSE { FECA_FACE_SELECTION_CLASSE, FECA_MI_FACE_DROITE_SELECTION_CLASSE, FECA_DROITE_SELECTION_CLASSE, FECA_MI_DOS_DROITE_SELECTION_CLASSE,
        FECA_DOS_SELECTION_CLASSE, FECA_MI_DOS_GAUCHE_SELECTION_CLASSE, FECA_GAUCHE_SELECTION_CLASSE, FECA_MI_FACE_GAUCHE_SELECTION_CLASSE, NB_CLASSES_POSITION_FECA_SELECTION_CLASSE};

enum OSA_CLASSES_EN_JEU { OSA_FACE_EN_JEU, OSA_MI_FACE_DROITE_EN_JEU, OSA_DROITE_EN_JEU, OSA_MI_DOS_DROITE_EN_JEU, OSA_DOS_EN_JEU,
        OSA_MI_DOS_GAUCHE_EN_JEU, OSA_GAUCHE_EN_JEU, OSA_MI_FACE_GAUCHE_EN_JEU, NB_CLASSES_POSITION_OSA_EN_JEU};
enum OSA_CLASSES_SELECTION_CLASSE { OSA_FACE_SELECTION_CLASSE, OSA_MI_FACE_DROITE_SELECTION_CLASSE, OSA_DROITE_SELECTION_CLASSE, OSA_MI_DOS_DROITE_SELECTION_CLASSE, OSA_DOS_SELECTION_CLASSE,
        OSA_MI_DOS_GAUCHE_SELECTION_CLASSE, OSA_GAUCHE_SELECTION_CLASSE, OSA_MI_FACE_GAUCHE_SELECTION_CLASSE, NB_CLASSES_POSITION_OSA_SELECTION_CLASSE};

enum ECA_CLASSES_EN_JEU { ECA_FACE_EN_JEU, ECA_MI_FACE_DROITE_EN_JEU, ECA_DROITE_EN_JEU, ECA_MI_DOS_DROITE_EN_JEU, ECA_DOS_EN_JEU,
        ECA_MI_DOS_GAUCHE_EN_JEU, ECA_GAUCHE_EN_JEU, ECA_MI_FACE_GAUCHE_EN_JEU, NB_CLASSES_POSITION_ECA_EN_JEU};
enum ECA_CLASSES_SELECTION_CLASSE { ECA_FACE_SELECTION_CLASSE, ECA_MI_FACE_DROITE_SELECTION_CLASSE, ECA_DROITE_SELECTION_CLASSE, ECA_MI_DOS_DROITE_SELECTION_CLASSE, ECA_DOS_SELECTION_CLASSE,
        ECA_MI_DOS_GAUCHE_SELECTION_CLASSE, ECA_GAUCHE_SELECTION_CLASSE, ECA_MI_FACE_GAUCHE_SELECTION_CLASSE, NB_CLASSES_POSITION_ECA_SELECTION_CLASSE};

enum SPRITE_NOMBRE_JOUEUR { NOMBRE_JOUEURS_ALL, NOMBRE_JOUEURS_DEUX_HOOVER, NOMBRE_JOUEURS_DEUX,
        NOMBRE_JOUEURS_TROIS_HOOVER, NOMBRE_JOUEURS_TROIS, NOMBRE_JOUEURS_QUATRE_HOOVER,
        NOMBRE_JOUEURS_QUATRE, NB_BITMAP_NOMBRE_JOUEURS };
enum BOUTON_VALIDER { BOUTON_VALIDER_1, BOUTON_VALIDER_2, BOUTON_VALIDER_2_GROS, BOUTON_VALIDER_3, BOUTON_VALIDER_3_GROS, NB_BOUTON_VALIDER};

enum NOM_JOUEURS_BITMAP1 { NOM_JOUEUR_SAISIR_NOM_MI_HOOVER, NOM_JOUEUR_SAISIR_NOM, NOM_JOUEUR_ALL,
        NOM_JOUEUR_UN_HOOVER, NOM_JOUEUR_TROIS, NOM_JOUEUR_TROIS_HOOVER, NOM_JOUEUR_QUATRE_HOOVER, NOM_JOUEUR_QUATRE,
        NOM_JOUEUR_SIX, NOM_JOUEUR_SEPT_HOOVER, NOM_JOUEUR_SEPT, NOM_JOUEUR_HUIT_HOOVER, NB_BITMAP_NOM_JOUEUR_1 };
enum NOM_JOUEURS_BITMAP2 { NOM_JOUEUR_UN, NOM_JOUEUR_DEUX_HOOVER, NOM_JOUEUR_DEUX,
        NOM_JOUEUR_CINQ_HOOVER, NOM_JOUEUR_CINQ, NOM_JOUEUR_SIX_HOOVER, NOM_JOUEUR_HUIT,
        NOM_JOUEUR_NEUF_HOOVER, NOM_JOUEUR_NEUF, NB_BITMAP_NOM_JOUEUR_2 };


enum SPRITE_PAGE_AIDE {
    PAGE_INITIAL, APPRENDRE, CLASSES_IMAGE, CLASSES, REGLES, DEPLACEMENT,
    PREMIER_COMBAT_1, PREMIER_COMBAT_2, PREMIER_COMBAT_3, DOMMAGE, NB_SPRITE_AIDE};

enum BITMAP_CHOIX_CLASSE { CHOIX_CLASSE_ALL, CHOIX_CLASSE_IOP, CHOIX_CLASSE_IOP_FLECHE_HOOVER, CHOIX_CLASSE_IOP_HOOVER,
        CHOIX_CLASSE_FECA, CHOIX_CLASSE_FECA_FLECHE_HOOVER, CHOIX_CLASSE_FECA_HOOVER,
        CHOIX_CLASSE_ECA, CHOIX_CLASSE_ECA_FLECHE_HOOVER, CHOIX_CLASSE_ECA_HOOVER,
        CHOIX_CLASSE_OSA, CHOIX_CLASSE_OSA_FLECHE_HOOVER, CHOIX_CLASSE_OSA_HOOVER,
        IOP_OCCUPE, FECA_OCCUPE, ECA_OCCUPE, OSA_OCCUPE,
        IOP_FECA_OCCUPE, IOP_ECA_OCCUPE, FECA_OSA_OCCUPE, ECA_OSA_OCCUPE,
        IOP_OSA_OCCUPE, FECA_ECA_OCCUPE,
        ECA_DISPO, IOP_DISPO, FECA_DISPO, OSA_DISPO, NB_CHOIX_CLASSE };

enum BITMAP_FIN_DE_GAME{VAINQUEUR, VAINQUEUR_FLECHE_STAT, VAINQUEURS, VAINQUEURS_FLECHE_STAT, STAT_2_JOUEURS,STAT_2_JOUEURS_NOUVELLE_PARTIE, STAT_2_JOUEURS_REJOUER, STAT_2_JOUEURS_QUITTER, STAT_3_JOUEURS, STAT_3_JOUEURS_NOUVELLE_PARTIE, STAT_3_JOUEURS_REJOUER, STAT_3_JOUEURS_QUITTER, STAT_4_JOUEURS, STAT_4_JOUEURS_NOUVELLE_PARTIE, STAT_4_JOUEURS_REJOUER, STAT_4_JOUEURS_QUITTER , NB_SPRITE_FINGAME};

typedef struct {
    int screenX, screenY; //Position sur l'écran
    int celluleX, celluleY; //Position transcrite en cellule (en fonction des tailles de tuile)
} CoordsXY;

typedef struct {
    int celluleX, celluleY;//Coordonnées des cellules sur la map adaptée à l'origine
    int orientation;
} CoordsIsometric;

typedef struct {
    ALLEGRO_BITMAP** image;//pointeur sur sprite de skin de personnages
    int spriteX, spriteY, spriteHauteur, spriteLargeur;//Position de l'image du joueur dans le sprite
    int screenX, screenY, screenXFixe, screenYFixe;//Position sur l'écran
    CoordsIsometric coords;//Cellule sur laquelle est l'image
    int decalageXDecor, decalageYDecor; //Utile que pour les décors

} Bitmap;

typedef struct {
    Bitmap boutonPassif;
    Bitmap boutonHover;
    Bitmap boutonClique;
    int x1, x2, y1, y2; //Coin supérieur droit, gauche, inférieur droit gauche pour calculer hitbox du bouton

} Bouton;

typedef struct {
    int x, y;
} Offset;

typedef struct {
    Offset offsetCellule;
    CoordsXY celluleXY;
    CoordsIsometric celluleIso;
    int clic;
    bool outOfMapBorders;
    bool boolChangementDeCelluleIso;
    bool boolCliqueDeplacement;
    CoordsIsometric celluleCliqueeDeplacement;

} Souris;


typedef struct {
    bool tabTouches[NB_TOUCHES];//Permet de connaître quelle touche est enfoncée
    bool tab;
} Clavier;

typedef struct {
    Clavier keyboard;
    Souris mouse;
    int compteurTimer;
    int nbSecondes;
    int chronoTour;
    //CoordsIsometric chemin[nbPM]; //Alloué dynamiquement et free ou RAZ à chaque fin de tour de joueur

} InteractionExterieure;

typedef struct {
    CoordsXY coordsXY;
    CoordsIsometric coordsIso;
    int spriteLargeur, spriteHauteur;
    int spriteHalfLargeur, spriteHalfHauteur;
    int typeBloc; //Proviendra du .txt qui permet de charger la map (1 = terre, 2 = herbe, 3 = sable,...)
    int decor;
    bool blocPlein; // bloc vide ou plein considère si c'est un obstacle ou pas (bloque les lignes de vue)
    bool lancerLeSort;

} Tile;


enum SPRITE_DECOR {TRIPLE_COULEE, SIMPLE_COULEE, PETIT_BLOC, BLOC_ROND, GROS_BLOC_ROND, CAILLOU, PETIT_VOLCAN, CAILLOU_ROND, CAILLOU_ROND2, PARTERRE, PETIT_VOLCAN2, GRAND_PARTERRE, ECLABOUSSURE, ECLA2, FUMEE_GRANDE, PAR_TERRE2, ECLAGRAND, ECLAMOY, ECLAPETIT, JET1, JET2, JET3, JET4, JET5, JET6, FUMEE1, FUMEE2, FUMEE3, FUMEE4, FUMEE5, FUMEE6, NB_SPRITES_DECOR};
typedef struct {
    Tile mapTile[NBCELLULEY][NBCELLULEX];//Tableau à 2 dimensions de Tuiles qui permet de générer la map
    CoordsXY Origine;//La map n'est pas forcément déssinée en 0,0
    Bitmap spriteTile[NB_SPRITES_MAP]; //Permet de connaître les tuiles et leur position dans le .png
    Bitmap spriteDecor[NB_SPRITES_DECOR];
    CoordsIsometric tabCheminDessin[100];
    int compteurChemins;
} Map;

typedef struct {
    char strNomCaC[100];
    int nbPA, nbDMG, portee;
    Bitmap sprite;
    float probabilite;
    int echecCritique;
    int type; //(en ligne, de zone, évite les obstacles...);
    bool ligneDeVue; // savoir si la ligne de vue est libre
    bool CaCSelectionne; // savoir quelle case est selectionnée
    bool CaClance; // savoir si le CaC est lancé
} CaC;


typedef struct {
    char strNomSort[100];
    int nbPA, nbDMG, porteeMin, porteeMax;
    Bitmap spriteSorts[NB_SPRITES_SORT];
    int probabilite;
    int echecCritique;
    int offSetX, offSetY;
    bool ligneDeVue;
    bool sortSelectionne;
    bool sortLance;
} Sorts;

enum SPRITE_MVMNT {POS1, POS2, POS3, POS4, POS5, POS6, NB_SPRITES_MVMNT};

enum SPRITE_MVMNT2 {HAUT, BAS, DROITE, GAUCHE, NB_ORIENTATION};


typedef struct {
    int nbPV, nbPM, nbPA;
    Bitmap skin[NB_SPRITE_CLASSES];
    char strNomClasse[100];
    Sorts tabSort[4];
    CaC attaqueCac;
    Bitmap animationMvmnt[NB_CLASSES][NB_ORIENTATION][NB_SPRITES_MVMNT];

} Classe;

typedef struct Joueur{
    char strNomJoueur[100];
   // A CHANGER ! Classe* classe; // pointeur sur la classe du joueur
    struct Joueur* next;//Liste chaînée en boucle
    bool isPlaying; // joueur en train de joueur ?
    bool tueur;
    bool mort;
    bool vainqueur;
    bool passerTour;
    CoordsIsometric celluleActuelle; // coordonnée du joueur
    CoordsIsometric tabCheminCellules[3];
    int nbPA, nbPm;
    int nbPmActuels;
    int nbDegatSubi;
    int degatSubiAffichage;
    int nbDegatInflige;
    int nbKills;
    int tempsEnVie;
    int pmUtilises;
    int paUtilises;
    int pvRestants;
    int classement;
    int nbDeplacementDansLeTour;
    Classe* ptrClasse;
    bool joueurEnDeplacement;
    bool animDeplacement;
    bool estMort;
    int orientation; //-1 en bas +1 en haut 2 à droite -2 à gauche

} Joueurs;

enum MENUPRINCIPAL {BG, AIDE, AIDE_HOVER, AIDE_CLIQUE, QUITTER, QUITTER_HOVER, QUITTER_CLIQUE, PARTIE, PARTIE_HOVER, PARTIE_CLIQUE, NB_SPRITE_MENU};

typedef struct {

    Bitmap tabSpriteMenu[NB_SPRITE_MENU];
    //... tous les autres paramètres nécessaires pour cette page qu'on va ajouter au fur et à mesure
    bool boolMenuPrincipal; //permet de rester dans la boucle de cette page
    bool partie;
    bool partieHover;
    bool partieClique;
    bool aide;
    bool aideHover;
    bool aideClique;
    bool quitter;
    bool quitterHover;
    bool quitterClique;

} PageMenuPrincipal;

typedef struct {
    //Bouton tabBoutons[NB_BOUTONS_CHOIX_CLASSES];
    Bitmap image[NB_CHOIX_CLASSE];
    Bitmap bouton[NB_BOUTON_VALIDER];
    int compteur;
    bool boolPageSelectionClasses;
    bool choixEffectuer;
    bool boolCliqueClasseIop;
    bool boolCliqueClasseFeca;
    bool boolCliqueClasseEca;
    bool boolCliqueClasseOsa;

    bool boolFlecheRetour;

    bool boolCliqueFlecheDroiteIop;
    bool boolCliqueFlecheGaucheIop;
    bool boolCliqueFlecheDroiteFeca;
    bool boolCliqueFlecheGaucheFeca;
    bool boolCliqueFlecheDroiteEca;
    bool boolCliqueFlecheGaucheEca;
    bool boolCliqueFlecheDroiteOsa;
    bool boolCliqueFlecheGaucheOsa;
} PageChoixClasses;

typedef struct {
    Bitmap bitmap[NB_BITMAP_NOM_JOUEUR_1];
    Bitmap bitmap2[NB_BITMAP_NOM_JOUEUR_2];
    bool boolPageChoixNom;
    char nomJoueur[25];
    int indice;

    bool boolFlecheRetour;
    bool boolChoixEffectuer;
    bool listeNom;
    bool hooverDemanderNom;

    bool selection;
    bool boolCliqueNom1;
    bool boolCliqueNom2;
    bool boolCliqueNom3;
    bool boolCliqueNom4;
    bool boolCliqueNom5;
    bool boolCliqueNom6;
    bool boolCliqueNom7;
    bool boolCliqueNom8;
    bool boolCliqueNom9;
} PageChoixNomJoueur;

typedef struct {
    Bitmap bitmap[NB_SPRITE_AIDE];
    bool boolPageClassement; //permet de rester dans la boucle de cette page
    bool apprendrePageAide;
    bool regleJeuPageAide;
    bool classesPageAide;
    bool continuerClassesImage;
    bool lireSuite1;
    bool lireSuite2;
    bool lireSuite3;
    bool lireSuiteCommencerCombat;
    bool lireSuiteUtiliserSorts;
    bool retourMenu;
    bool boolFlecheRetourPageAideInitial;
} PageAide;
typedef struct {
    //Bouton tabBoutons[NB_BOUTONS_PAGE_PARAMETRES];
    //... tous les autres paramètres nécessaires pour cette page qu'on va ajouter au fur et à mesure
    bool boolPageClassement; //permet de rester dans la boucle de cette page
} PageParametres; //permet de gérer le volume du jeu etc. Par exemple

typedef struct {
    //Bouton tabBoutons[NB_BOUTONS_MENU_PRINCIPAL];
    //... tous les autres paramètres nécessaires pour cette page qu'on va ajouter au fur et à mesure
    Bitmap finDeGame[NB_SPRITE_FINGAME];
    bool boolPageClassement;
    bool imageVainqueur;
    bool imageStat;
    bool newPartieHoover;
    bool rejouerHoover;
    bool quitterHoover;
} PageClassement;

typedef struct {
   // Bouton tabBoutons[NB_BOUTONS_MENU_PRINCIPAL];
    //... tous les autres paramètres nécessaires pour cette page qu'on va ajouter au fur et à mesure
    bool boolPageLancerPartie; //permet de rester dans la boucle de cette page
} PageLancerPartie;

typedef struct {
    //Bouton tabBoutons[NB_BOUTONS_PAGE_COMBAT];
    //... tous les autres paramètres nécessaires pour cette page qu'on va ajouter au fur et à mesure
    bool boolPageCombat; //permet de rester dans la boucle de cette page
} PageCombat;

typedef struct {
    Bitmap image[NB_BITMAP_NOMBRE_JOUEURS];
    Bitmap bouton[NB_BOUTON_VALIDER];
    bool boolPageNombreJoueurSelection;
    bool choixEffectuer;
    bool boolCliqueDeuxJoueur;
    bool boolCliqueTroisJoueur;
    bool boolCliqueQuatreJoueur;
} PageNombreJoueurSelection;

enum SPRITE_HUD {LOGO_IOP_STATIQUE, LOGO_IOP_HOVER, LOGO_IOP_CLIC, LOGO_FECA_STATIQUE, LOGO_FECA_HOVER, LOGO_FECA_CLIC, LOGO_OSA_STATIQUE, LOGO_OSA_HOVER, LOGO_OSA_CLIC, LOGO_ECA_STAT, LOGO_ECA_HOVER, LOGO_ECA_CLIC, LOGO_PM, LOGO_PA, LOGO_PV, LOGO_HUD, LOGO_CHRONO, LOGO_TOUR_STAT, LOGO_TOUR_HOVER, LOGO_TOUR_CLIC,NB_SPRITES_HUD};

typedef struct {
    ALLEGRO_COLOR color;
    int action; //1 PM, 2 PA, 3 KILL

} Killfeed;

#define NBSPRITEFIRE 13
#define NBSPRITESWORD 8
#define NBSPRITEBOW 16

typedef struct {
    //Bouton tabBoutons[NB_BOUTONS_PAGE_AIDE];
    //... tous les autres paramètres nécessaires pour cette page qu'on va ajouter au fur et à mesure
    Bitmap spriteHUD[NB_SPRITES_HUD];
    Bitmap spriteGifFire[NBSPRITEFIRE];
    Bitmap spriteGifSword[NBSPRITESWORD];
    Bitmap spriteGifWater[NBSPRITEWATER];
    Bitmap spriteGifBow[NBSPRITEBOW];
    Killfeed tabKillFeed[5];
    int nbFeed;
    bool boolPageJeu; //permet de rester dans la boucle de cette page
    bool boolClicCheminPerso;
    bool logoIopHover;
    bool logoFecaHover;
    bool logoEcaHover;
    bool logoOsaHover;
    bool logoIopClic;
    bool logoFecaClic;
    bool logoEcaClic;
    bool logoOsaClic;
    bool logoTerminerTourHover;
    bool logoTerminerTourClic;
    bool changementPerso;
    bool animSortEca;
    bool animSortFeca;
    bool animSortIop;
    bool animSortOsa;
    bool echecCritique;
    bool degatSubi;
    CoordsIsometric animSorts;
} PageJeu;


typedef struct {
    bool boolPagePlacementLibre; //permet de rester dans la boucle de cette page

} PagePlacementLibre;

typedef struct {
    PageMenuPrincipal menuPrincipal;
    PageAide pageAide;
    PageChoixClasses pageChoixClasses;
    PageChoixNomJoueur pageChoixNomJoueur;
    PageClassement pageClassement;
    PageParametres pageParametre;
    PageLancerPartie pageLancerPartie;
    PageJeu pageJeu;
    PageNombreJoueurSelection pageNombreJoueurSelection;
    PagePlacementLibre pagePlacementLibre;


} Pages; //représente les screens qui vont défiler quand on navigue dans le jeu


typedef struct {
    ALLEGRO_DISPLAY* display;
    ALLEGRO_EVENT_QUEUE* queue;
    ALLEGRO_FONT* fonts[NB_FONTS];
    ALLEGRO_EVENT event;
    int coordonneesSourisX;
    int coordonneesSourisY;
    unsigned int etatBoutonSouris;
    char toucheClavier;
    ALLEGRO_TIMER* timer;
    ALLEGRO_TIMER* chrono;
    int compteurMillis; //Permet de savoir le nombre de millisecondes qui se sont écoulées pour les anims
    int compteurSecondes; //Permet de savoir le nombre de secondes écoulées pour le chrono
    int compteur;
    ALLEGRO_SAMPLE* music[NB_SONS]; //tableau qui contient tous les sons du jeu
} Allegro;





typedef struct {
    Allegro allegro;// Contient tous les éléments ALLEGRO, plus facile pour les free etc.
    Sorts tabSortsIop[NB_SORTS_IOP];
    Sorts tabSortsFeca[NB_SORTS_FECA];
    Sorts tabSortsEca[NB_SORTS_ECA];
    Sorts tabSortsOsa[NB_SORTS_OSA];
    Classe tabClasseIopEnJeu [NB_CLASSES_POSITION_IOP_EN_JEU];
    Classe tabClasseFecaEnJeu [NB_CLASSES_POSITION_FECA_EN_JEU];
    Classe tabClasseEcaEnJeu [NB_CLASSES_POSITION_ECA_EN_JEU];
    Classe tabClasseOsaEnJeu [NB_CLASSES_POSITION_OSA_EN_JEU];
    Classe tabClasseIopSelectionClasse [NB_CLASSES_POSITION_IOP_SELECTION_CLASSE];
    Classe tabClasseFecaSelectionClasse [NB_CLASSES_POSITION_FECA_SELECTION_CLASSE];
    Classe tabClasseEcaSelectionClasse [NB_CLASSES_POSITION_ECA_SELECTION_CLASSE];
    Classe tabClasseOsaSelectionClasse [NB_CLASSES_POSITION_OSA_SELECTION_CLASSE];
    Joueurs tabNombreJoueursBitmap [NB_BITMAP_NOMBRE_JOUEURS];
    CaC attaqueCaC;
    InteractionExterieure interactionExterieure;
    Joueurs* joueur;//Pointeur sur un des maillon de la liste chaînée
    Pages pages; //tableau de pages contenant toutes les pages du jeu, on y accède par leur bitmap grâce à un enum
    Map map; //carte du jeu
    Classe classes[NB_CLASSES]; //tableau de classes on y accède par leur index ou par un enum
    bool actionDemandee; //Si on a demander de déplacer qlq chose pour éviter les bugs
    bool dessin;
    bool sortEnMain;
    bool sortlance;
    ALLEGRO_BITMAP* tabBitmap[NB_BITMAP];
    int nbJoueursEnVie;
    int nbJoueurs; //pas oublier de l'init
    Joueurs* joueurActif;
    bool endGame;
} Dofus;


void installAllegro();

void declarerAllegro(Dofus* dofus);

void initAllegroAll(Dofus* dofus);

void displayCreate(Dofus* dofus);

void queueCreate(Dofus* dofus);

void timerCreate(Dofus* dofus);

void fontInter20PXCreate(Dofus* dofus);

void fontAmarante20PXCreate(Dofus* dofus);

void fontCreateAll(Dofus* dofus);

void musicIntroCreateAll(Dofus* dofus);

void bitmapCreate(Dofus* dofus);

void libererAll(Dofus* dofus);

void registerEvents(Dofus* dofus);

void testmusique(Dofus* dofus);


#endif