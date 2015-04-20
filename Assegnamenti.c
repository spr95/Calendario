#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"Calendario.h"

void assegnamenti(int *i, int *n, int *giorni, int *gsett, int *a)
{
	for (*i = 1; *i <= *n; (*i)++)
		giorni[*i] = *i;

	for (*i = 1; *i <= *n; (*i)++)
	{
		gsett[*i] = formula(&(*a), &(giorni[*i]));
	}

	for (*i = 1; *i <= *n; (*i)++)
	{
		printf("%d", giorni[*i]);
		printf("\t");
		printf("%d", gsett[*i]);
		printf("\n");
	}
}