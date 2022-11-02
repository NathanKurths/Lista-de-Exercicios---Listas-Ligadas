#include "../include/ListaDinEnc.h"
#include <stdio.h>

int main()
{
    struct carro um;
    struct carro dois;
    struct carro tres;
    struct carro quatro;
    int x = quatro.matricula;
    Lista *li;
    cria_lista(li);
    insere_lista_inicio(li, um);
    insere_lista_inicio(li, dois);
    insere_lista_inicio(li, tres);
    insere_lista_inicio(li, quatro);
    tamanho_lista(li);// quantos carros tem
    remove_lista(li, x); //quero remover o carro quatro que saiu do estacionamento
    return 0;
}