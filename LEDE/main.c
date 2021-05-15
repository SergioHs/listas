#include <stdio.h>
#include <stdlib.h>

#include "lista_publica.h"

int main(int argc, char* argv[]) {
  lLista lista = criarLista(10000, sizeof(int));

  int inserir = 0;
  for( int i = 0; i < 10000; i++ ){
    inserir = inserirInicio(lista, &i);
  }
  printf("Pulos inserindo 10000 no início: %d\n", envia_countador(lista));
  int primeirospulos = envia_countador(lista);

  int * remover = malloc( sizeof( int ) );
  for( int i = 0; i < 3000; i++ ){
    remover = removerInicio(lista);
  }
  printf("Pulos removendo 3000 do início: %d\n", envia_countador(lista)-primeirospulos);
  
  return 0;
}
