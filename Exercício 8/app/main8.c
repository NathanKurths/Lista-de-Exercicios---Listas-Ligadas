#include "../include/ListaDinEncDupla.h"
#include <stdio.h>

int main()
{
    struct carro um;
    struct carro dois;
    struct carro tres;
    struct carro quatro;
    um.nid = 55;
    dois.nid = 76;
    tres.nid = 4;
    quatro.nid = 44;
    Lista *li;
    criar_lista(li);
    insere_lista_ordenada(li, um);
    insere_lista_ordenada(li, dois);
    insere_lista_ordenada(li, tres);
    insere_lista_ordenada(li, quatro);
    print_lista(li);
    libera_lista(li);
    return 0;
}