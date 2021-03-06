#include"reta.h"

Ponto criarPonto(){
	Ponto eixo;
	printf("Digite o ponto X:\n");
	scanf("%f",&eixo.x);
	printf("Digite o ponto Y:\n");
	scanf("%f",&eixo.y);
	return eixo;
}

Reta criarReta(){
	Reta rt_a;
	rt_a.p1 = criarPonto();
	rt_a.p2 = criarPonto();
	return rt_a;
}

int Paralela(Reta rt_a, Reta rt_b){
	float coef_ang1, coef_ang2;
	coef_ang1 = ((rt_a.p2.y-rt_a.p1.y)/(rt_a.p2.x-rt_a.p1.x));
	coef_ang2 = ((rt_b.p2.y-rt_b.p1.y)/(rt_b.p2.x-rt_b.p1.x));
	if(coef_ang1==coef_ang2){
		return 1;
	}else{
		return 0;
	}
}
