#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float A, B;
    printf("veuillez entrer le premier nombre A : ");
    scanf("%f", &A);
    printf("veuillez entrer le deuxieme nombre B : ");
    scanf("%f", &B);

    printf("la somme des deux nombres est : %.2f \n", (A + B));
    printf("la soustraction des deux nombres est : %.2f \n", (A - B));
    printf("le produits des deux nombres est : %.2f \n", (A * B));
    printf("la devision des deux nombres est : %.2f \n", (A / B));

    while (getchar() != '\n');
    getchar();
    
    return 0;
}