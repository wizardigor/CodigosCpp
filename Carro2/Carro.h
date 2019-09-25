#include "Pneu.h"

class Carro{
	private:
		float peso;
		Pneu pneu;
		
	public:
		Carro(float peso, Pneu pneu);
		float getPeso();
		Pneu getPneu();
		void setPeso(float peso);
		void setPneu(Pneu pneu);
};
