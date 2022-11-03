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
    insere_lista_ordenada_aluno(li, um); //inserindo um carro de um aluno que respeita 90% da vaga de 200
    insere_lista_ordenada_aluno(li, dois);
    insere_lista_ordenada(sta, tres); // inserindo carro do funcionario que pelo menos terá 10% da vaga de 200
    insere_lista_ordenada(sta, quatro);
    print_lista(li);
    print_lista(sta);
    return 0;
}