#include "pilha.h"

using namespace std;

bool Primo(int N, int d ){
    if (N < 2)
        return false;
    if (d == 1)
        return true;
    if (N % d == 0)
        return false;
    return Primo(N, --d);
};

int main()
{
  pilha *topo1 = NULL, *topo2 = NULL, *topo3 = NULL, P;
  int n, i ;
  srand(time(NULL));
  for(i = 1; i <= 50; i++){
    n = rand() % 200 + 1;
    if(Primo(n, n-1)){
        topo1 = P.inserir(topo1, n);
    }else if(n % 2 == 0){
        topo2 = P.inserir(topo2, n);
    }else{
        topo3 = P.inserir(topo3, n);
    }
  }
cout << "Pilha números primos" << endl;
P.listar(topo1);
cout << endl << "Pilha números pares" << endl;
P.listar(topo2);
cout << endl << "Pilha números ímpares" << endl;
P.listar(topo3);

return 0;
}
