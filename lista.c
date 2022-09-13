#include "lista.h"

// Cria lista
void cria_lista(Lista *li, int tamMax){
  li->qtd = 0;
  li->MAX = tamMax;
  li->dados = (int *)malloc(li->MAX * sizeof(int));

  printf("Lista criada com sucesso! Pode conter até %d elementos!\n", li->MAX);
}

// Verifica o tamanho da lista
int tamanho_lista(Lista *li){
  return printf("\nA lista possui tamanho: %d\n", li->qtd);
}

// Verifica se a lista está cheia
int lista_cheia(Lista *li){
  if (li->qtd == li->MAX){
    return 1;
  }else{
    return 0;
  }
}

// Verifica se a lista está vazia
int lista_vazia(Lista *li){
  if(li->qtd == 0){
    return 1;
  }else{
    return 0;
  }
}

// Exibe a lista na tela
void mostrar_lista(Lista li){

  printf("Os componentes da lista sao: ");
  for(int j = 0; j < li.qtd; j++){
      printf("%d ",li.dados[j]);
  };
  printf("\n");
}

// Insere no final da lista
int insere_lista_final(Lista *li, int tantos){

  if(lista_cheia(li)){
    return 0;
  }
  li->dados[li->qtd] = tantos;
  li->qtd++;

  return 1;
}

// Insere na lista vazia
int insere_vazia(Lista *li, int tantos){

  if(lista_vazia(li)){
    li->dados[0] = tantos;
    li->qtd++;
  }
  return 1;  
}

// Insere no ínicio da lista
int insere_lista_inicio(Lista *li, int tantos){
  
  if(lista_cheia(li)){
    return 0;
  }
  for (int i = li->qtd; i >=0; i--){
    li->dados[i+1] = li->dados[i];
  }
  li->dados[0] = tantos;
  li->qtd++;

  return 1;
  
}

// Obtém o valor do elemento de uma posição na lista
int val_pos_lista (int pos, Lista *li){
  int dado;
  if ((pos > li->qtd) || (pos <= 0)){
    return -1;
  }
  dado = li->dados[pos-1];

  return dado;
}

// Obtém a posição do elemento na lista
int pos_val_lista (int valor, Lista *li){

  for (int i = 0; i < li->qtd; i++){
    if (li->dados[i] == valor){
      return (i+1);
    }
  }
  return -1;
}

// Modificar o valor de um elemento na lista
int mod_val_lista (int pos, int valor, Lista *li){
  
  if ((pos > li->qtd) || (pos <= 0)){
    return -1;
  }
  for (int i = 0; i < li->qtd; i++){
    if (i == pos){
      li->dados[i-1] = valor;
    }
  }

  return 0;
}

// Insere um valor numa determinada posição válida da lista
int insere (int dado, int pos, Lista *li){

   if (lista_cheia(li) || pos > li->qtd|| pos <= 0){
    printf("Lista cheia\n");
    return 0;
   }

   for (int i = li->qtd; i >= pos; i--){
     li->dados[i] = li->dados[i-1];
   }

   li->dados[pos-1] = dado;
   li->qtd++;

   return 0;  
}

// Remove um elemento a partir de sua posição da lista e o retorna
int retira_pos (int pos, Lista *li){

  int guarda_valor;
  
  if ( (pos > li->qtd )|| (pos < 1) ){
    return -1;  
  }

  guarda_valor = li->dados[pos-1];

  for (int i = pos - 1; i < li->qtd - 1; i++){
    li->dados[i] = li->dados[i+1];
  }
  
  li->qtd--;
  return guarda_valor;
  
}

//Remove um elemento a partir de seu valor e retorna sua posição
int retira_val (int valor, Lista *li){

  int i, j;
  
  for(i = 0; i < li->qtd; i++){
    if(li->dados[i] == valor){
      for (j = i - 1; j < i - 1; j++){
        li->dados[j] = li->dados[j+1];
      } 
    }
  }
  li->qtd--;
  return i;
}