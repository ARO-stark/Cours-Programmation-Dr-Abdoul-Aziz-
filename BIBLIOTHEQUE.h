#ifndef __ARO_H
#define __ARO_H

// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value);
// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow);
//Definition d'une fonction signe'
char sign(double a);
//Definition d'une fonction racine d'une equation second degre
void racine(double a, double b, double c, double *x1, double *x2, int *sentinelle);
// afficher Bonjour
void salutation();
// ecriture invrrse d'un nombre a trois chiffre'
char inverseNbre(int nb);
// verifie la parite d'un nombre'
int pariteNb(int nb);

//compare deux nombres
int compare2Nb(int nb1, int nb2);

//
void diviseursNombre(int nb);

int factoriel(int nb);

int estPremier(int nb);

void permutation(float *x1, float *x2);

int minimum(int x1, int x2);

int triangle(double a, double b, double c);

int bigramme(char car[3], char chaine[256]);
int bigramme(char car[3], char chaine[256]);

int somme(int a, int b);

#endif