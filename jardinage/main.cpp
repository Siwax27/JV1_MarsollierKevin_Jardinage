#include "Botaniste.cpp"
#include "Plante.cpp"
#include <iostream>
#include <string>
#include <vector>


int main(){

    Joueur * jeu = new Joueur();

    jeu ->actionJoueur(int choix, int tour);
    jeu ->acheter(int choixA);
    jeu ->finGame(int win, int tour);
    return 0;
}
