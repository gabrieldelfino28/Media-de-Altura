#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	system("COLOR 0B");
	int sexo,contfem = 0,contmasc = 0,i=1,cont = 0;
	float alt,altmaior,altmenor,mediafem=0,mediamasc=0, dif1,dif2,diftotal;
	
do {
	system("CLS");
	printf("\nInforme o sexo da pessoa");
	printf("\n[1] para masculino [2] pra feminino: ");
	scanf("%i", &sexo);
	
	
	switch(sexo) {
		case 1:
		puts("\nVoce selecionou Masculino");
		printf("\nInforme a Altura: ");
		scanf("%f", &alt);
		contmasc++; //contador masculino
		mediamasc= alt + mediamasc;
		break;
		
		
		case 2:
		puts("\nVoce selecionou Feminino");
		printf("\nInforme a Altura: ");
		scanf("%f", &alt);
		contfem++; //contador feminino
		mediafem= alt + mediafem;
		break;
		default:
		printf("\nValor Invalido\n");
		break;
	}
	
	//contator de altura
	if (cont==0) {
		altmaior = alt;
		altmenor = alt;
}
	if (alt > altmaior) 
		altmaior = alt;
	
	
	if (alt < altmenor) 
		altmenor = alt;
	
	
	//contador geral
	cont++;
	
	printf("\nDeseja continuar?\n[1] para Sim ou [0] para Nao: ");
	scanf("%i", &i);
}
while (i!=0);

	dif1 = (100*contmasc)/cont;
	dif2 = (100*contfem)/cont;
	
	diftotal = dif1 - dif2; 

	mediafem = (mediafem/contfem);
	mediamasc = (mediamasc/contmasc);
	
	printf("\nMaior altura = %.2f",altmaior);
	printf("\nMenor altura = %.2f\n", altmenor);
	printf("\nMedia da Altura das mulheres %.2f\n", mediafem);
	printf("\nMedia da Altura dos homens %.2f\n", mediamasc);
	printf("\nA diferenca porcentual entre homens e mulheres e: %.0f%%\n\n",diftotal);
	system("PAUSE");
	return 0;
}
