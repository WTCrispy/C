#include<stdio.h>
int main ()
{
    int compteur=0;
    float note;
    float moy=0;
    float total=0;

    printf("Veuillez rentrer 10 notes\n");

    while (compteur<10) {                        /*Le calcul de la moyenne de 10 notes se fait par l'incrémentation d'un compteur. La boucle va continuer tant que le compteur est inférieur ou égal à 10*/
        printf("Rentrez une note : ");
        scanf("%f", &note);
        total=total+note;
        compteur++;                             /*Auto-incrémentation du compteur*/

    }
    moy=total/compteur;                          /*Calcul de la moyenne en divisant la note par le nombre de note (compteur)*/
    printf("Votre moyenne est de %f0.2", moy);

    return 0;
}

