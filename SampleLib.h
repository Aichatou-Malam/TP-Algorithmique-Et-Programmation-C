#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
// Définition d'une fonction de permutation de deux entiers.
void permutation(int *a, int *b);
// Définition d'une fonction d'affichage d'un tableau.
void displayTable();
// Exercice 7: Résolution équation second degré
void resoudreEquation(double a, double b, double c);
// Exercice 12: Vérifier si un nombre est premier (retourne 1 si premier, 0 sinon)
int estPremier(unsigned int n);
// Exercice 13:
// Structure point
  typedef struct {
    double x;
    double y;
  } Point;
  // Calculer distance entre deux points
float distancePoints(Point p1, Point p2);
#endif
