#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ARO.h"

int nb;
int resultat = bigramme("nbnb","nb");
    printf("Le bigramme apparait %d fois.\n", resultat);
int main() {
    printf("Veuillez entrer un nombre a trois chiffres");
    scanf("%d", &nb);
    
    // Conversion entier -> chaîne
    char buffer[5];
    sprintf(buffer, "%d", nb);
    
    
    // Conversion chaîne -> entier
    char c[] = "123";
    int nb = atoi(c);
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

    return 0;
}

    double a, b, c;
    printf("Entrez les trois longueurs des côtés du triangle : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (triangle(a, b, c)) {
        printf("Le triangle est rectangle.\n");
    } else {
        printf("Le triangle n'est pas rectangle.\n");
    }

 int a, b;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("Le minimum est : %d\n", minimum(a, b));