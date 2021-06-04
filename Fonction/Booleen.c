#include<stdio.h>
#include <stdlib.h>

int xor(int a, int b)
{
int res;
        if (a==1 && b==1)
        {
            res=0;
        }

        else if (a==1 && b==0)
        {
            res=1;
        }

        else if (a==0 && b==1)
        {
            res=1;
        }

        else
        {
            res=0;
        }

    return res;
}

int main()
{
    int res0;

    res0=xor(0,0);
    printf("%d\n", res0);
    res0=xor(1,1);
    printf("%d\n", res0);
    res0=xor(1,0);
    printf("%d\n", res0);
    res0=xor(0,1);
    printf("%d\n", res0);

    return 0;
}
