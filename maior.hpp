/*
Title: maior.hpp
Description: maior header file
Teacher: Mateus Arnaud Goldbarg
*/

#ifndef MAIOR_HPP
#define MAIOR_HPP

const int CAPACIDADE = 100000;
class Maior{
	public:
		Maior();
		~Maior();
		void insere(int valor);
		int buscaMaior();
		void imprime();
		int size();
		void ordena();
	private:
		int listaInteiros[CAPACIDADE];
		int tamanho;
		int maiorValor;
};

#endif