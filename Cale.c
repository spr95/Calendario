#include<stdio.h>
#include<stdlib.h>
#include<Calendario.h>

extern void creacal(int *giorni, int *gsett, int *mesi, int *bis, int *a);

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
    
    for(i=1;i<=n;i++)
        giorni[i]=i;
    
    for(i=1;i<=n;i++)
    {
        gsett[i]=formula(&a,&(giorni[i])); 
    }
    
    for(i=1;i<=n;i++)
    {
        printf("%d", giorni[i]);
        printf("\t");
        printf("%d",gsett[i]);
        printf("\n");
    }
    
    creacal(giorni,gsett,mesi,&bis,&a);
    
    return 0;
}
