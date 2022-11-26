#include <iostream>
#include <vector>

using namespace std;

void voteCumulatif ()
{
    unsigned CSGO = 0;
    unsigned SF2 = 0;
    unsigned C6 = 0;
    unsigned Mk = 0;
    unsigned i = 0;

    while (cin.eof () == false)
    {
        string lignes;
        cin >> lignes;
        if (i % 3 == 2) // toutes les 3 lignes
        {
            string strVoix;
            strVoix = lignes[i]; // création d'une chaîne de caractères pour chaque 3 lignes
            vector <unsigned> voix;
            for (unsigned j = 0; j < voix.size (); j++) // conversion de la chaîne en un tableau d'entiers naturels
            {
                voix[j] = strVoix[j];
            }
            CSGO = CSGO + voix[0];
            SF2 = SF2 + voix[1];
            C6 = C6 + voix[2];
            Mk = Mk + voix[3];
            i = i + 1;
        }
    }

    if (CSGO > SF2 and CSGO > C6 and CSGO > Mk)
    {
        cout << "Le meilleur jeu vidéo est : Counter Strike (aka CS GO) !" << endl;
    }
    if (SF2 > CSGO and SF2 > C6 and SF2 > Mk)
    {
        cout << "Le meilleur jeu vidéo est : Street Fighter II !" << endl;
    }
    if (C6 > SF2 and C6 > CSGO and C6 > Mk)
    {
        cout << "Le meilleur jeu vidéo est : Civilization VI !" << endl;
    }
    if (Mk > CSGO and Mk > C6 and Mk > SF2)
    {
        cout << "Le meilleur jeu vidéo est : Mario Kart !" << endl;
    }
}

int main ()
{
    voteCumulatif ();
    return 0;
}
// g++ -o votants4.txt code_alexis_atrokhov.cpp
// ./votants4.txt <code_alexis_atrokhov.cpp> tdp4.txt
