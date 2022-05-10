#ifndef PLANTE_H
#define PLANTE_H

#include "Plante.h"
#include <iostream>
#include <string>




Plante :: Plante(string nom,string espece,int hydratation, int bonheur){
    _name = "jack";
    _espece = "plante"; 
    _hydratation = 5; 
    _bonheur = 5;
}

//permet de savoir quanf utilisez l'engrais
    void plante:: Engrai(int engrais, int jour){
        jour = 0;
        engrais = 1;
        if (jour += 1){// quand le jour passe il peut utiliser un engrais 
            std :: cout << "vous pouvez utiliser 1 engrais !" << std::endl;
        };
    };
    void Plante :: taillage(int bonheur, int taille){

        taille = false;
        if(taille == true){
            std:: cout<< "vous avez taillé les feuilles de la plante !" << std::endl;
        };// si elle est taillé tout les deux jour alors elle est en bonne santé +1 bonheur
        if(taille == false){
            bonheur - 1;    
        };// si elle est taillé tout les jours ça santé est réduite +1 malheur
        //si elle n'est pas taillé ça santé est réduite +1 malheur
    };
    void Plante :: eau(int hydratation){
        if (hydratation > 5){
            std :: cout << "votre plante est bien arrosé" << endl;
        };//si elle arrosé tout les deux jour alors elle est en bonne santé +1 bonheur
        if (hydratation < 5){
            std :: cout << "votre plante n'est pas assez arrosé" << endl;
        };// si elle n'est pas arrosé elle meurt +1 malheur
        //si elle est arrosé tout les jour elle meurt +1 malheur
    };
    void Plante :: bonheur(int bonheur){
        if (bonheur > 5){
            std :: cout << "vous vous occuper bien de votre plante" << std:: endl;

        };//si on s'occupe bien de la plante alors sont bohneur augmente 
        if(bonheur < 5){
            std :: cout << "vous ne vous occuper pas bien de votre plante" << std:: endl;
        };//si on ne s'occupe pas bien d'elle, son bohneur se réduit 
    };

#endif