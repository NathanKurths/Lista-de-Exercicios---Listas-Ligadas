#include "../include/ListaDinEncDupla.h"
#include <stdio.h>

int main()
{
    struct aluno um;
    struct aluno dois;
    struct aluno tres;
    struct aluno quatro;
    um.ra = 55;
    dois.ra = 76;
    tres.ra = 4;
    quatro.ra = 44;
    Lista *li;
    criar_lista(li);
    insere_lista_ordenada(li, um);
    insere_lista_ordenada(li, dois);
    insere_lista_ordenada(li, tres);
    insere_lista_ordenada(li, quatro);
    print_lista(li);
    busca_lista_ra(li, 76, &dois);
    int x = tres.ra;
    remove_lista(li, x); //quero remover o aluno com esse registro
    libera_lista(li);
    return 0;
}