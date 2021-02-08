/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud/ Jauffrey Bicheyre
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier: MainJeuNombreADeviner.cpp, JeuNombreADeviner.cpp et paramètres d'entrée, sortie et entrée/sortie des fonctions
/*************************************************/
#include <iostream>
#include <ctime>
#include <string>
#include "../include/JeuNombreADeviner.h"


int main()
{

    std::cout << "Vous allez jouer pour deviner un nombre secret" << std::endl;
    TJoueur joueur1;
    string username;
    std::cout << "Entrez votre prenom" << "\n";
    std::cin>> username;
    InitJoueur(joueur1, username);
    std::cout << Nom(joueur1) << std::endl;
    int n{10};
    int found_mystery = std::rand () % n;
    JouerPartie(joueur1,found_mystery);
    int nbEssais{};
    bool gagne{};
    MajResultatsJoueur(joueur1,nbEssais,gagne);


  return 0;
}
