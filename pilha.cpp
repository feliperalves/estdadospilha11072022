#include "pilha.h"

pilha* pilha::inserir(pilha *T, int N){
    pilha *novo = new pilha();
    novo -> num = N;
    novo -> elo = T;
    T = novo;
    return T;
};
pilha* pilha::excluir(pilha *T){
    pilha* aux = T;
    T = T->elo;
    delete(aux);
    return T;
};
void pilha::listar(pilha *T){
    pilha *aux = T;
    while (aux != NULL){
        std::cout << aux -> num << " ";
        aux = aux -> elo;
    }
};
