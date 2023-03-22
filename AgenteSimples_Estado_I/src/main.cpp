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
	int cont = 0;
	double cont_media = 0;
	int penaliza = 0;
	int agente;
	int robo;
	int estado = 0;

	double vetor[8] = { 0,0,0,0,0,0,0,0 }; //Vetor onde serão armazenados os valores de limpar.

	for (int i = 0; i < 8; i++) {
		cont = 0;
		cont_media = 0;
		estado = 0;

		while (cont++ != 10) {
			robo = matriz[i][0];
			agente = agente_simples(robo, matriz[i][robo + 1]);

			if (agente == limpar) {
				matriz[i][robo + 1] = limpo;
				cont_media++;

			} else if (agente == direita) {
				if (estado == 1) {
					break;
				}
				matriz[i][0] = B;
				penaliza--;
				estado = 1;
			} else if (agente == esquerda) {
				if (estado == 1) {
					break;
				}
				matriz[i][0] = A;
				penaliza--;
				estado = 1;
			}
			cout << matriz[i][0];
			cout << matriz[i][1];
			cout << matriz[i][2] << endl;
		}
		vetor[i] = cont_media;
		cout << "Limpou: " << cont_media << " local(is)" << endl;
		cout << endl;
	}
	cont_media = 0;

	for (int i = 0; i < 8; i++) {
		cont_media += vetor[i];
	}

	cout << "Limpou " << cont_media << " locais no total" << endl;
	cout << "Perdeu " << penaliza << " pontos por movimento" << endl;
	cout << endl;
	cout << "Desempenho Geral: " << ((cont_media + penaliza) / 8) << endl;
	return 0;
}