#include<stdio.h>
int doubler(int nb)
{
    return nb * 2;
}

int main()
{
    int val;

    printf("Nombre ? ");
    scanf("%d", &val);
    printf("Double = %d", doubler(val));
    return 0;
}
