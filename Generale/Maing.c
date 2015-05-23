#include<stdio.h>
#include<stdlib.h>
#include"Datale.h"
#include"Calendario.h"
#include"Annuale.h"
#include"Calanno.h"

int main(void)
{
    int n;
    
    printf("Ciao benvenuto in Calendario. Scegli cosa vuoi fare: \n");
    printf("Digita 1 per avere informazioni specifiche su una data da te scelta.\n");
    printf("Digita 2 per avere informazioni specifiche su un anno da te scelto.\n");
    printf("Digita 3 per generare il calendario di un anno da te scelto.\n");
    
    scanf("%d",&n);
    
    if(n==1)
        datale();
    if(n==2)
        annuale();
    if(n==3)
        calanno();
    else
    {
        //printf("Non ho capito cosa vuoi fare. Esco!\n");
        return -1;
    }
    
    return 0;
    
}