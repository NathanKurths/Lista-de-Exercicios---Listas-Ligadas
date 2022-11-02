#include "../include/ListaDinEnc.h"
#include <stdio.h>

int main()
{
    struct aluno um;
    struct aluno dois;
    struct aluno tres;
    struct aluno quatro;
    Lista *li;
    cria_lista(li);
    insere_lista_inicio(li, um);
    insere_lista_inicio(li, dois);
    insere_lista_inicio(li, tres);
    insere_lista_inicio(li, quatro);
    remove_pares(li);
    return 0;
}