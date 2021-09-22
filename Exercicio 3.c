#include <stdio.h>
#include <stdlib.h>

struct no {

    int valor;

    struct no *prox;

    struct no *anterior;
};


struct no *x, *ini = NULL, *no2;

void Lista() {
  int num = 0;
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

void ordemCrescente(){

    int x;
  struct no *y, *e;

  for(y = ini; y -> prox != NULL; y = y -> prox){

    for(e = y -> prox; e != NULL; e = e -> prox){

      if(y -> valor > e -> valor){
       x = e -> valor;

        
         e -> valor = y -> valor;

         y -> valor = x;
      }
    }
  }
}

int main(void) {
  Lista();
  
  printf("Lista em ordem crescente: ");

  ordemCrescente();
  Exibir();
}