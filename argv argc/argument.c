#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("argv contient %d elements :\n", argc);
    for ( i = 0; i < argc; i++ )
        printf(" %d : %s\n",i, argv[i]);
    return 0;
}
