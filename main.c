#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    int annees;
    int mois;
    int jour;
    int heures;
    int minutes;
    int secondes;
} Date;

int addition() {
    int entier_a;
    int entier_b;
    srand (time(NULL)); // reset des nombres aleatoire a chaque execution
    entier_a = rand() % 101; // nombre aleatoire entre 0 et 100
    entier_b = rand() % 100 + 0 ; // autre facon de le noter
    printf("%d + %d = ?\n", entier_a, entier_b);
    printf("Entrer le resultat : ");

    int entier_reponse; // on recupere la reponse
    scanf("%d", &entier_reponse); printf("\n");
    printf("Vous avez entre %d\n", entier_reponse);

    int entier_c; // on calcul le resultat du calcul initial
    entier_c = entier_a + entier_b;

    if (entier_reponse == entier_c) { // attribution du point en cas de reussite
        printf("Bravo\n");
        return 0;
    }

    printf("Faux\n"); // en cas d'echec
    return -1;
}

int soustraction() {

    int entier_a;
    int entier_b;
    srand (time(NULL)); // reset des nombres aleatoire a chaque execution
    entier_a = rand() % 101; // nombre aleatoire entre 0 et 100
    entier_b = rand() % 100 + 0 ; // autre facon de le noter

    if (entier_a < entier_b) { // permutation via une autre variable
        int entier_echange;
        entier_echange = entier_a;
        entier_a = entier_b;
        entier_b = entier_echange;
    }

    printf("%d - %d = ?\n", entier_a, entier_b);
    printf("Entrer le resultat : ");

    int entier_reponse; // on recupere la reponse
    scanf("%d", &entier_reponse); printf("\n");
    printf("Vous avez entre %d\n", entier_reponse);

    int entier_c; // on calcul le resultat du calcul initial
    entier_c = entier_a - entier_b;

    if (entier_reponse == entier_c) {
        printf("Bravo\n");
        return 0;
    }

    printf("Faux\n");
    return -1;
}

int multiplication() {
    int entier_a;
    int entier_b;
    srand (time(NULL)); // reset des nombres aleatoire a chaque execution
    entier_a = rand() % 10 + 1; // nombre aleatoire entre 1 et 10
    entier_b = rand() % 10 + 1 ; // rand() % 10 = nombre entre 0 et 9 et + 1 = décalage de 1 sur la plage donc de 1 a 10

    printf("%d * %d = ?\n", entier_a, entier_b);
    printf("Entrer le resultat : ");

    int entier_reponse; // on recupere la reponse
    scanf("%d", &entier_reponse); printf("\n");
    printf("Vous avez entre %d\n", entier_reponse);

    int entier_c; // on calcul le resultat du calcul initial
    entier_c = entier_a * entier_b;

    if (entier_reponse == entier_c) {
        printf("Bravo\n");
        return 0;
    }
    printf("Faux\n");
    return -1;
}

int afficher_table(int n) {
    int resultat;
    for (int i = 1; i <= 10; i++) {
        resultat = n * i;
        printf("%d * %d = %d\n", n, i,resultat);}
    return 0;
    }

int epreuve_table(int n) {
    int reponse;
    int proposition;
    int compteur = 0;
    for (int i = 1; i <= 10; i++) {
        reponse = n * i;                                           // on calcule le resultat
        printf("%d * %d = ?\n", n, i);                      // on affiche la question
        scanf("%d", &proposition); printf("\n");     // on recupere la reponse

        if (proposition == reponse) { compteur += 1; } // +1 à chaque bonnes reponse
    }

    if (compteur == 10) {
        printf ("Gagne\n"); // à la fin, si les 10 reponse sont bonnes
        return 0;
    }

    printf ("Perdu\n"); // si il y a au moins une erreur
    return -1;

}

int division() {  // On considére qu'il faudra trouver et le quotient et le reste
    int entier_a;
    int entier_b;

    srand (time(NULL)); // reset des nombres aleatoire a chaque execution
    entier_a = rand() % 9 + 2; // nombre aleatoire entre 2 et 10, rand() % 9 = nombre entre 0 et 8
    entier_b = rand() % 9 + 2 ; // + 2 = décalage de 2 sur la plage donc de 2 a 10

        if (entier_a < entier_b) {  // dans l'optique de l'exercice il et plus utile d'avoir un diviseur plus petit,
            int entier_echange;     //  sinon le reste sera egal au nb diviser, et le quotient sera 0
            entier_echange = entier_a;
            entier_a = entier_b;
            entier_b = entier_echange;
        }

    printf("%d / %d = ?\n", entier_a, entier_b);
    printf("Entrer le quotient : ");
    int entier_rep_quotient; // on recupere la reponse du joueur pour le quotient
    scanf("%d", &entier_rep_quotient); printf("\n");



    printf("%d / %d = ?\n", entier_a, entier_b);
    printf("Entrer le reste : ");
    int entier_rep_reste; // on recupere la reponse du joueur pour le reste
    scanf("%d", &entier_rep_reste); printf("\n");



    int entier_quotient; // on calcul le quotient du calcul initial
    entier_quotient = entier_a / entier_b; // le resultat étant un entier, les eventuelles chiffres après la virgule sont tronqué

    int entier_reste; // on calcul le reste du calcul initial
    entier_reste = entier_a % entier_b; // on calcul le reste avec %

    if ((entier_quotient == entier_rep_quotient) && (entier_reste == entier_rep_reste)) {
        printf("Bravo\n");
        return 0;
    }
    printf("Faux\n");
    return -1;
}

int attribution_point(int essai, int point) {
    switch (essai) {
        case 1:
            point += 10;
        printf("Vous avez gagner 10 point\n");
        break; // reussi sans aucun erreur

        case 2:
            point += 5;
        printf("Vous avez gagner 5 point\n");
        break;

        case 3:
            point += 1;
        printf("Vous avez gagner 1 point\n");
        break;

        case 4:
            point += 0;
        printf("Vous n avez pas gagner de point\n");
        break; // le joueur a echouer

    }
    return point;
}

void enregistrement_fichier(char *nom, int point) {
    int tmp_score;
    char ligne[100], tmp_nom[100];
    Date tmp_date;

    FILE *fichier = fopen("score.txt", "r"); // Lecture du fichier de score avec (r)
    FILE *tmp_fichier = fopen("score_tmp.txt", "w"); // Creation et ecriture d un autre fichier (w)

    while (fgets(ligne, sizeof(ligne), fichier)) { // on recupere toute les informations du premier fichier
        sscanf(ligne, "%99[^;];%4d-%2d-%2d %2d:%2d:%2d;%d", tmp_nom,
               &tmp_date.annees, &tmp_date.mois, &tmp_date.jour,
               &tmp_date.heures, &tmp_date.minutes, &tmp_date.secondes,
               &tmp_score);

        if (strcmp(tmp_nom, nom) == 0) { // un fois que le nom du joueur et trouver
            tmp_score = point;  // la donnees du score du joueur est modifier dans le code
        }

        fprintf(tmp_fichier, "%s;%d-%d-%d %d:%d:%d;%d\n", tmp_nom,
                tmp_date.annees, tmp_date.mois, tmp_date.jour,
                tmp_date.heures, tmp_date.minutes, tmp_date.secondes,
                tmp_score); // on creer un nouveau fichier qui contient toute les donnees du premier et la donnees maise a jour
    }

    fclose(fichier);
    fclose(tmp_fichier);

    remove("score.txt"); // on supprime l'ancien fichier
    rename("score_tmp.txt", "score.txt"); // renomme le nouveau fichier
}



int main(void) {

    int choix_connexion = 0;
    char nom[100]; // on va recuperer le nom d'utilisateur
    int point = 0;

    while ((choix_connexion != 1) && (choix_connexion != 2)) {
        printf("+-----------------------------------+\n");
        printf("|1 : Inscription/Connexion          |\n");
        printf("|2 : Session libre                  |\n");
        printf("+-----------------------------------+\n");
        printf("Quel est votre choix?\n");
        scanf("%d", &choix_connexion); printf("\n");
    }

    // si le choix de connexion est session libre, on n'aura pas besoin d'interagir avec le fichier
    // si le choix de connexion est 1, le joueur est invité à ne pas se connecter

    if (choix_connexion==1) {

        FILE * fichier = fopen ("score.txt", "r+"); // on va chercher le fichier (lecture ecriture seul)
        if (fichier == NULL) { // si le fichier n'existe pas, on le creer
            fichier = fopen("score.txt", "w+"); // lecture ecriture et creation fichier
        }


        printf("Entrer/Choisissez votre nom d'utilisateur:");
        scanf("%s", nom);

        int nom_existant = 0, tmp_score;
        char ligne[100], tmp_nom[100];
        Date tmp_date; // initialisé avant via la structure

        while (!nom_existant && fgets(ligne, sizeof(ligne), fichier)) { // Lire une ligne
            sscanf(ligne, "%99[^;];%4d-%2d-%2d %2d:%2d:%2d;%d", tmp_nom,
                &tmp_date.annees, &tmp_date.mois, &tmp_date.jour,
                &tmp_date.heures, &tmp_date.minutes, &tmp_date.secondes,
                &tmp_score); // scane les ligne dans un format precis
            if (strcmp(tmp_nom, nom) == 0) {
                nom_existant = 1; // si une ligne a pour valeur de nom, la même que l identifiant renseigner
            }
        } // cette boucle va verifier si le nom a deja ete utiliser avant

        if (nom_existant) { // si le nom existe alors, recuperer les donnees existantes
            printf("\n");
            printf("Bienvenue %s !\n", nom);
            point = tmp_score;
        }

        else { // si le nom n'existe pas, on le creer
            printf("\n");
            printf("Ce nom d'utilisateur n'est pas encore attribuee\n");
            printf("Creation du compte... Bienvenue %s !\n", nom);

            // ajout de l utilisateur dans le fichier
            fprintf(fichier, "%s;%4d-%2d-%2d %2d:%2d:%2d;%d\n", nom,
                tmp_date.annees, tmp_date.mois, tmp_date.jour,
                tmp_date.heures, tmp_date.minutes, tmp_date.secondes,
                0); // Score initialisé à 0
            fclose(fichier);
        }
    }

    int choix = -1;
    printf("\n");
    printf("Vos points: %d", point);
    printf("\n");

    int essai = 0; // compteur pour l'attribution du nombre de point lors des exercices

    while (choix!=0) {

        printf("+-----------------------------------+\n");
        printf("|1 : Addition                       |\n");
        printf("|2 : Soustraction                   |\n");
        printf("|3 : Multiplication                 |\n");
        printf("|4 : Tables des multiplications     |\n");
        printf("|5 : Divisions                      |\n");
        printf("|0 : Sortir du jeu                  |\n");
        printf("+-----------------------------------+\n");
        printf("Quel est votre choix ? ");

        scanf("%d", &choix); printf("\n");

        switch (choix) {
            case 1:
                printf("Addition\n");

                essai = 1; // systeme de compteur pour l'attribution de point
                while (essai<4 && addition() == -1) { // tant que nb d'essais n'est pas epuise ou que l'exercice et reussit
                    printf("\n");
                    essai = essai + 1;
                }
                point = attribution_point(essai, point);

                printf("\n");

                if (choix_connexion==1) { // si l'utilisateur avait choisis la connexion, sequence d enregistrement
                    enregistrement_fichier(nom,point); // on ajoute les point au total de point dans le fichier texte
                }
            break;

            case 2:
                printf("Soustraction\n");

                essai = 1; // systeme de compteur pour l'attribution de point
                while (essai<4 && soustraction() == -1) { // tant que nb d'essais n'est pas epuise ou que l'exercice et reussit
                    printf("\n");
                    essai = essai + 1;
                }
                point = attribution_point(essai, point);

                printf("\n");
            break;

            case 3:
                printf("Multiplication\n");

                essai = 1; // systeme de compteur pour l'attribution de point
                while (essai<4 && multiplication() == -1) { // tant que nb d'essais n'est pas epuise ou que l'exercice et reussit
                    printf("\n");
                    essai = essai + 1;
                }
                point = attribution_point(essai, point);

                printf("\n");
            break;

            case 4:
                printf("Tables des multiplications\n");

                int table = 0;
                while (table < 1  || table > 10){   // && signifie ET en language C (et || pour OU )
                    printf("Choissisez votre table (de 1 a 10) : "); // choix de la table
                    scanf("%d", &table); printf("\n");
                }

                afficher_table(table); printf("\n");


                printf("Maintenant donner le resultat de cette table : \n\n");

                essai = 1; // systeme de compteur pour l'attribution de point
                while (essai<4 && epreuve_table(table) == -1) { // tant que nb d'essais n'est pas epuise ou que l'exercice et reussit
                    printf("\n");
                    essai = essai + 1;
                }
                point = attribution_point(essai, point);

                printf("\n");
            break;

            case 5:
                printf("Divisions\n");

                essai = 1; // systeme de compteur pour l'attribution de point
                while (essai<4 && division() == -1) { // tant que nb d'essais n'est pas epuise ou que l'exercice et reussit
                    printf("\n");
                    essai = essai + 1;
                }
                point = attribution_point(essai, point);

                printf("\n");
            break;
        }
    }

    printf("Merci de votre visite\n");
    printf("Nombre de points : %d\n", point);
    return 0;
}