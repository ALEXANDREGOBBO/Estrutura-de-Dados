#include <stdio.h>
#include <stdlib.h>

struct no {

    int valor;

    struct no *prox;

    struct no *anterior;
};


struct no *x, *ini = NULL, *no2;

void Lista() {
  int num = 0, d;

 struct no *b, *c;

  while(num != 1 && num == 0){


    no2 = (struct no*) malloc(sizeof(struct no));
    printf("Insira um elemento: \n");
    
    scanf("%d", &no2 -> valor);
    no2 -> prox = NULL;
    no2 -> anterior = NULL;

    if (ini == NULL){

      ini = no2;

    } else {
      x = ini;
      while(x -> prox != NULL){
        x = x -> prox;
      }
      x-> prox = no2;
    }
    printf("Para inserir um elemento digite 0 ou se não digite 1:\n");
    scanf("%d",&num);


  for(b = ini; b -> prox != NULL; b = b -> prox){
    for(c = b -> prox; c != NULL; c = c -> prox){
      if(b -> valor > c -> valor){
        d = c -> valor;
        c -> valor = b -> valor;
        b -> valor = d;
      }
    }
  }
  }
}

void Exibir(){
  if(ini == NULL){

    printf("Lista vazia \n");

  } else {
    x = ini;
    while(x != NULL){
      printf("%d | ",x -> valor);
      x = x -> prox;
    }
  }
}

void buscar() {
  struct no *x, *tempx;
  int  band, item, iterador = 0, num;
  x = ini;
  if(ini == NULL){
    printf("\nLista vazia! \n");
  } else {
    printf("\nDigite o elemento para buscar e deletar ");
    scanf("%d", &item);

    while(x != NULL){
      if(x -> valor == item){
        printf("\n");
        printf(" Elemento encontrado! Está na chave: %d", iterador+1);
        band = 0;
        break;
      } else {
        band = 1;
      }
      iterador++;
      x = x -> prox;
    }
    if(band == 1){
      printf("\n");

      printf("O elemento não foi encontrado ");

      printf("\n");
    }
  }


  if(ini == NULL) {
    printf("\n Está vazio :v \n");
  } else {
    x = ini;
    while(x -> valor != item) {
      tempx = x;
      x = x -> prox;
    }
    tempx -> prox = x -> prox;
    x -> prox = NULL;
    free(x);
    printf("\n Elemento deletado : %d", item);
    printf("\n Chave: %d", iterador+1);

    
    }
}





int main (){

    printf("\n");

   
      Lista();
      Exibir();
      buscar();
      
    }
  