#include<stdio.h>
int main ()
{
    int compteur=0;
    float note;
    float moy=0;
    float total=0;

    printf("Veuillez rentrer 10 notes\n");

    while (compteur<10) {                        /*Le calcul de la moyenne de 10 notes se fait par l'incr�mentation d'un compteur. La boucle va continuer tant que le compteur est inf�rieur ou �gal � 10*/
        printf("Rentrez une note : ");
        scanf("%f", &note);
        total=total+note;
        compteur++;                             /*Auto-incr�mentation du compteur*/

    }
    moy=total/compteur;                          /*Calcul de la moyenne en divisant la note par le nombre de note (compteur)*/
    printf("Votre moyenne est de %f0.2", moy);

    return 0;
}

