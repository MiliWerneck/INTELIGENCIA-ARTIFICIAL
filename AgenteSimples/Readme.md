# Código de Agente Reativo simples
# Robô aspirador
<h2 align="center"> Marinêz Werneck Magalhães </h2>
<p> <p>


## Enunciado:
<p align="justify">
Implemente um agente reativo simples para o ambiente do aspirador.
Execute o ambiente do aspirador com este agente para todas configurações
iniciais da sujeira possíveis e locais dos agentes. Registre a pontuação
de desempenho para cada configuração e a pontuação média geral.


<p align="left">
  <img src="src/images/pseudocodigo.png" height = "150"></img>
</p>

<p align="left">
  <img src="src/images/estados.png" height = "350"></img>
</p>

Possíveis estados:
- A e B = sujo, local A
- A e B = sujo, local B
- A = sujo e B = limpo, local A
- A = sujo e B = limpo, local B
- A = limpo e B = sujo, local A
- A = limpo e B = sujo, local B
- A e B = limpo, local A
- A e B = limpo, local B

## Considerações:

#define sujo 1
#define limpo 0
#define limpar 666
#define esquerda 0
#define direita 1
#define A 0
#define B 1


Pontuação: A cada limpeza, somar um ponto ao agente aspirador.
Pontuação Final: Soma de 8 estados possíveis / 8.

Desempenho satisfatório >= 0.3

## Resultado obtido:
Impressão na tela: 666, limpar ou 0 moveu esquerda, 1 moveu para direita.
Desempenho: 0.5 ou 50%, considerado satisfatório pelos parâmetros estabelecidos, que era um desempenho igual ou superior a 0.3 ou 30%..

### Compilação:

| Comando  | Função                        |
| -------- | ----------------------------- |
| `make r` | Limpa tudo, compila e executa |