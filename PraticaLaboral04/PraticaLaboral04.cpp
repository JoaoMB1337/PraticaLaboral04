#include <iostream>
#include "Agenda.h"
int main(){

    char linha[] = "------------------------------------------------\n";
    Agenda A;

    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa("Tiago", 20, 1.80);

    cout << linha;
    cout << "Lista de Pessoas: \n\n";
    A.imprimePovo();
    cout << linha;

    int posicao = A.buscaPessoa("Tiago");
    cout << "Pessoa encontrada na posicao " << posicao << endl;
    cout << linha;

    cout << "Pessoas na agenda depois de ter Apagado um elemento:" << endl;
    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha;

    return 0;
}

