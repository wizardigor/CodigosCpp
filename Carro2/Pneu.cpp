#include "Pneu.h"

Pneu::Pneu(int ano, std::string marca):ano(ano), marca(marca){
	
}
int Pneu::getAno(){
	return ano;
}

std::string Pneu::getMarca(){
	return marca;
}

void Pneu::setAno(int ano){
	this->ano= ano;
}

void Pneu::setMarca(std::string marca){
	this->marca= marca;
}
