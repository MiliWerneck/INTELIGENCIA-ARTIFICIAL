#include <iostream>

using namespace std;

#define sujo 1
#define limpo 0
#define limpar 666
#define esquerda 0
#define direita 1
#define A 0
#define B 1

//Matriz com todos os estados possíveis do agente aspirador de pó
int matriz[8][3] = {
	{ A,sujo,sujo },
	{ B,sujo,sujo },
	{ A,sujo,limpo },
	{ B,sujo,limpo},
	{ A,limpo,sujo },
	{ B,limpo,sujo },
	{ A,limpo,limpo },
	{ B,limpo, limpo },
};

//Implementação do pseudocódigo do agente simples.
int agente_simples(int local, int estado) {
	if (estado == sujo) {
		return limpar;
	} else if (local == A) {
		return direita;
	} else if (local == B) {
		return esquerda;
	}
	return -1;
}

int main() {
	double cont = 0;
	int agente;
	int robo = 0;

	double vetor[8] = { 0,0,0,0,0,0,0,0 }; //Vetor onde serão armazenados os valores de limpar.

	for (int i = 0; i < 8; i++) {
		robo = matriz[i][0];
		agente = agente_simples(robo, matriz[i][robo + 1]);
		cont = (agente == limpar) ? 1 : 0;

		vetor[i] = cont;
		cout << agente << endl;

	}
	cont = 0;

	for (int i = 0; i < 8; i++) { // Vetor que conta quantas vezes limpar foi executada.
		cont += vetor[i];
	}

	cout << "Desempenho Geral: " << (cont / 8) << endl;
	return 0;
}