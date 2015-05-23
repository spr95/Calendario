#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"Calendario.h"
#include"Creacal.h"

int main(void)
{
    int a,bis,n,i;
    n=365;
    int mesi[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int *giorni;
    int *gsett;
    printf("Inserisci l'anno di cui vuoi generare il calendario: ");
    scanf("%d",&a);
    
    giorni=malloc(n*sizeof(int));
    gsett=malloc(n*sizeof(int));
    
    bis=bisestile(&a);
    if(bis==1)
    {
        mesi[2]=29;
        n=366;
        giorni=realloc(giorni,n*sizeof(int));
        gsett=realloc(gsett,n*sizeof(int));
    }
    
    assegnamenti(&i, &n, giorni, gsett, &a);
    
    creacal(giorni,gsett,mesi,&a);
    
    return 0;
}
