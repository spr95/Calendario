#if !defined CALENDARIO_H
#define CALENDARIO_H


struct Pasqua {
  int GP;
  int MP;
};

extern void Calcolo_PasquaG(int *N, struct Pasqua *PasO);

extern void Calcolo_Pasqua(int *N, struct Pasqua *Pas);

extern int Numerodoro (int *a);

extern int Epatta (int *n, int *ndo);

extern int CicloSolare (int *n);

extern int EtaLuna(int *ep, int *g, int *m, int *a, int *bis);

extern int IndizioneRomana(int *n);

extern char MartirologioRomano(int *e);

extern int bisestile(int *a);

extern int calcologiorno(int *g, int *m, int * bis);

extern int formula(int *a, int *t);

extern int formulaG(int *a, int *t);

extern void giornoG(int *gG, int *mG, int *aG, int *bis, int *g, int *m, int *a);

extern long long GiornoGiuliano( int *g, int *m, int *a);

extern long long GiornoGiulianoG( int *g, int *m, int *a);

extern int CalcoloSettimana(int *g, int *m, int *a);


#endif /*CALENDARIO_H*/