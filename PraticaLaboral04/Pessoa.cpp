#include "Pessoa.h"

Pessoa::Pessoa(){
	nome = "";
	idade = 0;
	altura = 0.0;
}

Pessoa::Pessoa(string nome, int idade, float altura){
	this->nome = nome;
	this->idade = idade;
	this->altura = altura;
}

Pessoa::Pessoa(Pessoa& p){
	nome = p.nome;
	idade = p.idade;
	altura = p.altura;
}

string Pessoa::getNome(){
	return nome;
}

int Pessoa::getIdade(){
	return idade;
}

float Pessoa::getAltura(){
	return altura;
}

void Pessoa::setNome(string nome){
	this->nome = nome;
}

void Pessoa::setIdade(int idade){
	this->idade = idade;
}

void Pessoa::setAltura(float altura){
	this->altura = altura;
}

void Pessoa::mostrarPessoa(){
	cout << "Nome:"<<nome<<"\tIdade: "<<idade<<"\tAltura: "<<setprecision(3)<<altura<<"\n";
}


