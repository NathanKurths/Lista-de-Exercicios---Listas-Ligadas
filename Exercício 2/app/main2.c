#include "../include/ListaDinEnc.h"
#include <stdio.h>

int main()
{
    struct aluno um;
    um.matricula = 3;
    struct aluno dois;
    dois.matricula = 40;
    struct aluno tres;
    tres.matricula = 1;
    struct aluno quatro;
    quatro.matricula = 80;
    Lista *li;
    cria_lista(li);
    insere_lista_inicio(li, um);
    insere_lista_inicio(li, dois);
    insere_lista_inicio(li, tres);
    insere_lista_inicio(li, quatro);
    print_lista(li);
    remove_pares(li);
    libera_lista(li);
    return 0;
}