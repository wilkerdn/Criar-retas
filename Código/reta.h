#include <stdio.h>

typedef struct ponto{
	float x;
	float y;
}Ponto;

typedef struct reta{
	Ponto p1;
	Ponto p2;
}Reta;

Ponto criarPonto();
Reta criarReta();
int Paralela(Reta rt_a, Reta rt_b);
