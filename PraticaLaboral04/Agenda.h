#pragma once
#include "Pessoa.h"
class Agenda
{
	private:
		Pessoa Povo[10];
		int numPessoas = 0;

	public:
		void armazenaPessoa(string nome, int idade, float altura);
		int buscaPessoa(string nome);
		void imprimePovo();
		void imprimePessoa(int i);
		void removePessoa(string nome);
};

