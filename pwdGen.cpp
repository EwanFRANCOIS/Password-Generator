/*
@author: EwanFRANCOIS
@goal: Création d'un programme capable de générer un mot de passe selon le choix de l'utilisateur
       (Selon la longueur du mot de passe, si il souhaite avoir des caractères spéciaux ou non...)
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main() {

    srand(time(0)); // Intialisation pour recup aleatoirement les caracters

    vector<char> mdp = {}; // Vector où les caracteres vont etre mis
    
    vector<char> caractere = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                              'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    vector<int> nombres = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<char> special = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '=', '+', '[', ']', '{', '}', ';', ':', '\'', '"', ',', '.', '<', '>', '/', '?', '|'};
    

    // -- MENUS --
    
    // Ouvrir le fichier
    ifstream fichier("menu.txt");
    string lignes;
    
    if (!fichier) {
        cerr << "Erreur, le fichier n'existe pas" << endl;
        return 1;
    }

        
    while (getline(fichier, lignes)) {
        cout << lignes << endl;
    }
    fichier.close();
    
    int menueChoice;
    cout << "Entrez votre choix : ";
    cin >> menueChoice;

    int userChoice;

    switch (menueChoice) {
        case 1:
            cout << "Vous avez choisi de generer un mot de passe avec seulement des lettres" << endl;
            
            
            cout << "Entrez la taille de votre mot de passe : ";
            cin >> userChoice;

            for (unsigned i = 0; i < userChoice; i++) {
                char car_random = caractere[rand() % caractere.size()];
                mdp.push_back(car_random);        
            }

            cout << "================================" << endl;
            cout << "Votre mot de passe genere est : " << endl;

            for (unsigned i = 0; i < mdp.size(); i++) {
                cout << mdp[i];
            }

            break;
        case 2:
            cout << "Vous avez choisi de generer un mot de passe avec des nombres et des lettres" << endl;

            cout << "Entrez la taille de votre mot de passe : ";
            cin >> userChoice;

            for (unsigned i = 0; i < userChoice; i++) {
                char car_random = caractere[rand() % caractere.size()];
                int nb_random = nombres[rand() % nombres.size()];
                mdp.push_back(rand() % 2 == 0 ? car_random : static_cast<char>(nb_random + '0')); // Ajoute soit une lettre soit un chiffre
            }

            cout << "================================" << endl;
            cout << "Votre mot de passe genere est : " << endl;

            for (unsigned i = 0; i < mdp.size(); i++) {
                cout << mdp[i];
            }

            break;
        case 3:
            cout << "Vous avez choisi de generer un mot de passe sans caracteres speciaux" << endl;

            cout << "Entrez la taille de votre mot de passe : ";
            cin >> userChoice;

            for (unsigned i = 0; i < userChoice; i++) {
                char car_random = caractere[rand() % caractere.size()];
                char car_special_random = special[rand() % special.size()];
                mdp.push_back(rand() % 2 == 0 ? car_random : car_special_random); // Ajoute soit une lettre soit un caractere special
            }
            cout << "================================" << endl;
            cout << "Votre mot de passe genere est : " << endl;

            for (unsigned i = 0; i < mdp.size(); i++) {
                cout << mdp[i];
            }
            break;
        case 4:
            cout << "Fermeture du programme..." << endl;
            return 1;
        default:
            cerr << "Erreur, veuillez faire un choix valide" << endl;
            return 1;
    }

    return 0;
}