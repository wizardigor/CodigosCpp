#include <iostream>

class Pneu{
	private:
		int ano;
		std::string marca;
	
	public:
		Pneu(int ano, std::string marca);
		int getAno();
		std::string getMarca();
		void setAno(int ano);
		void setMarca(std::string marca);
};
