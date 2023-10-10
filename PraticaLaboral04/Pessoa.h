#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Pessoa
{
	public:
		Pessoa();
		Pessoa(string nome, int idade, float altura);
		Pessoa(Pessoa& p);
		string getNome();
		int getIdade();
		float getAltura();
		void setNome(string nome);
		void setIdade(int idade);
		void setAltura(float altura);
		void mostrarPessoa();
	private:
		string nome;
		int idade;
		float altura;
};

