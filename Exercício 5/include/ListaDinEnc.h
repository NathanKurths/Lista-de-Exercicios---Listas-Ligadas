struct carro{
    int matricula;
    char nome[30];
    char hora_entrada[10];
}; typedef struct elemento *Lista;


Lista *cria_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int insere_lista_inicio(Lista *li, struct carro al);
int insere_lista_final(Lista *li, struct carro al);
int remove_lista(Lista *li, int mat);
