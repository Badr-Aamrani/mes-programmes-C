#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n1, n2, n3, S, M;
    char Nom[50];

printf("=========================================\n");
printf("       GESTION DES ETUDIANTS\n");
printf("=========================================\n");

printf("entrer votre nom : ");
scanf("%s", Nom);
printf("entrer la premier note : ");
scanf("%f", &n1);
printf("entrer la deuxieme note : ");
scanf("%f", &n2);
printf("entrer la troisieme note : ");
scanf("%f", &n3);

S = n1 + n2 + n3;
M = S / 3;

printf("=========================================\n");
printf("              RESULTAT \n");
printf("=========================================\n");

printf("Etudiant : %s\n", Nom);
printf("Moyenne : %.2f\n", M);
if (M > 10)
    printf("Decision : Admis \n ");
else 
    printf("Decision : Non Admis \n");

printf("=========================================");

while (getchar() != '\n');
    getchar();
    
    return 0;
}