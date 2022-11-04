#include "../include/ListaDinEncDupla.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct elemento{
    struct string dados;
    struct elemento *ant;
    struct elemento *prox;
}; typedef struct elemento Elem;

Lista *criar_lista(){
    Lista *li = (Lista*)malloc(sizeof(Lista));
    if(li!=NULL){
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista *li){
    if(li != NULL){
        Elem *no;
        while(*li != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
        }

    }

int tamanho_lista(Lista *li){
    if(li==NULL) return 0;
    int cont = 0;
    Elem *no = *li;
    while(no!=NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int insere_lista_inicio_string(Lista *li, struct string al){
    if(li==NULL)return 0;
    Elem *no = (Elem*)malloc(sizeof(Elem));
    if(no==NULL)return 0;
    no->dados = al;
    no->prox = *li;
    no->ant = NULL;
    if(*li!=NULL){
        (*li)->ant = no;
    *li = no;
    }
    return 1;
}

int insere_lista_ordenada(Lista *li, struct string al){
    if(li==NULL)return 0;
    Elem *no = (Elem*)malloc(sizeof(Elem));
    if(no==NULL)return 0;
    no->dados = al;
    if(li==NULL && *li==NULL){
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
        return 1;
    }
    else{
        Elem *ante, *atual = *li;
        while(atual!=NULL && atual->dados.nome <al.nome){
            ante = atual;
            atual = atual->prox;
        }
        if(atual==*li){
            no->ant = NULL;
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        }
        else{
            no->prox = ante->prox;
            no->ant = ante;
            ante->prox = no;
            if(atual!=NULL)
            atual->ant = no;
        }
        return 1;
    }
}

int print_lista(Lista *li){
    Elem *no = *li;
    while(no!=NULL){
        printf("%d, ",no->dados.nome);
        no = no->prox;
    }
}

void troca(char* x, char* y)
{
    char aux;
    aux = *x;
    *x = *y;
    *y = aux;
}
int permute(Lista *li, char* a, int esquerda, int direita)
{
    int i;
    if (esquerda == direita)
    {
        printf("%s\n", a);
        insere_lista_inicio(li, a);
    }
    else
    {
        for (i = esquerda; i <= direita; i++) {
        swap((a + esquerda), (a + i));
        permute(li, a, esquerda + 1, direita);
        swap((a + esquerda), (a + i));
        }
    }
    return 1;
}




