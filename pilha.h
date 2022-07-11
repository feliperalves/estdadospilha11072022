#include <iostream>

class pilha{
private:
    int num;
    pilha *elo;
public:
    pilha* inserir(pilha*, int);
    pilha* excluir(pilha*);
    void listar(pilha*);
};
