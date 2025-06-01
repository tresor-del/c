#include <stdio.h>


int main()
{
    int nombre_devine, nombre_essais;
    nombre_essais = 1;

    do
    {
        if (nombre_essais==1)
        {
            printf("Devinez un nombre: ");
            scanf("%d", &nombre_devine);
        } else if (nombre_essais>10)
        {
            printf("Vous avez atteint le nombre maximal d'essais \n");
            break;
        }else
        {
            printf("Désolé, vous avez perdu. Il vous reste %d essais\n", 11-nombre_essais);
            printf("Recommencez: ");
            scanf("%d", &nombre_devine);
        }
     
        if (nombre_devine==24)
        {
            printf("Vous avez gagné. Nombre d'essais: %d \n", nombre_essais);
            break;
        } else if (nombre_devine==0)
        {
            printf("Vous avez quitter le jeu \n");
            break;
        }
        
        nombre_essais ++;

    } while (nombre_devine != 24 || nombre_devine !=0);
    
    return 0;
}
