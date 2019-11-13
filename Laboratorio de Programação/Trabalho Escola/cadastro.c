#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

#include "professor.h"



/*tipo de dado struct para armazenar a data de nascimento*/

int main(){
	
	CadastrarAluno();
	CadastrarProfessor();

}

void CadastrarDisciplinas(){

	typedef struct disciplina{

		char nome[50];
		int codigo;
		int semestre;

	}disciplina;
		 

} // fim da função CadastrarDisciplinas


