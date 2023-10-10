#include "Agenda.h"

/*Funçao de inserir pessoas no array */
void Agenda::armazenaPessoa(string nome, int idade, float altura) {
    if (numPessoas < 10) {
        Povo[numPessoas].setNome(nome);
        Povo[numPessoas].setIdade(idade);
        Povo[numPessoas].setAltura(altura);
        numPessoas++;
    }
    else {
        cout << "Array Cheio:" << endl;
    }
}

/* Funçao de procurar Pessoa e retornar a possição da mesma*/
int Agenda::buscaPessoa(string nome){
    for (int i = 0; i < 10; i++) {
        if (Povo[i].getNome() == nome) {
            return i; 
        }
    }
    return -1;
}

/*Funçao de imprimir todas as pessoas limitado a numero de pessoas la dentro */
void Agenda::imprimePovo(){
    for (int i = 0; i < numPessoas; i++){
        Povo[i].mostrarPessoa();
    }
}

/*Funçao de imprimir um certa possiçao a partir da posiçao da mesma*/
void Agenda::imprimePessoa(int i){
    if (i >= 0 && i <= 10) {
        Povo[i].mostrarPessoa();
    }
    else {
        cout << "Numero inserido fora de alcance!!" << endl;
    }
}
/* Funçao que procura pessoa e elimina a mesma*/
void Agenda::removePessoa(string nome){
    bool verificaNome = false;
    for (int i = 0; i < numPessoas; i++) {
        if (Povo[i].getNome() == nome) {
            for (int j = i; j < numPessoas - 1; j++) {
                Povo[j] = Povo[j + 1];
            }
            numPessoas--;
            verificaNome = true;
           return; //Só para eliminar o primeiro elemento com o nome certo
        }
    }
    if (!verificaNome) {
        cout << "Nao foi encontrado nenhum nome!" << endl;
    }
}



