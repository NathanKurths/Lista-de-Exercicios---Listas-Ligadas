#include <stdio.h>
#include <stdlib.h>
#include "../include/ListaDinEnc.h"

struct elemento
{
    struct contato dados;
    struct contato *prox;
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

void libera_lista(Lista *li)
{
    if (li != NULL)
    {
        Elem *no;
        while ((*li) != NULL)
        {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
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


int insere_lista(Lista *li, struct contato al){
    if(li==NULL) return 0;
    Elem *no = (Elem *)malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}


int remove_lista(Lista *li, char info){
    if(li==NULL) return 0;
    Elem *ant, *no = *li;
    while(no != NULL && no->dados.endereco!= info){
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

int consulta_lista_endereco(Lista *li, char info, struct contato *al){
    if(li==NULL) 
    return 0;
    Elem *no  = *li;
    while(no != NULL && no->dados.endereco !=info){
        no = no->prox;
    }
    if(no == NULL) return 0;
    else{
        *al = no->dados;
        return 1;
    }
}

int print_lista(Lista *li){
    Elem *no = *li;
    while(no!=NULL){
        printf("%s, ",no->dados.endereco);
        no = no->prox;
    }
}