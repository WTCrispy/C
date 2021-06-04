#include<stdio.h>
int minimum(int nb1, int nb2, int nb3, int nb4, int min)
{
    if(nb1<nb2 && nb1<nb3 && nb1<nb4) {
        min=nb1;
    }
    else if (nb2<nb1 && nb2<nb3 && nb2<nb4){
        min=nb2;
    }
    else if (nb3<nb1 && nb3<nb2 && nb3<nb4){
        min=nb3;
    }
    else if(nb4<nb3 && nb4<nb2 && nb4<nb1){
        min=nb4;
    }
    return min;
}

int main()

{
    int mini;
    int val1;
    int val2;
    int val3;
    int val4;

    printf("Rentrez votre premier nombre : ");
    scanf("%d", &val1);
    printf("Rentrez votre second nombre : ");
    scanf("%d", &val2);
    printf("Rentrez votre troisieme nombre : ");
    scanf("%d", &val3);
    printf("Rentrez votre dernier nombre : ");
    scanf("%d", &val4);
    printf("Minimum = %d", minimum(val1,val2,val3, val4, mini));
    return 0;
}
