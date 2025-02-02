#ifndef __ARO_H
#define __ARO_H


//declaration du type

typedef struct

{

    char matricule[20];

    char nom[20];

    char prenom[20];

    char sexe[2];

    char code[10];

    char grade[10];



}enseignant;



int nb;


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

//liste les diviseurs d'un nombre
void diviseursNombre(int nb);


//calcul le factoriel d'un nombre
int factoriel(int nb);


//Distingue les nombres premiers
int estPremier(int nb);


//Echanger les deux vqleurs
void permutation(float *x1, float *x2);


//determine le plus petit entier
float minimum(float x1, float x2);


//verifie si les trois entrees forme un triangle rectangle
int triangle(double a, double b, double c);


//calcul le nombre de bigramme d'
int bigramme1(char car[3], char chaine[256]);
void bigramme(char car[3], char chaine[256]);







//procedure pour recolter les informations des enseignants dans un tableau

void recolterInfo(enseignant tab[nb], int nb);



//modifier les informations d'un enseignant

void modifierInfoEnseignant(enseignant tab[nb], int nb, enseignant rech);



//afficher tous les informations des differents enseignant

void afficheTout(enseignant tab[nb], int nb);



//supprimer un enseignant de lq liste

void supprimerEnseignant(enseignant tab[nb], int nb, enseignant rech);



//procedure determiner l'exisrence d'un enseignant

void VerifierExistence(enseignant tab[nb], int nb, enseignant rech);

#endif

