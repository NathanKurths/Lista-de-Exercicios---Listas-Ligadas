#include "../include/ListaDinEncDupla.h"
#include <stdio.h>
#include <stdlib.h>

struct elemento{
    struct carro dados;
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


int insere_lista_ordenada(Lista *li, struct carro al){
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
        while(atual!=NULL && atual->dados.nid <al.nid){
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


int remove_lista(Lista *li, int nid){
    if(li==NULL) return 0;
    if((*li)==NULL) return 0;
    Elem *no = *li;
    while(no !=NULL && no->dados.nid!=nid){
        no=no->prox;
    }
    if(no==NULL) return 0;
    if(no->ant==NULL)
        *li=no->prox;
    else
        no->ant->prox=no->prox;
    if(no->prox!=NULL)
        no->prox->ant = no->ant;
    
    free(no);
    return 1;
}

int busca_lista_pos(Lista *li, int pos, struct carro *al){
    if(li==NULL||pos<=0) return 0;
    Elem *no = *li;
    int i = 1;
    while(no!=NULL && i<pos){
        no=no->prox;
        i++;
    }
    if(no==NULL) return 0;
    else{
        *al = no->dados;
        return 1;
    }
}

int busca_lista_ra(Lista *li, int nid, struct carro *al){
    if(li==NULL) return 0;
    Elem *no = *li;
    while(no!=NULL && no->dados.nid != nid){
        no = no->prox;
    }
    if(no==NULL) return 0;
    else{
        *al = no->dados;
        return 1;
    }
}

int print_lista(Lista *li){
    Elem *no = *li;
    while(no!=NULL){
        printf("%d, ",no->dados.nid);
        no = no->prox;
    }
}



