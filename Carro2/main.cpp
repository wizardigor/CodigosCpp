#include "Carro.h"
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Pneu pneu(13, "pirelli");
	Carro carro(123, pneu);
	
	std::cout<<carro.getPeso();

	
	
	return 0;
}
