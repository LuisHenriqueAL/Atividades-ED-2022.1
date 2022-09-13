#include <stdio.h>
#include "lista.c"

int main() {

  Lista l, *pL;
  int opcao;

  pL = &l;

  
  // Cria lista com tamanho 10
  cria_lista(pL, 10);
  // Retorna o tamanho da lista para o usuário
  tamanho_lista(pL);

  // Informa se a lista está cheia ou vazia
  if (lista_cheia(pL)){
    printf("\nLista cheia!\n");
  }if (lista_vazia(pL)){
    printf("\nLista vazia!\n");
  }

  // Insere o valor 3 na lista vazia
  insere_vazia(pL, 3);
  
  // Exibe a lista
  mostrar_lista(l);
  
  // Insere o valor 5 ao fim da lista
  insere_lista_final(pL, 5);
  
  // Exibe a lista
  mostrar_lista(l);
  
  // Insere o valor 1 ao fim da lista  
  insere_lista_inicio(pL, 1);
  
  // Exibe a lista
  mostrar_lista(l);
  
  // Exibe na tela o elemento da posição especificada, se a posição for válida 
  printf("O elemento na posição dois da lista tem valor %d\n", val_pos_lista(2, pL));
  
  // Exibe na tela a posição do elemento especificado, se estiver na lista
  printf("O valor %d está na posição %d da lista\n", pL->dados[1], pos_val_lista(3, pL));

  // Exibe na tela o elemento da posição especificada, se a posição for válida 
  printf("O elemento na posição cinco da lista tem valor %d\n", val_pos_lista(5, pL));
  
  // Exibe na tela a posição do elemento especificado, se estiver na lista
  printf("O valor 15 está na posição %d da lista\n", pos_val_lista(15, pL));

  //Modifica o valor da posição 2 e insere o valor 7 no lugar
  mod_val_lista(2, 7, pL);

  // Exibe a lista
  mostrar_lista(l);

  // Insere o valor 10 na posição 1 da lista
  insere(10, 1, pL);

  // Exibe a lista
  mostrar_lista(l);

  // Retira o elemento da posição 3 da lista
  retira_pos(3, pL);

  // Exibe a lista
  mostrar_lista(l);

  // Retira o valor 5 da lista
  retira_val(5, pL);

  // Exibe a lista
  mostrar_lista(l);

  return 0;
}