#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "ARO.h"

#define MAXS 50


int nb;


const enseignant DEFAUT_ENSEIGNANT = {"Defaut","Defaut","Defaut","/","Defaut","Defaut"};


//declaration d'un tableau global pouf stocker les enseignats[N]

enseignant tabMax[MAXS];

//enseignant tabEnseignant[N];


//procedure pour recolter les informations des enseignants dans un tableau

void recolterInfo(enseignant tab[nb], int nb)

{

    int i;

    for(i=0; i<nb;i++){

        printf("Veuillez enter le matricule");

        scanf("%s", tab[i].matricule);

        printf("Veuillez enter le nom");

        scanf("%s", tab[i].nom);

        printf("Veuillez enter le prenom");

        scanf("%s", tab[i].prenom);

        printf("Veuillez enter le sexe F ou M");

        scanf("%s", tab[i].sexe);

        printf("Veuillez enter le code");

        scanf("%s", tab[i].code);

        printf("Veuillez enter le grade");

        scanf("%s", tab[i].grade);



    }

}

//modifier les informations d'un enseignant

void modifierInfoEnseignant(enseignant tab[nb], int nb, enseignant rech)

{

    int i,j, choix;

    char reponse[2];

    for(i=0; i<nb; i++){

        if(tab[i].matricule == rech.matricule){

            printf("L'ensignant existe");

            printf("Son Nom et Prenom est : %s %s\n Son Sexe est : %s \n Son Grade est : %s", tab[i].nom, tab[i].prenom, tab[i].sexe, tab[i].grade);

            printf("Voulez-vous le modifier ? o pour oui ou n pour n");

            scanf("%s", reponse);

            if(reponse == "o"){

                printf("\n-------------------------------------------\n");

                printf("\t Que voulez vous modifier ? \n");

                printf("\t\t 1. Son matricule ? \n");

                printf("\t\t 2. Son nom ? \n");

                printf("\t\t 3. Son prenom ? \n");

                printf("\t\t 4. Son grade ? \n");

                printf("\t\t 5. Son sexe ? \n");

                printf("\t\t 6. Son code ? \n");

                printf("\t\n-------------------------------------------\n");

                scanf("%d", choix);



                switch(choix)

                {

                case 1:

                    printf("\t Veuillez entrer son nouveau matricule : \n");

                    scanf("%s",tab[i].matricule);

                    break;

                case 2:

                    printf("\t Veuillez entrer son nouveau nom : \n");

                    scanf("%s",tab[i].nom);

                    break;



                case 3:

                    printf("\t Veuillez entrer son nouveau prenom : \n");

                    scanf("%s",tab[i].prenom);

                    break;



                case 4:

                    printf("\t Veuillez entrer son nouveau grade : \n");

                    scanf("%s",tab[i].grade);

                    break;



                case 5:

                    printf("\t Veuillez entrer son nouveau sexe : \n");

                    scanf("%s",tab[i].sexe);

                    break;



                case 6:

                    printf("\t Veuillez entrer son nouveau code : \n");

                    scanf("%s",tab[i].code);

                    break;



                default:

                        printf("\t Erreur ! \n");

                        break;

                }

            }

        }else{

            printf("L'enseignant n'existe pas !");

        }

    }



}



//supprimer un enseignant de lq liste

void supprimerEnseignant(enseignant tab[nb], int nb, enseignant rech)

{

    int i,j;

    char reponse[2];

    for(i=0; i<nb; i++){

        if(tab[i].matricule == rech.matricule){

            printf("L'ensignant existe et Son Nom et Prenom est : %s %s\n Son Sexe est : %s \n Son Grade est : %s", tab[i].nom, tab[i].prenom, tab[i].sexe, tab[i].grade);

            printf("Voulez-vous le supprimer ? o pour oui ou n pour n");

            scanf("%s", reponse);

            if(reponse == "o"){

                for(j=i; j<nb-1; i++){

                    tab[j] = tab[j+1];

                }

                tab[nb-1] = DEFAUT_ENSEIGNANT;

            }

        }else{

            printf("L'enseignant n'existe pas !");

        }

    }



}

//procedure determiner l'exisrence d'un enseignant

void VerifierExistence(enseignant tab[nb], int nb, enseignant rech)

{

    int i;

    for(i=0; i<nb; i++){

        if(tab[i].matricule == rech.matricule){

            printf("L'ensignant existe et Son Nom et Prenom est : %s %s\n Son Sexe est : %s \n Son Grade est : %s", tab[i].nom, tab[i].prenom, tab[i].sexe, tab[i].grade);

        }else{

            printf("L'enseignant n'existe pas !");

        }

    }



}



//afficher tous les informations des differents enseignant

void afficheTout(enseignant tab[nb], int nb)

{



    int i;

    for(i = 0; i<nb ; i++){

        printf("L'enseignant numero : \t %d \n",  i+1);

        printf("MATRICULE : \t %s \n", tab[i].matricule);

        printf("NOM : \t %s \n", tab[i].nom);

        printf("PRENOM : \t %s \n", tab[i].prenom);

        printf("SEXE : \t %s \n", tab[i].sexe);

        printf("GRADE : \t %s \n", tab[i].grade);

        printf("CODE : \t %s \n", tab[i].code);

        printf("\n \n");

        printf("------------------------------------------------------------------\n");

        printf("\n \n");



    }

}


char sign(double a)
{
	return (a < 0) ? '-' : '+';
}

void racine(double a, double b, double c, double *x1, double *x2, int *sentinelle)
{
	double D;

	int continu = 1;


	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				*sentinelle = 4; // Équation indéterminée
			}
			else
			{
				*sentinelle = -1; // Pas de solution
			}
		}
		else
		{
			*sentinelle = 0; // Une solution unique
			*x1 = *x2 = -c / b;
		}
	}
	else
	{
		D = b * b - 4 * a * c;
		if (D < 0)
		{
			*sentinelle = 3; // Solutions complexes
			*x1 = -b / (2 * a);
			*x2 = sqrt(fabs(D)) / (2 * a);
		}
		else if (D == 0)
		{
			*sentinelle = 1; // Solution double
			*x1 = *x2 = -b / (2 * a);
		}
		else
		{
			*sentinelle = 2; // Deux solutions réelles
			*x1 = (-b - sqrt(D)) / (2 * a);
			*x2 = (-b + sqrt(D)) / (2 * a);
		}
	}



	while (continu == 1)

	{



		racine(a, b, c, &x1, &x2, &sentinelle);



		printf("L'equation %.2lfx^2 %c %.2lfx %c %.2lf = 0 ", a, sign(b), fabs(b), sign(c), fabs(c));



 		switch (*sentinelle)

		{

		case -1:

			printf("n'a pas de solution.\n");

			break;



		case 0:

			printf("admet une solution unique reelle : x = %.2lf\n", x1);

			break;



		case 1:

			printf("admet une solution double : x1 = x2 = %.2lf\n", x1);

			break;



		case 2:

			printf("admet deux solutions reelles : x1 = %.2lf et x2 = %.2lf\n", x1, x2);

			break;



		case 3:

			printf("admet deux solutions complexes : z1 = %.2lf + i%.2lf et z2 = %.2lf - i%.2lf\n", x1, x2, x1, x2);

			break;



		case 4:

			printf("admet une infinite de solutions dans C.\n");

			break;



		}



		printf("Voulez-vous resoudre une autre equation ? Tapez 1 pour Oui ou 0 pour Non : ");

		scanf("%d", &continu);

	}
}

// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value)
{
	unsigned int result = 1;
	while (value > 1)
	{
		result *= value;
		value--;
	}
	return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow)
{
	if (pow == 0)
		return 1;
	if (pow == 1)
		return value;
	int accumulator = 1;
	while (pow > 0)
	{
		accumulator *= value;
		pow--;
	}
	return accumulator;
}
void salutation()
{
	printf("Bonjour");
}
char inverseNbre(int nb)
{
	char car[5], *trans[5];
	int i, N;
	if (nb < 1000)
	{ //enonce de l'exercice
		sprintf(car, "%d", nb);
		N = strlen(car);
		for (i = N - 1; i != 0; i--)
		{
			strcat(*trans, car[i]);
		}
		return *trans;
	}
}
int pariteNb(int nb){

	return nb%2 == 0;
}
int compare2Nb(int nb1, int nb2){
	return (nb1 > nb2)? 1: (nb1 == nb2)? 2:3 ;
	//renvoie 1 si le premier nombre est superieur au deuxieme et 2 s'ils sont egaux et 3 au contraire
}


void bigramme( char car[3], char chaine[256] )

{
    int i = 0, occ = 0;
    printf("Veuillez entrer deux caracteres : ");
    scanf("%s", car);


    printf("Veuillez entrer l'expression : ");
    scanf(" %s", chaine);
    while (chaine[i] != '\0') {
        if (chaine[i] == car[0] && chaine[i + 1] == car[1]) {
            occ++;
            i += 2;
        } else {
            i++;
        }
    }

    printf("Le bigramme \"%s\" apparait %d fois dans la chaine.\n", car, occ);
}


int bigramme1(char car[3], char chaine[256]) {

    int i = 0, occ = 0;
	printf("Veuillez entrer deux caracteres : ");
    scanf("%s", car);
    printf("Veuillez entrer l'expression : ");
    scanf("%s", chaine);

    while (chaine[i] != '\0') {
        if (chaine[i] == car[0] && chaine[i + 1] == car[1]) {
            occ++;
            i += 2;
        } else {
            i++;
        }
    }

    return occ;
}

int triangle(double a, double b, double c) {
    if (pow(a, 2) == pow(b, 2) + pow(c, 2) ||
        pow(b, 2) == pow(a, 2) + pow(c, 2) ||
        pow(c, 2) == pow(a, 2) + pow(b, 2)) {


        return 1;
    } else {
        return 0;
    }
}


float minimum(float x1, float x2) {
    if (x1 < x2) {
        return x1;
    } else {
        return x2;
    }
}

void permutation(float *x1, float *x2) {
    float t = *x1;
    *x1 = *x2;
    *x2 = t;
}
int estPremier(int nb) {
    if (nb <= 1) return 0;
    for (int i = 2; i <= sqrt(nb); i++) {
        if (nb % i == 0) return 0;
    }
    return 1;
}
int factoriel(int nb) {
    int s = 1;
    for (int i = 1; i <=  abs(nb); i++) {
        s *= i;
    }
    return s;
}
void diviseursNombre(int nb) {
    printf("Les diviseurs de %d sont : ", nb);
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0) {
            printf("%d ", i);
        }
    printf("\t");


    }

}



int main()

{

    return 0;

}

