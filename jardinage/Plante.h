#ifndef PLANTE_H
#define PLANTE_H

#include <string>
#include <vector>
using namespace std;

class Plante{

    protected: 
    
        string _name;
        string _espece;
        int _hydratation;
        int _bonheur;


    public:
    
        Plante(string nom, string espece,int hydratation, int bonheur);
        void Engrai();
        void eau();
        void taillage();
        void bonheur();
        void connaissance();



};

#endif