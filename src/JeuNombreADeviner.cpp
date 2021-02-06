/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
/*************************************************/
#include <iostream>
#include <ctime>
#include "../include/JeuNombreAdeviner.h"

// Nom :InitJoueur
// Rôle : Crée un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
// Paramètres d'entrée :
// Paramètres de sortie :
// Paramètres d'entrée/sortie :

void InitJoueur(TJoueur& joueurAcreer, const string un_nom)
{
    joueurAcreer.Nom = un_nom;
    joueurAcreer.nbTentatives = 0;
    joueurAcreer.nbPartiesJouees = 0;
    joueurAcreer.nbPartiesGagnees = 0;
}


// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

void TirerNombreMystere(int &Hapless_Draw)
{
    do
    {
      std::cout << "Tapez un chiffre valide entre 0 et 10" << "\n";
      std::cin >> Hapless_Draw;
    }
  while ((Hapless_Draw < 0) || (Hapless_Draw > 10));
}

// Nom :JouerPartie
// Rôle : Fait jouer une partie au joueur passé en paramètre
//        A la fin, met à jour les informations du joueur
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :


void JouerPartie (TJoueur &un_joueur, int nombreADeviner)
{
std::srand (time(nullptr));
  int n {10};
  int found_mystery = std::rand () % n;
  int Search_number{};
  int Hapless_Draw{};
  int Number_Try = 8;
  int i;
  TirerNombreMystere(Hapless_Draw);
  std::cout << "Nombre compris dans l'intervalle : " << Hapless_Draw << std::endl;

  for (i = 0; i < Number_Try; i++)
    {
      std::cout << "Trouve le nombre mystere" << std::endl;
      Search_number = Hapless_Draw;
      std::cin >> Search_number;

      if (Search_number == found_mystery)
{
 std::cout << "Gagne" << std::endl;
 break;
}

      if (Search_number < found_mystery)
{
 std::cout << "More" << std::endl;
}
      else
{
 std::cout << "Less" << std::endl;
}

      if (i == Number_Try - 1)
{
 std::cout << "Failed" << std::endl;
}
    }
  std::cout << "Nombre d'essais : " << i;
}

// Nom : MajResultatsJoueur
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void MajResultatsJoueur(TJoueur joueur, int nbEssais, bool gagne)
{
    int Number_Try{};
    int Hapless_Draw{};
    int found_mystery{};

 TJoueur joueur1;
 TirerNombreMystere(Hapless_Draw);
 Number_Try=nbEssais;
 found_mystery = true;
}

// Nom : ResultatsJoueur
// Rôle : indique les résultats du joueur passé en paramètre
//        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations à l'écran
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
     int Number_Try{};
    int Hapless_Draw{};
    int found_mystery{};
    int i{};

 TJoueur joueur1;
 TirerNombreMystere(Hapless_Draw);
 Number_Try=nbEssais;
 found_mystery = true;
 i = false;
  
}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.Nom;
}
