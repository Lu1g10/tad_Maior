#include <iostream>
#include "maior.hpp"

using namespace std;

int main(){
	
	Maior maior = Maior();

	maior.insere(2);
	maior.insere(4);
	maior.insere(0);
	maior.insere(8);
	maior.insere(-9);
	maior.insere(20);

	maior.imprime();
	maior.ordena();
	maior.imprime();
	
	int m = maior.buscaMaior();
	int n = maior.size();
	cout << "Maior termo: " << m << endl << "Tamanho do vetor: " << n << endl;
	return 0;
}