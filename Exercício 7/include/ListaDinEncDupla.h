#include <stdio.h>
#include <stdbool.h>

struct aluno{
    int ra;
    bool cpl;
    bool aproalg;
    float ntrab;
    float nsub;
    char nome[30];
}; typedef struct elemento *Lista;


Lista *criar_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int insere_lista_ordenada(Lista *li, struct aluno al);
int busca_lista_pos(Lista *li, int pos, struct aluno *al);
int busca_lista_ra(Lista *li, int ra, struct aluno *al);
int remove_lista(Lista *li, int mat);
int print_lista(Lista *li);