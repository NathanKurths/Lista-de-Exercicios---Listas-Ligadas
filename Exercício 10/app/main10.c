#include "../include/ListaDinEncDupla.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[] = "jao";
    Lista *li;
    criar_lista(li);
    print_lista(li);
    int n = strlen(nome);
    permute(li, nome, 0, n-1); // a funcao já tem o inserir junto, contudo, a var nome dentro de dados foi inutil
    return 0; // ... já que dá pra amarzenar esse char direto na propria string dados.
}