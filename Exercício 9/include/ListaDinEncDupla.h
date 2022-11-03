#include <stdio.h>
#include <stdbool.h>

struct carro{
    char tusuario[50];
    int nid;
    char nome[30];
    int nvaga;
    char placa [10];
}; typedef struct elemento *Lista;


Lista *criar_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int insere_lista_ordenada(Lista *li, struct carro al);
int insere_lista_ordenada_aluno(Lista *li, struct carro al);
int busca_lista_pos(Lista *li, int pos, struct carro *al);
int busca_lista_nid(Lista *li, int nid, struct carro *al);
int remove_lista(Lista *li, int nid);
int print_lista(Lista *li);