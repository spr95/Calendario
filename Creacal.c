#include<stdio.h>

void creacal(int *giorni, int *gsett, int *mesi, int *bis, int *a)
{
    int i;
    
    printf("Calendario del %d\n",*a);
    
    printf("Gennaio\n");
    printf("Lu\tMa\tMe\tGi\tVe\Sa\tDo\n");
    
    for(i=1;i<=mesi[1];i++)
    {
         if(giorni[i]==1)
         {
             if(gsett[i]==0)
                 printf("\t\t\t\t\t%d\t",giorni[i]);
             if(gsett[i]==1)
                 printf("\t\t\t\t\t\t%d\n",giorni[i]);
             if(gsett[i]==2)
                 printf("%d\t",giorni[i]);
             if(gsett[i]==3)
                 printf("\t%d\t",giorni[i]);
             if(gsett[i]==4)
                 printf("\t\t%d\t",giorni[i]);
             if(gsett[i]==5)
                 printf("\t\t\t%d\t",giorni[i]);
             if(gsett[i]==6)
                 printf("\t\t\t\t%d\t",giorni[i]);
        }
         i++
    }
     
}