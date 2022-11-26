#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int deuxTours(vector <string> Choix,vector <unsigned> Vote,unsigned cmp){
    //declaration et affectation de toutes les variables utiliser
    if  (cmp>=3) return 0;
    unsigned NbCS =0;
    unsigned NbSF =0;
    unsigned NbCIV =0;
    unsigned NbMK =0;
    unsigned totNb =0;
    unsigned PG=0;
    unsigned IPG=0;
    unsigned i=0;
    unsigned tmp=cmp;
    vector <unsigned> NbResultChoix (Vote.size(),0);
    NbResultChoix.pop_back();
    vector <unsigned> PlusGrand;
    //on lit le fichier d'entree et on recupere le vote de chacun
    while (cmp!=3) {
    //la variable cmp permet a chaque appel de la fonction de prendre la bonne valeur du string de vote
    //si le vote n'est pas present dans les choix on regarde le prochain vote dans le string et on le verifie a son tour
        for (size_t i = 0;i<Vote.size();++i){
            if (Vote[cmp+i]==1){
                if (Choix[0]==" "){
                    ++cmp;
                }
                else {
                    NbCS+=1;
                }
            }
            if (Vote[cmp+i]==2){
                if (Choix[1]==" "){
                    ++cmp;
                }
                else {
                    NbSF+=1;
                }
            }
            if (Vote[cmp+i]==3){
                if (Choix[2]==" "){
                    ++cmp;
                }
                else {
                    NbCIV+=1;
                }
            }
            if (Vote[cmp+i]==4){
                if (Choix[3]==" "){
                    ++cmp;
                }
                else {
                    NbMK+=1;
                }
            }
        }
    }
    cmp=tmp;
    cout<<"CS GO a recolter : "<<NbCS<<" voies"<<endl;
    cout<<"Street Fighter II a recolter : "<<NbSF<<" voies"<<endl;
    cout<<"Civilization VI a recolter : "<<NbCIV<<" voies"<<endl;
    cout<<"Mario Kart a recolter : "<<NbMK<<" voies"<<endl;
    NbResultChoix[0]=NbCS;
    NbResultChoix[1]=NbSF;
    NbResultChoix[2]=NbCIV;
    NbResultChoix[3]=NbMK;
    //on verifie si quelqu'un est majoritaire absolue
    for (size_t i = 0; i < NbResultChoix.size(); ++i) {
        totNb=totNb+NbResultChoix[i];
    }
    for (size_t i = 0; i < NbResultChoix.size(); ++i) {
        if (NbResultChoix[i]>=(totNb-NbResultChoix[i])){
            cout<<Choix[i]<<" est majoritaire absolue, il est donc le vainqueur de l'election"<<endl;
            return 0;
        }
    }
    //On trouve les deux votes les plus grand en prenant en compte les doublons
    while (NbResultChoix.size()!=0) {
        for (size_t j = 0; j < NbResultChoix.size(); ++j) {
            if (PG<NbResultChoix[j]){
                PG=NbResultChoix[j];
                IPG=j;
            }
        }
        if (PG==0 or i==2){
            break;
        }
        NbResultChoix.erase(NbResultChoix.begin()+IPG);
        PlusGrand.push_back(PG);
        for (size_t k = 0; k < NbResultChoix.size();++k){
            if (PG==NbResultChoix[k]){
                PlusGrand.push_back(PG);
                IPG=k;
                NbResultChoix.erase(NbResultChoix.begin()+IPG);
            }
        }
        PG=0;
        IPG=0;
        ++i;
    }
    //On trouve qui est qualifie et on les met dans Choix2
    vector<unsigned>PlusGrandCopie (PlusGrand.size());
    for (size_t i = 0; i < PlusGrand.size(); ++i) {
        PlusGrandCopie[i]=PlusGrand[i];
    }
    //On reinitialise le vector Choix
    for (size_t i = 0; i < Choix.size(); ++i) {
        Choix[i]=" ";
    }
    unsigned tmpi = 0;
    for (size_t i=0;i<Choix.size();++i) {
        tmpi = i;
        if (PlusGrandCopie[i]==NbCS and Choix[0]!="Conter Strike"){
            cout<<"Conter Strike est qualifie"<<endl;
            Choix[0]="Conter Strike";
            PlusGrandCopie.erase(PlusGrandCopie.begin());
            i=0;
        }
        if (PlusGrandCopie[i]==NbSF and Choix[1]!="Street Fighter II"){
            cout<<"Street Fighter II est qualifie"<<endl;
            Choix[1]="Street Fighter II";
            PlusGrandCopie.erase(PlusGrandCopie.begin());
            i=0;
        }
        if (PlusGrandCopie[i]==NbCIV and Choix[2]!="Civilization VI"){
            cout<<"Civilisation VI est qualifie"<<endl;
            Choix[2]="Civilization VI";
            PlusGrandCopie.erase(PlusGrandCopie.begin());
            i=0;
        }
        if (PlusGrandCopie[i]==NbMK and Choix[3]!="Mario Kart"){
            cout<<"Mario Kart est qualifie"<<endl;
            Choix[3]="Mario Kart";
            PlusGrandCopie.erase(PlusGrandCopie.begin());
            i=0;
        }
        i=tmpi;
    }
    cout<<endl;
    cout<<"c'est l'heure du prochain tour"<<endl;
    deuxTours(Choix,Vote,cmp+1);
    return 0;
}
int main()
{
    vector <string> Choix (4);
    Choix[0]="CS GO";
    Choix[1]="Street Fighter II";
    Choix[2]="Civilization VI";
    Choix[3]="Mario Kart";
    vector <unsigned> Vote;
    unsigned cmp=0;
    //On prend les première valeur de vote dans le flux d'entree | attention on ne recupere que la premiere valeur du string line
    deuxTours(Choix,Vote,cmp);
    return 0;
}
