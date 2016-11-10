#include <stdio.h>
#include "Calendario.h"
#include"Datale.h"

void datale (void){
  int g;
  int m;
  int a;
  char s;
  int ndo;
  int ep;
  int el;
  int bis;
  int calg;
  int rim;
  int gsett;
  int nsett;
  int gG=0,mG=0,aG=0;
  long long GG;
  fprintf(stdout, "Inserisci il giorno del quale vuoi conoscere i dati nel formato GG/MM/AAAA: " );
  fscanf(stdin,"%d%c%d%c%d",&g,&s,&m,&s,&a );
  bis=bisestile(&a);
  ndo=Numerodoro(&a);
  ep=Epatta(&a,&ndo);
  el=EtaLuna(&ep,&g,&m,&a,&bis);
  calg=calcologiorno(&g,&m,&bis);
  if(a>1582)
    gsett=formula(&a, &calg);
  else
    gsett=formulaG(&a, &calg);  
  if(bis==1)
      rim=366-calg;
  else
      rim=365-calg;
giornoG(&gG,&mG,&aG,&bis,&g,&m,&a);  

if(a>1582)
GG=GiornoGiuliano(&g,&m,&a);
else
GG=GiornoGiulianoG(&g, &m, &a);

nsett=CalcoloSettimana(&g,&m,&a);

  fprintf(stdout, "L'età della luna alla data scelta è di %i giorni.\n",el);
  fprintf(stdout,"Il giorno scelto è il  %d giorno dell'anno.\n",calg);
  fprintf(stdout,"Rimangono %d giorni alla fine dell'anno.\n",rim);
  
  switch(gsett)
  {
      case 0: fprintf(stdout, "Il giorno scelto è Sabato.\n");
      break;
      case 1: fprintf(stdout, "Il giorno scelto è Domenica.\n");
      break;
      case 2: fprintf(stdout, "Il giorno scelto è Lunedì.\n");
      break;
      case 3: fprintf(stdout, "Il giorno scelto è Martedì.\n");
      break;
      case 4: fprintf(stdout, "Il giorno scelto è Mercoledì.\n");
      break;
      case 5: fprintf(stdout, "Il giorno scelto è Giovedì.\n");
      break;
      case 6: fprintf(stdout, "Il giorno scelto è Venerdì.\n");
      break;
   }
   if(a>1582)
   {
    fprintf(stdout,"Il giorno scelto è il %d/%d/%d del calendario giuliano.\n",gG,mG,aG);
   }
   fprintf(stdout,"Il giorno scelto è il %lld Giorno Giuliano.\n",GG);
   fprintf(stdout,"Il giorno scelto cade nella %d settimana dell'anno\n",nsett);
  
  return;
}
