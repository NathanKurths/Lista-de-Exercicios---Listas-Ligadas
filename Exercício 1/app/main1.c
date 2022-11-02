#include "../include/ListaDinEnc.h"
#include <stdio.h>

int main()
{
    struct carro um;
    struct carro dois;
    struct carro tres;
    struct carro quatro;
    Lista *li;
    cria_lista(li);
    insere_lista_recursivo(li, um);
    insere_lista_recursivo(li, dois);
    insere_lista_recursivo(li, tres);
    remove_lista_recursivo(li);
    listar_lista_recursivo(li);
    
    return 0;
}