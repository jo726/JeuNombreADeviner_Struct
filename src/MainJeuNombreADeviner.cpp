/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
#include <ctime>
#include "../include/JeuNombreADeviner.h"


int main()
{

    std::cout << "Vous allez jouer pour deviner un nombre secret" << std::endl;
    TJoueur joueur1;
    InitJoueur(joueur1,"Jauffrey");
    std::cout << joueur1.Nom;
    int n{10};
    int found_mystery = std::rand () % n;
    JouerPartie(joueur1,found_mystery);
    int nbEssais{};
    MajResultatsJoueur(joueur1,4,true);

  return 0;
}
