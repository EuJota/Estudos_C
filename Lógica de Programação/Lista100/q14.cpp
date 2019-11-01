#include <stdio.h>

main(){
	int distanciaSemaforo;
	float tempoSemaforo, velocidadeVia, aceleracaoCarros, velCarro,tempovVia;
	
	printf("Digite a distancia entre os semaforos\n");
	scanf("%d",&distanciaSemaforo);
	printf("Velocidade da via e aceleracao dos carros\n");
	scanf("%f%f",&velocidadeVia,&aceleracaoCarros);
	
	velCarro = aceleracaoCarros*3.6;
	
	tempoAtigirVelocidadeVia = velocidadeVia / velocidadeDoCarroemKm/h
	
	distanciaAteAtigingirVelocidade = tempo*velocidade
	
	distanciaRestanteAteoSemaforo = distanciaSemaforo- distanciaAteAtingirVelocidade
	
	tempoDistanciaRestante = distanciaRestanteAteoSemaforo / velocidadeVia;
	
	tempoSemaforo = (tempoDistanciaRestante + tempoAtigirVelocidadeVia) - 3;

	
	tempovVia = velocidadeVia/velCarro;
	printf("Tempo que leva para atingir a velocidade da via = %f\n",tempovVia);
	
	tempoSemaforo = distanciaSemaforo/tempovVia;
	
	printf("\nTempo do semaforo =%.2f",tempoSemaforo);
}
