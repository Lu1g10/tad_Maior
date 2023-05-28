#include <iostream>
#include "maior.hpp"

/*
Title: maior.cpp
Description: maior cpp file
Teacher: Mateus Arnaud Goldbarg
*/

Maior::Maior(){
    std::cout << "Construindo objeto Padrao\n";
    listaInteiros[CAPACIDADE] = {};
}

Maior::~Maior(){
    std::cout << "Destruindo objeto " << "\n";
}

void Maior::insere(int valor){
	if (tamanho < CAPACIDADE){
		listaInteiros[tamanho] = valor;
		tamanho++;

		if (tamanho > 1 && maiorValor < listaInteiros[tamanho - 1]){
			maiorValor = listaInteiros[tamanho - 1];
		}else if (tamanho == 1){
			maiorValor = listaInteiros[0];
		}
	}
}

int Maior::buscaMaior(){
	if (tamanho == 0){
		throw std::logic_error("A lista está vazia");
	}
	return maiorValor;
}

void Maior::imprime(){
	for(int i = 0;i < tamanho;i++){
		std::cout << listaInteiros[i] << " ";
	}
	std::cout << std::endl;
}

int Maior::size(){
	return tamanho;
}

void Maior::ordena(){
	for (int h = tamanho/2;h > 0;h /= 2){
		for (int i = h;i < tamanho;i += 1){
			int temp = listaInteiros[i];
			int j;
			for (j = i;j >= h && listaInteiros[j - h] > temp;j -= h)
				listaInteiros[j] = listaInteiros[j - h];
			listaInteiros[j] = temp;
		}
	}
}