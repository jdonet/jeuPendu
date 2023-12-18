#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

/*
Fonction pour choisir aléatoirement un mot en fonction de la difficulté passée en paramètre
Le tableau à deux dimensions contient le dictionnaire de mots et la difficulté de chaque mot
La fonction doit générer un nombre aléatoire entre 1 et 100 , par exemple 30
Elle devra alors prendre le 30 ème mot de ce niveau de difficulté
Attention, si on arrive à la dernière case du tableau (99), il faut revenir au début (0)
Le mot trouvé doit être renvoyé
*/ 
std::string choisirMotAleatoire(const std::string mots[100][2], std::string difficulte) {
    return "";
}

/*
Fonction pour afficher l'état actuel du mot avec les lettres trouvées
Quand une lettre a été trouvée, elle est affichée, sinon on affiche un _
*/
void afficherMot(const std::string mot, const std::string lettresTrouvees) {

}

/*
Fonction permettant d'indiquer à l'utilisateur si la lettre tapée fait partie du mot à trouver
Si c'est le cas, on concatène cette lettre à la string lettresTrouvees, sinon on décrémente essaisRestants de 1
*/
void verifierLettre(std::string motChoisi, char lettre, std::string& lettresTrouvees, int& essaisRestants)
{

}

/*
Si toutes les lettres ont été trouvées, on affiche  "Felicitation ! Vous avez devine le mot : " + motChoisi et on renvoie true,
sinon on renvoie false
*/
bool verifierGagne(std::string& motChoisi, std::string& lettresTrouvees)
{
    return false;
}

int main() {
    // Initialisation du générateur de nombres aléatoires
    srand(time(0));

    // Tableau de mots avec leur difficulté
    std::string mots[100][2] = {
    {"programmation", "1"},
    {"ordinateur", "2"},
    {"algorithmes", "3"},
    {"developpement", "1"},
    {"integration", "2"},
    {"interface", "3"},
    {"fonctionnalite", "1"},
    {"bibliotheque", "2"},
    {"optimisation", "3"},
    {"gestionnaire", "1"},
    {"application", "2"},
    {"utilisateur", "3"},
    {"conception", "1"},
    {"evaluation", "2"},
    {"performance", "3"},
    {"analyse", "1"},
    {"execution", "2"},
    {"maintenance", "3"},
    {"sauvegarde", "1"},
    {"restauration", "2"},
    {"validation", "3"},
    {"documentation", "1"},
    {"depannage", "2"},
    {"configuration", "3"},
    {"interface", "1"},
    {"communication", "2"},
    {"reseau", "3"},
    {"securite", "1"},
    {"programmeur", "2"},
    {"composant", "3"},
    {"bibliotheque", "1"},
    {"version", "2"},
    {"developpeur", "3"},
    {"parametre", "1"},
    {"implementation", "2"},
    {"gestion", "3"},
    {"controle", "1"},
    {"gestionnaire", "2"},
    {"controleur", "3"},
    {"deploiement", "1"},
    {"processeur", "2"},
    {"disque", "3"},
    {"stockage", "1"},
    {"memoire", "2"},
    {"caché", "3"},
    {"fichier", "1"},
    {"dossier", "2"},
    {"formatage", "3"},
    {"extension", "1"},
    {"bibliotheque", "2"},
    {"programme", "3"},
    {"interface", "1"},
    {"mode", "2"},
    {"serveur", "3"},
    {"client", "1"},
    {"architecture", "2"},
    {"cycle", "3"},
    {"ligne", "1"},
    {"utilisateur", "2"},
    {"administrateur", "3"},
    {"systeme", "1"},
    {"exploitation", "2"},
    {"logiciel", "3"},
    {"ordinateur", "1"},
    {"portable", "2"},
    {"connexion", "3"},
    {"internet", "1"},
    {"navigateur", "2"},
    {"application", "3"},
    {"reseau", "1"},
    {"intrusion", "2"},
    {"antivirus", "3"},
    {"pare-feu", "1"},
    {"cryptage", "2"},
    {"securite", "3"},
    {"identification", "1"},
    {"authentification", "2"},
    {"autorisation", "3"},
    {"notification", "1"},
    {"message", "2"},
    {"erreur", "3"},
    {"exception", "1"},
    {"iteration", "2"},
    {"boucle", "3"},
    {"condition", "1"},
    {"alternative", "2"},
    {"instruction", "3"},
    {"declaration", "1"},
    {"initialisation", "2"},
    {"affectation", "3"},
    {"expression", "1"},
    {"valeur", "2"},
    {"type", "3"},
    {"fonction", "1"},
    {"parametre", "2"},
    {"retour", "3"},
    {"appel", "1"},
    {"prototype", "2"},
    {"definition", "3"},
    { "patate", "1" }
    };

    
    // Demande à l'utilisateur de choisir la difficulté
    std::string difficulte;
    std::cout << "Choisissez la difficulte (1, 2 ou 3) : ";
    std::cin >> difficulte;

    // Choix aléatoire d'un mot dans la difficulté spécifiée
    std::string motChoisi = choisirMotAleatoire(mots, difficulte);

    // Initialisation des variables pour le jeu
    std::string lettresTrouvees = "";
    int essaisRestants = 8;

    std::cout << "Bienvenue dans le jeu du pendu !" << std::endl;

    // Boucle principale du jeu
    while (essaisRestants > 0 && !verifierGagne(motChoisi, lettresTrouvees)) {
        // Affichage de l'état actuel du mot
        afficherMot(motChoisi, lettresTrouvees);

        // Demande à l'utilisateur de saisir une lettre
        char lettre;
        std::cout << "Entrez une lettre : ";
        std::cin >> lettre;

        verifierLettre(motChoisi, lettre, lettresTrouvees, essaisRestants);
        
    }

    if (essaisRestants == 0) {
        std::cout << "Vous avez atteint le nombre maximal d'essais. Le mot etait : " << motChoisi << std::endl;
    }
    
    return 0;
}
