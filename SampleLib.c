#include "SampleLib.h"
#include<math.h>
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
// Exercice7: Résolution de l'équation du second degré dans R
void resoudreEquation(double a, double b, double c){
    if(a==0){
        printf("Ce n'est pas une équation du second degré\n");
        return;
    }
    double delta = ((b*b) - 4*a*c);
    if(delta > 0){
        double x1 = (-b - sqrt(delta));
        double x2 = (-b + sqrt(delta));
        printf("Deux solutions: x1= %.2f et x2= %.2f\n", x1, x2);
    }
    else if(delta == 0){
      double x0 = (-b / (2*a));
      printf("Une solution double: x0= %.2f\n", x0);
    }
    else{
        printf("L'équation n'admet pas de solution dans R\n");
    }
}
// Exercice 12.a Verification qu'un nombre est premier ou non
int estPremier(unsigned int n){
    if(n<=1) return 0; // 0 et 1 ne sont pas premiers
    // On cherche un diviseur entre 2 et la racine carrée de n
    for(int i=2; i*i <=n; i++){
       if(n % i == 0){
        return 0; // Trouvé un diviseur donc pas premier
       }
    }
    return 1; // Aucun diviseur trouvé donc est premier
}
// Exercice 13: Distance entre deux points du plan
float distancePoints(Point p1, Point p2){
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}