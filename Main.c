#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"
int main( void ) {
         int choix;
    
    do {
        printf("\n---MENU PRINCIPAL---\n");
        printf("1. Tester power() et fact()\n");
        printf("2. Exercice 7: Equation du second degre\n");
        printf("3. Exercice 12.a: Nombre premier\n");
        printf("4. Exercice 13: Distance entre deux points\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        
        switch (choix) {
            case 1: {
              int result = power( 2, 3 );
              printf( "2³ == %d\n", result );
              result = fact( 6 );
              printf( "6! == %d\n", result );
                break;
            }
                        case 2: {
                // Exercice 7: Equation du second degré
                double a, b, c;
                printf("Resolution de ax^2 + bx + c = 0\n");
                printf("Entrez a, b, c: ");
                scanf("%lf %lf %lf", &a, &b, &c);
                resoudreEquation(a, b, c);
                break;
            }
            
            case 3: {
                // Exercice 12.a: Nombre premier
                unsigned int n;
                printf("Entrez un entier positif: ");
                scanf("%u", &n);
                
                if (estPremier(n)) {
                    printf("%u est un nombre premier.\n", n);
                } else {
                    printf("%u n'est pas un nombre premier.\n", n);
                }
                break;
            }
            
            case 4: {
                // Exercice 13: Distance entre deux points
                Point p1, p2;
                printf("Point 1 - Entrez x et y: ");
                scanf("%lf %lf", &p1.x, &p1.y);
                printf("Point 2 - Entrez x et y: ");
                scanf("%lf %lf", &p2.x, &p2.y);
                
                double d = distancePoints(p1, p2);
                printf("Distance entre les deux points: %.2f\n", d);
                break;
            }
            
            case 0:
                printf("Au revoir!\n");
                break;
                
            default:
                printf("Choix invalide. Reessayez.\n");
        }
        
    } while (choix != 0);
return EXIT_SUCCESS;
}