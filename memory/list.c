#include <stdio.h>
#include <stdlib.h>

typedef struct TNode {
    int data;
    struct TNode* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
    int size;
} List;

void add(List* l, int val);

void add(List* l, int val)
{
    Node* aux = malloc(sizeof(Node));
    aux->data = val;
    aux->next = NULL;

    if(l->tail != NULL){
        l->tail->next = aux;
        l->tail = aux;
    }
    else
        l->head = aux;
    l->tail = aux;
    l->size++;
}
void addStart(List* l, int val){
    Node* aux = malloc(sizeof(Node));
    aux->data = val;
    aux->next = l->head;
    l->tail = l->head;
    l->head = aux;
    l->size++;

}
void removeRecursive(Node* prev, Node* current, int val) {
    if (current == NULL) return;

    if (current->data == val) {
        prev->next = current->next;
        free(current);
        removeRecursive(prev, prev->next, val);
    } else {
        removeRecursive(current, current->next, val);
    }
}

void removeByValue(List* l, int val) {
    while (l->head != NULL && l->head->data == val) {
        Node* temp = l->head;
        l->head = l->head->next;
        free(temp);
    }

    if (l->head != NULL) {
        removeRecursive(l->head, l->head->next, val);
    }
}

void showRecursive(List *l, Node* n){
    if (n == NULL) return;
    int value2 = n-> data;
    printf("%i ",value2);
    showRecursive(l,n->next);
}
void show(List *l){
    showRecursive(l,l->head);
    printf("\n");

}
void freeListRecursive(List *l,Node* n){
    if (n == NULL) return;
    freeListRecursive(l, n->next);
    free(n);

}


void freeList(List* l){

    freeListRecursive(l,l->head);
    l->head = NULL;

}
int main()
{
    List lista;
    lista.head = lista.tail = NULL;
    lista.size = 0;
    add(&lista, 1);
    add(&lista, 2);
    add(&lista, 3);
    removeByValue(&lista,2);
    show(&lista);
    freeList(&lista);
    int opcao, valor;

        do {
            printf("\nMenu:\n");
            printf("1 - Adicionar no fim\n");
            printf("2 - Adicionar no inicio\n");
            printf("3 - Remover por valor\n");
            printf("4 - Mostrar lista\n");
            printf("5 - Sair\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    printf("Digite o valor para adicionar no fim: ");
                    scanf("%d", &valor);
                    add(&lista, valor);
                    break;

                case 2:
                    printf("Digite o valor para adicionar no inicio: ");
                    scanf("%d", &valor);
                    addStart(&lista, valor);
                    break;

                case 3:
                    printf("Digite o valor para remover: ");
                    scanf("%d", &valor);
                    removeByValue(&lista, valor);
                    break;

                case 4:
                    printf("Lista atual: ");
                    show(&lista);
                    break;

                case 5:
                    freeList(&lista);
                    printf("Saindo...\n");
                    break;

                default:
                    printf("Opcao invalida! Tente novamente.\n");
            }
        } while (opcao != 5);

        return 0;
    }
    // TODO: uma função para exibir essa lista
    // e não esquecer de liberar os nodos no final!!!
