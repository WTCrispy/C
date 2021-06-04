#include <stdio.h>
#include <string.h>
int main()
{
    char min;
    char maj;
    printf("Votre caractere :\n");
min = getchar();
fflush(stdin);
maj=getchar();

if (min >= 'a' && min <= 'z'){
 printf("%c est une Minuscule\n", min);
}
else{
    printf("%c N'est pas une minuscule!\n",min);

}
if (maj >= 'A' && maj <= 'Z'){
 printf("%c est une Majuscule\n", maj);
}
else{
    printf("%c N'est pas une majuscule!\n",maj);
}
}
