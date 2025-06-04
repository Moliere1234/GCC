#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int joueur, ordinateur;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    printf("🪨 📄 ✂️  Pierre - Papier - Ciseaux\n");
    printf("Fais ton choix :\n");
    printf("1 → Pierre\n");
    printf("2 → Papier\n");
    printf("3 → Ciseaux\n");
    printf("Ton choix : ");
    scanf("%d", &joueur);

    // Vérification entrée
    if (joueur < 1 || joueur > 3) {
        printf("Choix invalide. Relance le programme.\n");
        return 1;
    }

    // Choix aléatoire de l'ordinateur
    ordinateur = rand() % 3 + 1;

    // Affichage des choix
    const char *noms[] = {"", "Pierre", "Papier", "Ciseaux"};
    printf("Tu as choisi : %s\n", noms[joueur]);
    printf("L'ordinateur a choisi : %s\n", noms[ordinateur]);

    // Résultat
    if (joueur == ordinateur) {
        printf(" Égalité !\n");
    } else if ((joueur == 1 && ordinateur == 3) ||
               (joueur == 2 && ordinateur == 1) ||
               (joueur == 3 && ordinateur == 2)) {
        printf(" Tu gagnes !\n");
    } else {
        printf(" L'ordinateur gagne !\n");
    }

    return 0;
}

