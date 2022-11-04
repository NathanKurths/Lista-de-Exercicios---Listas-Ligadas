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
    insere_lista_inicio(li, um); // todos os alunos tem um campo site no arquivo h.
    insere_lista_inicio(li, dois);
    insere_lista_inicio(li, tres);
    insere_lista_inicio(li, quatro);
    char site_do_aluno_tres[100] = "www.alunotres.com.br";
    destaca_link(li, site_do_aluno_tres);// a funçao encontrou e trouxe o nó do aluno para a o inicio da lista.
    libera_lista(li);
    return 0;
}