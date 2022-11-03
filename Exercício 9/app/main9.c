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
    LIsta *sta;
    criar_lista(li);
    cria_lista(sta);
    insere_lista_ordenada(li, um);
    insere_lista_ordenada(li, dois);
    insere_lista_ordenada(sta, tres);
    insere_lista_ordenada(sta, quatro);
    print_lista(li);
    print_lista(sta);
    return 0;
}