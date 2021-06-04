#include<stdio.h>
int minimum(int nb1, int nb2, int min)
{
    if(nb1<nb2) {
        min=nb1;
    }
    else{
        min=nb2;
    }
    return min;
}

int main()
{
    int mini;
    int val1;
    int val2;

    printf("Rentrez votre premier nombre : ");
    scanf("%d", &val1);
    printf("Rentrez votre second nombre : ");
    scanf("%d", &val2);
    printf("Minimum = %d", minimum(val1,val2,mini));
    return 0;
}
