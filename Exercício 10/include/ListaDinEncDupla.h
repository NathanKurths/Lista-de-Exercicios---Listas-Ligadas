#include <stdio.h>
#include <stdbool.h>

struct string{
    char nome[30]; // só existe de faixada, pra teste, o struct dados em si armazena a string permutada.
}; typedef struct elemento *Lista;


Lista *criar_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int insere_lista_inicio_string(Lista *li, struct string al);
int insere_lista_ordenada(Lista *li, struct string al);
int busca_lista_pos(Lista *li, int pos, struct string *al);
int busca_lista_string(Lista *li, char nome, struct string *al);
int remove_lista(Lista *li, char nome);
int print_lista(Lista *li);
int permute(Lista *li, char *a, int esquerda, int direita);