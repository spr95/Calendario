#include<stdio.h>

void creacal(int *giorni, int *gsett, int *mesi, int *a)
{
    int i;
    
    printf("\nCalendario del %d\n\n",*a);
    
    printf("Gennaio\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
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
		 
        if(giorni[i]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]);
            else
                printf("%d\t",giorni[i]);
        }
        
    }
 
    printf("\n\n");
    printf("Febbraio\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2];i++){
            
        if(giorni[i]-mesi[1]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]);
        }
		 
        if(giorni[i]-mesi[1]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]);
            else
                printf("%d\t",giorni[i]-mesi[1]);
        }
        
    }
    
    printf("\n\n");
    printf("Marzo\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]);
        }
        
    }
     
    printf("\n\n");
    printf("Aprile\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]);
        }
        
    }
    
    printf("\n\n");
    printf("Maggio\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]);
        }
        
    }
    
    printf("\n\n");
    printf("Giugno\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]);
        }
        
    }
    
    printf("\n\n");
    printf("Luglio\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6]+mesi[7];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]);
        }
        
    }
    
    printf("\n\n");
    printf("Agosto\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6]+mesi[7]+mesi[8];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]);
        }
        
    }
     
    printf("\n\n");
    printf("Settembre\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6]+mesi[7]+mesi[8]+mesi[9];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]);
        }
        
    }  
    
    printf("\n\n");
    printf("Ottobre\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6]+mesi[7]+mesi[8]+mesi[9]+mesi[10];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]);
        }
        
    }  
    
    printf("\n\n");
    printf("Novembre\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6]+mesi[7]+mesi[8]+mesi[9]+mesi[10]+mesi[11];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]);
        }
        
    } 

    printf("\n\n");
    printf("Dicembre\n");
    printf("Lu\tMa\tMe\tGi\tVe\tSa\tDo\n");
    
    for(;i<=mesi[1]+mesi[2]+mesi[3]+mesi[4]+mesi[5]+mesi[6]+mesi[7]+mesi[8]+mesi[9]+mesi[10]+mesi[11]+mesi[12];i++){
            
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]==1){
            if(gsett[i]==0)
            printf("\t\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);             
            if(gsett[i]==1)
            printf("\t\t\t\t\t\t%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
            if(gsett[i]==2)
            printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
            if(gsett[i]==3)
            printf("\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
            if(gsett[i]==4)
            printf("\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
            if(gsett[i]==5)
            printf("\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
            if(gsett[i]==6)
            printf("\t\t\t\t%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
        }
		 
        if(giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]>1)
        {
            if(gsett[i]==1)
                printf("%d\n",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
            else
                printf("%d\t",giorni[i]-mesi[1]-mesi[2]-mesi[3]-mesi[4]-mesi[5]-mesi[6]-mesi[7]-mesi[8]-mesi[9]-mesi[10]-mesi[11]);
        }
        
    } 
    
    printf("\n\n");
    
}