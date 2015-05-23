#include<stdio.h>
#include<stdlib.h>
#include "Calendario.h"
#include"Annuale.h"

void annuale (void)
{
  int lin;
  int n;
  int ndo;
  int e;
  int cs;
  int ir;
  char mr;
  int bis;
  struct Pasqua Pas;
  struct Pasqua PasO;
  fprintf(stdout, "Benvenuto in CalendaSPRio. Welcome to calendaSPR. Bienvenue dans le calendSPRier.\n");
  fprintf(stdout, "Scegliete la vostra lingua. Choose your language. Choisissez votre langue.\n");
  fprintf(stdout, "Inserite 1 per l'Italiano. Digit 2 for English. Entrez 3 pour le français.\n");
  fscanf(stdin,"%d",&lin);
  switch (lin){
    case 1: fprintf(stdout,"Inserisci l'anno di cui vuoi conoscere i dati relativi al calendario:");
    break;
    case 2: fprintf(stdout,"Enter the year you want to know the data for the calendar:");
    break;
    case 3: fprintf(stdout,"Entrez l'année où vous voulez connaître les données pour le calendrier:");
    break;
    default:return;
  }
  fscanf(stdin,"%d",&n);
  Calcolo_Pasqua(&n,&Pas);
  Calcolo_PasquaG(&n,&PasO);
  ndo=Numerodoro(&n);
  e=Epatta(&n,&ndo);
  cs=CicloSolare(&n);
  ir=IndizioneRomana(&n);
  mr=MartirologioRomano(&e);
  bis=bisestile(&n);
    switch (lin){
    case 1: fprintf(stdout, "Il giorno di Pasqua secondo il calendario gregoriano è il %u%c%u.\n",Pas.GP,'/',Pas.MP);
	    fprintf(stdout, "Il giorno di Pasqua secondo il calendario giuliano è il %u%c%u.\n",PasO.GP,'/',PasO.MP);
	    fprintf(stdout, "Il numero d'oro dell'anno %d è: %d.\n",n,ndo);
	    fprintf(stdout, "L'Epatta per l'anno %d è: %d.\n",n,e);
	    fprintf(stdout, "Il Ciclo Solare per l'anno %d è: %d.\n",n,cs);
	    fprintf(stdout, "L'Indizione Romana per l'anno %d è: %d.\n",n,ir);
	    fprintf(stdout, "La lettera del Martirologio Romano per l'anno %d è: %c.\n",n,mr);
            if (bis==1)
                fprintf(stdout, "L'anno scelto è bisestile.\n");
            else
                fprintf(stdout,"L'anno scelto non è bisestile.\n");
    break;
    case 2: fprintf(stdout, "The day of Easter according to the Gregorian calendar is the %u%c%u.\n",Pas.GP,'/',Pas.MP);
	    fprintf(stdout, "The day of Easter according to the Julian calendar is the %u%c%u.\n",PasO.GP,'/',PasO.MP);
	    fprintf(stdout, "The Golden number for the year %d is: %d.\n",n,ndo);
	    fprintf(stdout, "The epacts for the year %d is: %d.\n",n,e);
	    fprintf(stdout, "The solar cycle for the year %d is: %d.\n",n,cs);
	    fprintf(stdout, "The Roman Indiction for the year %d is: %d.\n",n,ir);
	    fprintf(stdout, "The letter of the Roman Martyrology for the year %d is: %c.\n",n,mr);
             if (bis==1)
                fprintf(stdout, "The chosen year is a leap year.\n");
            else
                fprintf(stdout,"The chosen year is not a leap year.\n");
    break;
    case 3: fprintf(stdout, "Le jour de Pâques selon le calendrier grégorien est le %u%c%u.\n",Pas.GP,'/',Pas.MP);
	    fprintf(stdout, "Le jour de Pâques selon le calendrier julien est le %u%c%u.\n",PasO.GP,'/',PasO.MP);
	    fprintf(stdout, "Le nombre d'or de l'année %d est: %d.\n",n,ndo);
	    fprintf(stdout, "Les épactes pour l'année %d est: %d.\n",n,e);
	    fprintf(stdout, "Le cycle solaire pour l'année %d est: %d.\n",n,cs);
	    fprintf(stdout, "L'Indicion Romain pour l'année %d est: %d.\n",n,ir);
	    fprintf(stdout, "La lettre du Martyrologe romain pour l'année %d est: %c.\n",n,mr);
             if (bis==1)
                fprintf(stdout, "L'année choisi est bissextile.\n");
            else
                fprintf(stdout,"L'année choisi n'est pas bissextile.\n");
    break;
    default:return;
  }
  
  Prossimi_Uguali(&n,&lin);
  
  return;
}