struct contato{
    char endereco[100];
}; typedef struct elemento *Lista;


Lista *cria_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int insere_lista(Lista *li, struct contato a);
int remove_lista(Lista *li, char info);
int consulta_lista_endereco(Lista *li, char info, struct contato *al);
int print_lista(Lista *li);