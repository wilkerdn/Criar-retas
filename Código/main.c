#include"reta.h"

typedef struct ponto Ponto;

typedef struct reta Reta;

int main(){
	Reta rt_a = criarReta();
	Reta rt_b = criarReta();
	if(Paralela(rt_a,rt_b)==0){
		printf("Nao sao paralelas\n");
	}else{
		printf("Sao paralelas\n");
	}
	return 0;
}