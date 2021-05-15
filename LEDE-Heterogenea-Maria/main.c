#include <stdio.h>

#include "Lista_publica.h"

int main() {
  int resultado;
  

  pLista lista = criar_lista(sizeof(int), &resultado);
  
  int r = 0;
  int valor = 3;
  for (int i = 0; i < 10000; i++) {
    inserir_inicio(lista, &valor, sizeof(int), &r);
  } 
  printf("Pulos inserindo 10000 no início: %d\n", envia_countador());

  int primeirospulos = envia_countador();
  int *rem = malloc(sizeof(int));
  for (int i = 0; i < 3000; i++) {
    remover_inicio(lista, rem);
  }
  printf("Pulos removendo 3000 do início: %d\n", envia_countador()-primeirospulos);

  return 0;
}
