#include "Agenda.h"

/*Fun�ao de inserir pessoas no array */
void Agenda::armazenaPessoa(string nome, int idade, float altura) {
    if (numPessoas < 10) {
        Povo[numPessoas] = Pessoa(nome, idade, altura);
        numPessoas++;
    }
    else {
        cout << "Array Cheio:" << endl;
    }
}

/* Fun�ao de procurar Pessoa e retornar a posi��o da mesma*/
int Agenda::buscaPessoa(string nome){
    for (int i = 0; i < 10; i++) {
        if (Povo[i].getNome() == nome) {
            return i; 
        }
    }
    return -1;
}

/*Fun�ao de imprimir todas as pessoas limitado a numero de pessoas la dentro */
void Agenda::imprimePovo(){
    for (int i = 0; i < numPessoas; i++){
        Povo[i].mostrarPessoa();
    }
}

/*Fun�ao de imprimir um certa posi�ao a partir da posi�ao da mesma*/
void Agenda::imprimePessoa(int i){
    if (i >= 0 && i <= 10) {
        Povo[i].mostrarPessoa();
    }
    else {
        cout << "Numero inserido fora de alcance!!" << endl;
    }
}
/* Fun�ao que procura pessoa e elimina a mesma*/
void Agenda::removePessoa(string nome){
    bool verificaNome = false;
    for (int i = 0; i < numPessoas; i++) {
        if (Povo[i].getNome() == nome) {
            for (int j = i; j < numPessoas - 1; j++) {
                Povo[j] = Povo[j + 1];
            }
            numPessoas--;
            verificaNome = true;
           return; //S� para eliminar o primeiro elemento com o nome certo
        }
    }
    if (!verificaNome) {
        cout << "Nao foi encontrado nenhum nome!" << endl;
    }
}
