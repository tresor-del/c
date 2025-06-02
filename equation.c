#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    float  discriminant, x0, x1, x2;

    printf("Donnez les valeurs de a, b et c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("L'équation est %.2fx² + %.2fx + %.2f \n", a, b, c);

    discriminant = b*b - 4*a*c;

    printf("Le discriminant donne: %.2f\n", discriminant);

    if (discriminant == 0)
    {
        x0 = - b / (2*a);
        printf("L'équation a une seule solution: \n");
        printf("x0: %.3f\n", x0);

    } else if (discriminant<0)
    {
        printf("L'équation n'a pas de solution\n");
    } else
    {
        x1 = (b + sqrt(discriminant)) / (2*a);
        x2 = (-b + sqrt(discriminant)) / (2*a);

        printf("L'équation a deux solutions: \n");
        printf("x1: %.3f\n", x1);
        printf("x2: %.3f\n", x2);
    }   
}