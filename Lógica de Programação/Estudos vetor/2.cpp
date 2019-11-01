#include <stdio.h> 

main (){
int num[100]; /* Declara um vetor de inteiros de 100 posicoes*/

	int i=1; //Inicializa a variável int que vai ser usada para indicar as posições no vetor, geralmente inicia com 0
	int totalnums; // variavel para armazenar os numeros que foram armazenados em cada posicao
	 
	 //neste exemplo um for é executado para que o usuário digite o numero que ele quer 
	 //inserir no vetor num, apesar de num ter sido declarado com 100 posicoes, usaremos apenas 6
	 
	 for(i;i<6;i++){ //pelo fato da variável i já ter sido inicializada anteriormente nao é necessario repassar o valor aqui
	 				//o for vai repetir as instucoes por 5 vezes, e após essa realizacao, a variavel é incrementada com ++ para assumir um
	 				// valor novo e nao entrar em um loop infinito
	 	/*
	 		uma variacao do uso do for pode ser: for(i=0;i<limite;i++ ou i-- ou i=i+qualquer valor) 
			ou apenas for(int i=o;i<limite;i......)
			Lembrando que a variavel nao precisa ser i, pode ser qualquer letra
	 	*/
	 	scanf(" %d",&num[i]); //o valor inteiro inserido aqui vai ser direcionado para o index ou posicao do vetor num
	 	printf("indice ou posicao usado %d\n",i);	//lembrando que o i dentro dos [ ] representa o indice em que o valor vai ser atribuido
	 	totalnums=i;		//so um contador para receber o tamanho usado do vetor
	 }
	 printf("quantos valores foram inseridos --> %d",totalnums);  // print de teste para ver se a contagem foi feita com sucesso
	
	  
	 printf("\n\n\n\t Os numeros foram:\n\n");  
	 for (int k=1;k<=totalnums;k++) //um novo for é criado, inicializando a variavel k com o mesmo indice inicial da variavel i, para nao dar problema 
	 								//na exibicao do vetor, para testar basta mudar k=1 para k=0.
	 								//k<=totalnums é uma verificacao se o valor de k é menor ou igual ao valor referente às posicoes do for anterior 
	 printf(" %d",num[k]);			//k++ para o for nao ficar infinito ou quebrar o programa
	 								//printf exibindo um inteiro e mostrando os valores do vetor num na posicao referente ao k, que nesse caso e uma 
	 								//referencia ao i do for anterior
}
