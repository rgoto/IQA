all:FUNCOES
	gcc main.c funcoes.o -o exemplo
FUNCOES:
	gcc -c funcoes.c