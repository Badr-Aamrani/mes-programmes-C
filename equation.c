#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a, b, c, D, S1, S2, Q;

printf("veuillez entrer la valeur de a : ");
scanf("%f", &a);
printf("veuillez entrer la valeur de b : ");
scanf("%f", &b);
printf("veuillez entrer la valeur de c : ");
scanf("%f", &c);
    
    D = (pow(b, 2)) - 4 * a * c;

if (D > 0) {
    S1 = (- b + sqrt(D)) / (2 * a);
    S2 =(- b - sqrt(D)) / (2 * a);

printf(" l'equation admet deux solutions qui sont : %.2f %.2f\n", S1, S2);
}

else if (D = 0) {
    Q = (- b) / (2 * a);

printf(" l'equation admet une seul solution qui est : %.2f\n", Q);
}

else 
printf("l'equation n'admet pas de solution \n");

while (getchar() != '\n');
    getchar();
    
    return 0;
}