#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "ARO.h"
/*
char sign(double a)
{
	return (a < 0) ? '-' : '+';
}

void racine(double a, double b, double c, double *x1, double *x2, int *sentinelle)
{
	double D;

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
}

int main()
{
	double a, b, c, x1, x2;
	int sentinelle, continu = 1;

	while (continu == 1)
	{
		printf("Entrer les coefficients de l'equation ax^2 + bx + c = 0\n");
		printf("Entrer le coefficient a : ");
		scanf("%lf", &a);
		printf("Entrer le coefficient b : ");
		scanf("%lf", &b);
		printf("Entrer le coefficient c : ");
		scanf("%lf", &c);

		racine(a, b, c, &x1, &x2, &sentinelle);

		printf("L'equation %.2lfx^2 %c %.2lfx %c %.2lf = 0 ", a, sign(b), fabs(b), sign(c), fabs(c));

		switch (sentinelle)
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

	return 0;
}
*/
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
	char car[5], *trans[];
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


void bigramme( char car[3], char chaine[256] ) {
    
    int i = 0, occ = 0;
    printf("Veuillez entrer deux caracteres : ");
    scanf("%s", car);
    printf("Veuillez entrer l'expression : ");
    scanf(" %[^\n]", chaine);

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


int bigramme(char car[3], char chaine[256]) {
    
    int i = 0, occ = 0;
	printf("Veuillez entrer deux caracteres : ");
    scanf("%s", car);
    printf("Veuillez entrer l'expression : ");
    scanf(" %[^\n]", chaine);

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
int minimum(int x1, int x2) {
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
    for (int i = 1; i <= nb; i++) {
        s *= i;
    }
    return s;
}
void diviseursNombre(int nb) {
    printf("Les diviseurs de %d sont : ", nb);
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0) {
            printf("%d ", i);
        }else{
        	printf("0");
    }
    printf("\n");
}
int somme(int a, int b){
	
	return a+b;
}