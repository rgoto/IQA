all:FUNCOES
	gcc main.c -lm funcoes.o -o IQA
FUNCOES:
	gcc -c funcoes.c