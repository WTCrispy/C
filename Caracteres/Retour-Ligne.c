#include <stdio.h>
#include <string.h>
int main()
{
    char prenom[100];
    int cpt;
    printf("Ton prenom ?\n");
    fgets(prenom, 100, stdin);
    for (cpt = 0; cpt < strlen(prenom); cpt++)
    {
        printf("%c\n", prenom[cpt]);
    }
    return 0;
}
