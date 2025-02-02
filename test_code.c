#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ARO.h"




double a, b, c, x1, x2;



int main(){



    printf("RESOLUTION DE L\'EQUATION SECOND aX^2 + bX + c");



    printf("\n Veuillez entrer la valeur du coefficient a :");

    scanf("%lf", &a);

    printf("\n");



    printf("\n Veuillez entrer la valeur du coefficient b :");

    scanf("%lf", &b);

    printf("\n");



    printf("\n Veuillez entrer la valeur du coefficient c :");

    scanf("%lf", &c);

    printf("\n");



    void racine(a, b, c);



    char chaine, bi;

    printf("Veuillez entrer une expression ");

    scanf("%s", chaine);

    printf("Veuillez entrer le bigramme ");

    scanf("%s", bi);

    bigramme(bi, chaine);







    int nb;

    printf("Veuillez entrer un nombre a trois chiffres");

    scanf("%d", &nb);



    // Conversion entier -> chaîne

    char buffer[5];

    sprintf(buffer, "%d", nb);





    // Conversion chaîne -> entier

    char c[] = "123";

    int nb0 = atoi(c);

    printf("Entier : %d\n", nb);





    int N = strlen(buffer);

    printf("Chaîne : %s\n", buffer);



    char c1 = '3'; // Représente le chiffre 3

    char c2 = '5'; // Représente le chiffre 5



    // Convertir les caractères en leurs valeurs numériques

    int nb1 = c1 - '0'; // 3

    int nb11 = atoi(c1);//3

    int nb2 = c2 - '0'; // 5

    int nb22 = atoi(c2);



    int sum = nb1 + nb2 ; // 3 + 5 = 8



    printf("Somme des chiffres : %d\n", sum);



    double a0, b0, c0;



    printf("\n Entrez les trois longueurs des cotes du triangle : ");

    printf("\n Entrez la première longueur des cotes du triangle : ");

    scanf("%lf", a0);

    printf("\n Entrez la deuxième longueur des cotes du triangle : ");

    scanf("%lf", b0);

    printf("\n Entrez la deuxième longueur des cotes du triangle : ");

    scanf("%lf", c0);





    if (triangle(a0, b0, c0)) {

        printf("\n Le triangle est rectangle.");

    } else {

        printf("\n Le triangle n'est pas rectangle.\n");

    }



    float as, bs;

    printf("Entrez deux entiers : ");

    scanf("%f %f", &as, &bs);

    printf("Le minimum est : %d \n", minimum(a, b));



    int nb3;

    printf("\t\t \t |' ' ' MENU ' ' '| \n");

    printf("\t\t 1. ENREGISTRER LES ENSEIGNANTS. \t\t |\n");

    printf("\t\t 2. RECHERCHE UN ENSEIGNANTS.\t\t | \n");

    printf("\t\t 3. AFFICHER LES ENSEIGNANTS.\t\t | \n");

    printf("\t\t 4. MODIFIER LES INFOS D'UN ENSEIGNANT. \t\t | \n");

    printf("\t\t 5. SUPPRIMER UN ENSEIGNANT. \t\t | \n");

    printf("\t\t 6. TRIER LA LISTE DES ENSEIGNANTS. \t\t | \n");





    return 0;

}

