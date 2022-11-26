//Blibliothèque utilisée.
#include<iostream>
#include<iomanip>
#include<string>
#include<stdio.h>

using namespace std;

void nega()
{

    int MarioKart, CSGO, ST2, Civ6 = 0;  // initialise les variable de MarioKart, CSGO, ST2, Civ6 à 0
    int n =  0;                          // initialise la variable de n à 0
    int i = 0;                           // initialise la variable de i à 0

    while (std::cin.eof() == false)
    {
        std::string votes;                      //chaine de caractère votes
        std::cin>>votes;                        //affecte les valeurs de votes
            if(votes == "1")                    //La condition "else if", sinon si votes vaut 1 donc :
            {
            ++CSGO;                             // +1 à la variable de CSGO
            }
            else if ( votes == "2" )            //La condition "else if", sinon si votes vaut 2 donc :
            {
            ++ST2;                              // +1 à la variable de ST2
            }
            else if ( votes == "3" )            //La condition "else if", sinon si votes vaut 3 donc :
            {
            ++Civ6;                             // +1 à la variable de Civ6
            }
            else if ( votes == "4" )            // La condition "else if", sinon si votes vaut 4 donc :
            {
            ++MarioKart;                        // +1 à la variable de MarioKart
            }

    }

    if (CSGO < ST2 and CSGO < Civ6 and CSGO < MarioKart){                                           // Si ( CSGO plus petit que ST2 et CSGO plus petit que Civ6 et CSGO plus petit que MarioKart).
        std::cout<<"Counter strik a gagné le vote avec le moins de voies!"<<'\n';                   // Afficher "Counter strik a gagné le vote avec le moins de voies!" le '\n' renvoie à la ligne.
        std::cout<<"Voici le nombre de vote de : " <<CSGO<< " vote CSGO" <<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de CSGO et " vote CSGO".
        std::cout<<"Voici le nombre de vote de : " <<ST2<< " vote ST2" <<'\n';                      // Afficher "Voici le nombre de vote de : " puis la valeur de ST2 et " vote ST2".
        std::cout<<"Voici le nombre de vote de : " <<Civ6<< " vote Civ6" <<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de Civ6 et " vote Civ6".
        std::cout<<"Voici le nombre de vote de : " <<MarioKart<< " vote MarioKart" <<'\n';          // Afficher "Voici le nombre de vote de : " puis la valeur de MarioKart et " vote MarioKart".

    }
    if (ST2 < CSGO and ST2 < Civ6 and ST2 < MarioKart){                                             // Si ( ST2 plus petit que CSGO et ST2 plus petit que Civ6 et ST2 plus petit que MarioKart).
        std::cout<<"Street Fighter II a gagné le vote avec le moins de voies!"<<'\n';               // Afficher "ST2 a gagné le vote avec le moins de voies!" le '\n' renvoie à la ligne.
       std::cout<<"Voici le nombre de vote de : " <<CSGO<< " vote CSGO" <<'\n';                     // Afficher "Voici le nombre de vote de : " puis la valeur de CSGO et " vote CSGO".
        std::cout<<"Voici le nombre de vote de : " <<ST2<< " vote ST2" <<'\n';                      // Afficher "Voici le nombre de vote de : " puis la valeur de ST2 et " vote ST2".
        std::cout<<"Voici le nombre de vote de : " <<Civ6<< " vote Civ6" <<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de Civ6 et " vote Civ6".
        std::cout<<"Voici le nombre de vote de : " <<MarioKart<< " vote MarioKart" <<'\n';          // Afficher "Voici le nombre de vote de : " puis la valeur de MarioKart et " vote MarioKart".


    }
    if (Civ6 < ST2 and Civ6 < CSGO and Civ6 < MarioKart){                                           // Si ( Civ6 plus petit que ST2 et Civ6 plus petit que CSGO et Civ6 plus petit que MarioKart).
        std::cout<<"Civilization VI a gagné le vote avec le moins de voies!"<<'\n';                 // Afficher " Civ6 a gagné le vote avec le moins de voies!" le '\n' renvoie à la ligne.
        std::cout<<"Voici le nombre de vote de : " <<CSGO<< " vote CSGO" <<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de CSGO et " vote CSGO".
        std::cout<<"Voici le nombre de vote de : " <<ST2<< " vote ST2" <<'\n';                      // Afficher "Voici le nombre de vote de : " puis la valeur de ST2 et " vote ST2".
        std::cout<<"Voici le nombre de vote de : " <<Civ6 << " vote Civ6"<<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de Civ6 et " vote Civ6".
        std::cout<<"Voici le nombre de vote de : " <<MarioKart<< " vote MarioKart" <<'\n';          // Afficher "Voici le nombre de vote de : " puis la valeur de MarioKart et " vote MarioKart".

    }
    if (MarioKart < CSGO and MarioKart < Civ6 and MarioKart < ST2){                                 // Si ( MarioKart plus petit que CSGO et MarioKart plus petit que Civ6 et MarioKart plus petit que ST2).
        std::cout<<"Mario Kart a gagné le vote avec le moins de voies!"<<'\n';                      // Afficher "MarioKart a gagné le vote avec le moins de voies!" le '\n' renvoie à la ligne.
        std::cout<<"Voici le nombre de vote de : " <<CSGO<< " vote CSGO" <<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de CSGO et " vote CSGO".
        std::cout<<"Voici le nombre de vote de : " <<ST2<< " vote ST2" <<'\n';                      // Afficher "Voici le nombre de vote de : " puis la valeur de ST2 et " vote ST2".
        std::cout<<"Voici le nombre de vote de : " <<Civ6<< " vote Civ6" <<'\n';                    // Afficher "Voici le nombre de vote de : " puis la valeur de Civ6 et " vote Civ6".
        std::cout<<"Voici le nombre de vote de : " <<MarioKart<< " vote MarioKart" <<'\n';          // Afficher "Voici le nombre de vote de : " puis la valeur de MarioKart et " vote MarioKart".

    }

}


int main()
{
    nega();
}
