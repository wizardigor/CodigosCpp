#include <iostream>

//Exercicio 28082019
class Pneu {
public:
	float tamanho;
};

class Carro {
public:
	float peso;
	Pneu p;
};

int main() {

	Carro c;

	c.peso = 4.0;
	c.p.tamanho = 5000.0;

	std::cout << c.peso << std::endl;
	std::cout << c.p.tamanho << std::endl;
	
	return 0;
}