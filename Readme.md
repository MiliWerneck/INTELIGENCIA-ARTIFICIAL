# Código de Agente Reativo simples
#Robô aspirador
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
  <img src="src/images/estados.png" height = "150"></img>
</p>

Possíveis estados:
1) A e B = sujo, local A
2) A e B = sujo, local B
3) A = sujo e B = limpo, local A
4) A = sujo e B = limpo, local B
5) A = limpo e B = sujo, local A
6) A = limpo e B = sujo, local B
7) A e B = limpo, local A
8) A e B = limpo, local B

## Considerações:

Status = sujo 1, limpo 0;
local = 0 sem aspirador, 1 com aspirador;
cont_media = conta quantas vezes a limpeza foi executada;

Pontuação: A cada limpeza, somar um ponto ao agente aspirador.
Pontuação Final: Soma de 16 estados possíveis / 16.

Desempenho satisfatório >= 0.3


### Compilação:

| Comando | Função |
|---------| --------|
| `make r` | Limpa tudo, compila e executa |