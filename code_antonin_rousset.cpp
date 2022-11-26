#include <iostream>
using namespace std;

void vote()
{
    unsigned CSGO = 0;    // déclaration de CSGO entier_naturel initiée à 0;
    unsigned SF2 = 0;     // déclaration de SF2 entier_naturel initiée à 0;
    unsigned Civi6 = 0;   // déclaration de Civi6 entier_naturel initiée à 0;
    unsigned MK = 0;      // déclaration de MK entier_naturel initiée à 0;
    /*creation des variable des 4 option de vote.*/
    while (cin.eof()==false)
    {
        string Lignes;                      //Déclaration de la chaine de caractère Lignes
        cin>>Lignes;                        
        if(Lignes == "1")                 // La Condition "else if", sinon si Lignes vaut "1", donc :
        {
            ++CSGO;                     // +1 à la variable CSGO
        }
        else if (Lignes== "2")           // La Condition "else if", sinon si Lignes vaut "2", donc : 
        {
            ++SF2;                         // +1 à la variable SF2
        }

        else if (Lignes == "3")           // La Condition "else if", sinon si Lignes vaut "3", donc : 
        {
            ++Civi6;                         // +1 à la variable Civi6
        }

        else if (Lignes == "4")           // La Condition "else if", sinon si Lignes vaut "4", donc :
        {
            ++MK;                         // +1 à la variable MK
        }
        
    }
    /*Mise en place du vote avec un fichier text externe.*/
    if (CSGO > SF2 and CSGO > Civi6 and CSGO > MK){
        cout<<"Counter strik a gagné!"; 
    }
    if (SF2 > CSGO and SF2 > Civi6 and SF2 > MK){
        cout<<"Street Fighter II a gagné!";
    }
     if (Civi6 > SF2 and Civi6 > CSGO and Civi6 > MK){
        cout<<"Civilization VI a gagné!";
    }
    if (MK > CSGO and MK > Civi6 and MK > SF2){
        cout<<"Mario Kart a gagné!";
    }
    /*comparaison des resulta et affichage de gagnant.*/
}
int main()
{
    vote();
    return 0;
}
// g++ -o votants1.txt code_antonin_rousset.cpp
// ./votants1.txt <code_antonin_rousset.cpp> tdp.txt
