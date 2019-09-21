#include <iostream>
using namespace std;

//Exercicio-28082019
//Usar Serviço polimorfismo

class UserService {
public:
	virtual int calcula() = 0;
	void gratis() {
		cout << "Valor";
	}
};

class UserServiceA : public UserService {
public:
	virtual int calcula() {
		return 7;
	}
};

int main() {

	UserServiceA usa;
	UserService* us = &usa;
	UserService* us2 = new UserServiceA();
	us->gratis();
	us2->gratis();
	cout << usa.calcula();

	return 0;
}