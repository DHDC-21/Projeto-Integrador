
// (ABAIXO) Bibliotecas padrões da linguagem C, usados nesse projeto.
#include <stdlib.h>
#include <stdio.h>  // Biblioteca padrão de entrada e saida do terminal
#include <locale.h> // Biblioteca usada para se obter acentuação no terminal
#include <time.h>




int cmdLimpar(){
    system("cls");
};

int cmdPause(){
    getchar();
};

int exibirERRO(){
    printf("\n\7/!\\ ERRO: ");
};