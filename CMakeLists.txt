cmake_minimum_required(VERSION 3.20)
project(ALBPL C)

set(CMAKE_C_STANDARD 99)

add_executable(ALBPL main.c Structures/Structures.c Structures/Structures.h Fonctions/Cartes/cartes.c Fonctions/Cartes/cartes.h Fonctions/Immobilier/immobilier.c Fonctions/Immobilier/immobilier.h Fonctions/De/de.c Fonctions/De/de.h Fonctions/Plateau/plateau.c Fonctions/Plateau/plateau.h Fonctions/Monnaie/monnaie.c Fonctions/Monnaie/monnaie.h Fonctions/Hypotheque/hypotheque.c Fonctions/Hypotheque/hypotheque.h Fonctions/Partie/partie.c Fonctions/Partie/partie.h Fonctions/Joueur/Joueur.c Fonctions/Joueur/Joueur.h Fonctions/Prison/Prison.c Fonctions/Prison/Prison.h Fonctions/Menu/menu.c Fonctions/Menu/menu.h Fonctions/Sauvegarde/sauvegarde.c Fonctions/Sauvegarde/sauvegarde.h Fonctions/Extensions/Duel/Duel.c Fonctions/Extensions/Duel/Duel.h Fonctions/Extensions/Messages/message.c Fonctions/Extensions/Messages/message.h)
