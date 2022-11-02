#include <stdio.h>
#include <stdlib.h>
#include "../include/ListaDinEnc.h"

struct elemento
{
    struct carro dados;
    struct carro *prox;
}; typedef struct elemento Elem;


Lista *cria_lista()
{
    Lista *li = (Lista *)malloc(sizeof(Lista));
    if (li != NULL)
    {
        *li = NULL;
    }
    return li;
}


int tamanho_lista(Lista *li){
    int cont = 0;
    if(li==NULL) 
    return 0;
    Elem *no = *li;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}


int insere_lista_inicio(Lista *li, struct carro al){
    if(li==NULL) return 0;
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_lista_final(Lista *li, struct carro al){
    if(li==NULL) return 0;
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL){
        *li = no;
    }
    else{
        Elem *aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}


int remove_lista(Lista *li, int mat){
    if(li==NULL) return 0;
    Elem *ant, *no = *li;
    while(no != NULL && no->dados.matricula!= mat){
        ant = no;
        no = no->prox;
    }
    if (no==NULL) return 0;

    if (no==*li)
    *li = no->prox;
    else
    ant->prox  = no->prox;
    free(no);
    return 1;

}

int insere_lista_recursivo(Lista *li, struct carro al){
    Elem *no;
    if(li == NULL){
    no->dados = al;
    no->prox = *li;
    *li = no;
    }
    else{
        while(no !=NULL){
        insere_lista_recursivo(no->prox, al);
        }
    }
}

int remove_lista_recursivo(Lista *li){
    if(li == NULL)
    return 0;
    if((*li) == NULL)
    return 0;

    Elem *no = *li;
    *li = no->prox;
    free(no);
    return 1;
    while(no != NULL){
        remove_lista_recursivo(no->prox);
    }
}

int listar_lista_recursivo(Lista *li){
    Elem *no = *li;
    printf("%s, ",no->dados.nome);
    while(no!=NULL){
        listar_lista_recursivo(no->prox);
    }
}

