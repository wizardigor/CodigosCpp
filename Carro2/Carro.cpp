#include "Carro.h"

Carro::Carro(float peso, Pneu pneu):peso(peso), pneu(pneu){
	
}

float Carro::getPeso(){
	return peso;
}

Pneu Carro::getPneu(){
	return pneu;
}

void Carro::setPeso(float peso){
	this->peso= peso;
}

void Carro::setPneu(Pneu pneu){
	this->pneu= pneu;
}

