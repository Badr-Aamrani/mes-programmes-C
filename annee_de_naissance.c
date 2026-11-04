#include <stdio.h>
int main () {

    int An, Ac;
    printf("donner annee courant:");
    scanf("%d", &Ac);
    printf("etree la date de naissance:");
    scanf("%d", &An);
    printf("l'age est: %d\n", Ac-An);

    while (getwchar() != '\n');
    getchar();

return 0;
}