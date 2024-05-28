#include "Fonctions/Cartes/cartes.h"
#include "Structures/Structures.h"
#include "Fonctions/Partie/partie.h"


int main() {
    Monopoly monopoly = initialiserPartie();
    initialiserLesCartes(&monopoly);
    presentation(&monopoly);
    tirageAuSortOrdreJoueur(&monopoly);
    testTour(&monopoly);
    return 0;
}

