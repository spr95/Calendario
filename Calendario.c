#include<stdio.h>
#include<stdlib.h>
#include "Calendario.h"

void Calcolo_PasquaG(int *N, struct Pasqua *PasO)
{
  
int G=*N%19;
int I=((19*G+15)%30);
int J=((*N+*N/4+I)%7);
int L=I-J;
PasO->MP=3+(L+40)/44;
PasO->GP=L+28-31*(PasO->MP/4);
PasO->GP=PasO->GP+13;
if (PasO->MP==3) {
  PasO->MP=4;
PasO->GP=PasO->GP-31;  
}
  
}

void Calcolo_Pasqua(int *N, struct Pasqua *Pas)
{
  
int G=*N%19;
int C=*N/100;
int H=((C-C/4-(8*C+13)/25+19*G+15)%30);
int I=H-(H/28)*(1-(29/(H+1))*((21-G)/11));
int J=((*N+*N/4+I+2-C+C/4)%7);
int L=I-J;
Pas->MP=3+(L+40)/44;
Pas->GP=L+28-31*(Pas->MP/4);

}

int Numerodoro (int *a)
{
  int n;
  
  n=*a%19;
  n=n+1;
  
  return n;
}

int Epatta (int *n, int *ndo)
{
  int ep;
  int a=((*ndo*11)-10)%30;
  int z=*n/100;
  int b=z-15;
  int c=(b-(b/25))/3;
  int d=(b*3)/4;
  int e=(d-c)%30;
  
  if(e>a)
    ep=30-(e-a);
  else
  ep=a-e;
  
  return ep;
    
}

int CicloSolare (int *n)
{
  int cs=(*n+9)%28;
  
  if (cs==0)
    cs=28;
  
  return cs;
}

int EtaLuna(int *ep, int *g, int *m, int *a, int *bis){
  int el;
  
  if(*bis==0)
  {
  switch(*m){
    case 1: el=*ep+0+*g;
    break;
    case 2: el=*ep+1+*g;
    break;
    case 3: el=*ep+0+*g;
    break;
    case 4: el=*ep+1+*g;
    break;
    case 5: el=*ep+2+*g;
    break;
    case 6: el=*ep+3+*g;
    break;
    case 7: el=*ep+4+*g;
    break;
    case 8: el=*ep+5+*g;
    break;
    case 9: el=*ep+7+*g;
    break;
    case 10: el=*ep+7+*g;
    break;
    case 11: el=*ep+9+*g;
    break;
    case 12: el=*ep+9+*g;
    break;
  }
  }
  else{
     switch(*m){
    case 1: el=*ep+0+*g;
    break;
    case 2: el=*ep+1+*g;
    break;
    case 3: el=*ep+0+*g+1;
    break;
    case 4: el=*ep+1+*g+1;
    break;
    case 5: el=*ep+2+*g+1;
    break;
    case 6: el=*ep+3+*g+1;
    break;
    case 7: el=*ep+4+*g+1;
    break;
    case 8: el=*ep+5+*g+1;
    break;
    case 9: el=*ep+7+*g+1;
    break;
    case 10: el=*ep+7+*g+1;
    break;
    case 11: el=*ep+9+*g+1;
    break;
    case 12: el=*ep+9+*g+1;
    break;
  }
  }
  if (el>30)
    el=el-30;
  
  return el;
}

int IndizioneRomana(int *n)
{
  int ir;
  ir=(*n-312)%15;
  
  if (ir==0)
    ir=15;
  
  return ir;

  
}

char MartirologioRomano(int *e)
{
  char mr;
  
  switch(*e){
    case 1: mr='a';
    break;
    case 2: mr='b';
    break;
    case 3: mr='c';
    break;
    case 4: mr='d';
    break;
    case 5: mr='e';
    break;
    case 6: mr='f';
    break;
    case 7: mr='g';
    break;
    case 8: mr='h';
    break;
    case 9: mr='i';
    break;
    case 10: mr='k';
    break;
    case 11: mr='l';
    break;
    case 12: mr='m';
    break;
    case 13: mr='n';
    break;
    case 14: mr='p';
    break;
    case 15: mr='q';
    break;
    case 16: mr='r';
    break;
    case 17: mr='s';
    break;
    case 18: mr='t';
    break;
    case 19: mr='u';
    break;
    case 20: mr='A';
    break;
    case 21: mr='B';
    break;
    case 22: mr='C';
    break;
    case 23: mr='D';
    break;
    case 24: mr='E';
    break;
    case 25: mr='F';
    break;
    case 26: mr='G';
    break;
    case 27: mr='H';
    break;
    case 28: mr='M';
    break;
    case 29: mr='N';
    break;
    case 0: mr='P';
    break;
    
  }
  return mr;
}

int bisestile(int *a)
{
        if(*a%4!=0)
        return 0;
        if(*a%4==0)
        {
            if(*a<1582)
            return 1;
                else 
            {
                if(*a%100!=0)
                return 1;
                else if (*a%100==0 && *a%400==0)
                return 1;
                else if(*a%100==0 && *a%400!=0)
                return 0;
            }
        }
    return -1;
}

int calcologiorno(int *g, int *m, int * bis)
{
   int t;

   if(*m==1)
       t=*g;
   
   else if(*m==2)
       t=31+*g;
   
   else if(*m==3)
   {
       if(*bis==1)
          t=31+29+*g;
       else
          t=31+28+*g;
  }   
  
  else if(*m==4)
   {
       if(*bis==1)
          t=31+29+31+*g;
       else
          t=31+28+31+*g;
  }
  
    else if(*m==5)
   {
       if(*bis==1)
          t=31+29+31+30+*g;
       else
          t=31+28+31+30+*g;
  }
  
      else if(*m==6)
   {
       if(*bis==1)
          t=31+29+31+30+31+*g;
       else
          t=31+28+31+30+31+*g;
  }
   
    else if(*m==7)
   {
       if(*bis==1)
          t=31+29+31+30+31+30+*g;
       else
          t=31+28+31+30+31+30+*g;
  }
  
      else if(*m==8)
   {
       if(*bis==1)
          t=31+29+31+30+31+30+31+*g;
       else
          t=31+28+31+30+31+30+31+*g;
  }
  
        else if(*m==9)
   {
       if(*bis==1)
          t=31+29+31+30+31+30+31+31+*g;
       else
          t=31+28+31+30+31+30+31+31+*g;
  }
  
          else if(*m==10)
   {
       if(*bis==1)
          t=31+29+31+30+31+30+31+31+30+*g;
       else
          t=31+28+31+30+31+30+31+31+30+*g;
  }
  
            else if(*m==11)
   {
       if(*bis==1)
          t=31+29+31+30+31+30+31+31+30+31+*g;
       else
          t=31+28+31+30+31+30+31+31+30+31+*g;
  }
  
              else if(*m==12)
   {
       if(*bis==1)
          t=31+29+31+30+31+30+31+31+30+31+30+*g;
       else
          t=31+28+31+30+31+30+31+31+30+31+30+*g;
  }
  
  return t;
}

int formula(int *a, int *t)
{
    int x,y,z,u,w,ret;
    
    x=(*a-1)/4;
    y=(*a-1)/100;
    z=(*a-1)/400;
    u=*a+x-y+z;
    w=u+*t;
    ret=w%7;
    
    return ret;
    
}

int formulaG(int *a, int *t)
{
    int x,y,ret;
    
    x=(*a-1)/4;
    y=*a+x+*t-2;
    ret=y%7;
    
    return ret;
}

void giornoG(int *gG, int *mG, int *aG, int *bis, int *g, int *m, int *a)
{
    int lastday = 31;
    
    switch(*m)
    {
        case 4: lastday=30;
        case 6: lastday=30;
        case 9: lastday=30;
        case 11: lastday=30;
        case 2: if(*bis==1)
                        lastday=29;
                        else
                            lastday=28;
    }
    *mG=*m;
    *aG=*a;    
    *gG=*g-13;
    
    if(*gG<0)
    {
        *mG=*m-1;
        *gG=*gG+lastday;
    }
    
    if(*mG==0)
    {
        *mG=12;
        *aG=*a-1;
    }
    
}

long long GiornoGiuliano( int *g, int *m, int *a)
{
    int r;
    int y;
    int f;
    int GG;
    
    r=(14-*m)/12;
    y=*a+4800-r;
    f=*m+12*r-3;
    GG=*g+((153*f+2)/5)+365*y+(y/4)-(y/100)+(y/400)-32045;
    return GG;
}

long long GiornoGiulianoG( int *g, int *m, int *a)
{
    int r;
    int y;
    int f;
    int GG;
    
    r=(14-*m)/12;
    y=*a+4800-r;
    f=*m+12*r-3;
    GG=*g+((153*f+2)/5)+365*y+(y/4)-32083;
    return GG;
}

int CalcoloSettimana(int *g, int *m, int *a)
{
    int y,b,c,s,e,f,z,d,n;
    
    if(*m==1 || *m==2)
    {
        y=*a-1;
        b=(y/4)-(y/100)+(y/400);
        c=((y-1)/4)-((y-1)/100)+((y-1)/400);
        s=b-c;
        e=0;
        f=*g-1+31*(*m-1);
    }
    else
    {
        y=*a;
        b=(y/4)-(y/100)+(y/400);
        c=((y-1)/4)-((y-1)/100)+((y-1)/400);
        s=b-c;
        e=s+1;
        f=*g+((153*(*m-3)+2)/5)+58+s;
    }
    z=(y+b)%7;
    d=(f+z-e)%7;
    n=f+3-d;
    
    if(n<0)
        return 53-((z-s)/5);
    else if(n>364+s)
        return 1;
    else 
        return (n/7)+1; //In questo algoritmo d è il giorno della settimana e f+1 il numero ordinale dell'anno in corso.
}