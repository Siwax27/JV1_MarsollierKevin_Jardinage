#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP
#include "botaniste.h"
#include "Plante.cpp"



    void Joueur :: acheter(int choixA){
        std :: cout << "voulez vous acheter une nouvelle plante ? 1 oui 2 non" <<std ::  endl;
        std :: cin << choixA;
        if(choixA == 1){
            std :: cout << "vous avez acheter une nouvelle plante" <<std ::  endl;
        };
        if(choixA == 2){
            std :: cout << "vous n'avez pas acheter de nouvelle plante" <<std ::  endl;
        };
    };
    void Joueur :: actionJoueur(int choix, int tour){
        tour = 0;
        std :: cout << "que voulez vous faire ?  1 = arroser la plante, 2 = ajouter de l'engrais, 3 =la taillé ou 4 = allez se reposer" <<std ::  endl;
        std :: cin >> choix;
        if(choix == 1){
            std :: cout << "vous avez arroser la plante" <<std ::  endl;
            hydratation = hydratation + 1;          
        };
        if (choix == 2){
            std :: cout << "vous avez rajouter de l'engrais" <<std ::  endl;
            bonheur = bonheur + 1;  
        };
        if (choix == 3){
            std :: cout << "vous avez taillé la plante" <<std ::  endl;
            bonheur = bonheur + 1;  

        };
        if (choix == 4){
            std :: cout << "vous parté vous coucher" <<std ::  endl;
            tour == tour + 1;
        }; 
    };

    void Joueur :: finGame(int win, int tour){
        win = false;
        if(tour == 10){
            win = true;
            if(bonheur > 5){
                std :: cout << "le bonheur de votre plante est bien" << std :: endl;
            };
            if (bonheur < 5){
                std :: cout << "le bonheur de votre plante est mauvaise" << std :: endl;
            };
        };
    };
#endif