#ifndef LISTA2_H_DEFINE
#define LISTA2_H_DEFINE

#include <stdlib.h>

//Declara a estrutura da lista
typedef struct lista Lista;

//Implementa a LISTA
struct lista{
  //tamanho atual da lista
  int qtd;
  // tamanho máximo da lista
  int MAX;
  //vetor da lista
  int *dados;
};


//Declarações de funções
void cria_lista(Lista *li,  int tamMax);
int tamanho_lista(Lista *li);
int lista_vazia(Lista *li);
int lista_cheia(Lista *li);
void mostrar_lista(Lista li);
int insere_vazia(Lista *li, int tantos);
int insere_lista_final(Lista *li, int tantos);
int insere_lista_inicio(Lista *li, int tantos);
int val_pos_lista (int pos, Lista *li);
int pos_val_lista (int valor, Lista *li);
int mod_val_lista (int pos, int valor, Lista *li);
int insere (int dado, int pos, Lista *li);
int retira_pos (int pos, Lista *li);
int retira_val (int valor, Lista *li);

#endif