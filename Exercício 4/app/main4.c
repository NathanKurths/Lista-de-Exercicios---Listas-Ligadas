#include "../include/ListaDinEnc.h"
#include <stdio.h>

int main()
{// as variáveis em ordem alfabéticas são para eu conferir se deu certo cada função
    struct contato um;
    struct contato dois;
    struct contato tres;
    Lista *li;
    cria_lista(li);
    insere_lista(li, um); 
    insere_lista(li, dois);
    insere_lista(li, tres);
    tamanho_lista(li);
    char endereco_pra_encontrar[100] = "Jardim Aeroporto 180";
    um.endereco = endereco_pra_encontrar;
    consulta_lista_endereco(li, endereco_pra_encontrar, um); 
    print_lista(li);
    remove_lista(li, endereco_pra_encontrar);
    libera_lista(li);
}