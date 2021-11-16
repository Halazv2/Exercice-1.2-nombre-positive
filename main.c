#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[50],x=0,compteur=0;
    do {
    printf("Enter the number x: ");
    scanf("%d",&tab[x]);
   x++;
    }while(tab[x-1]>0);

    for (int y=0;y<x-1;y++){
        printf("entier positif:%d\n",tab[y]);
        compteur++;

        }
        printf("\nVous avez entrer %d entiers positif", compteur);
         return 0;
    }
