#include <iostream>
#include <vector>
using namespace std;

//Exercicio-18092019
//Editora

class Artigo {
private:
	string autor;
	string titulo;
	string conteudo;

public:
	string getAutor() {
		return autor;
	}

	string getTitulo() {
		return titulo;
	}

	string getConteudo() {
		return conteudo;
	}

	void setAutor(string autor) {
		this->autor;
	}

	void setTitulo(string titulo) {
		this->titulo;
	}

	void setConteudo(string conteudo) {
		this->conteudo;
	}
};

class Edicao {
private:
	int ano;
	string editora;
	vector<Artigo> artigos;

public:
	vector<Artigo> getartigos() {
		return artigos;
	}



	string getEditora() {
		return editora;
	}

	int getAno() {
		return ano;
	}

	void insertArtigo(Artigo artigo) {
		artigos.push_back(artigo);
	}

	void setEditora(string editora) {
		this->editora;
	}

	void setAno(int ano) {
		this->ano;
	}
};

class RevistaCientifica {
private:
	string nome;
	string data;
	string area;
	vector<Edicao> edicoes;

public:
	void insereEdicoes(Edicao ed) {
		edicoes.push_back(ed);
	}

	void setNome(string nome) {
		this->nome;
	}

	void setDate(string data) {
		this->data;

	}

	void setArea(string area) {
		this->area;
	}

	vector<Edicao> getEdicoes() {
		return edicoes;
	}

	string getNome() {
		return nome;
	}

	string getData() {
		return data;
	}

	string getArea() {
		return area;
	}
};
int main() {
	//criar Artigos
	//string autor;
	//string titulo;
	//string conteudo;

	Artigo artigo1;
	artigo1.setAutor("MAria");
	artigo1.setTitulo("GPs");
	artigo1.setConteudo("Casa");

	Artigo artigo2;
	artigo2.setAutor("Jose");
	artigo2.setTitulo("Biticoin");
	artigo2.setConteudo("Carro");

	//Criar Edição
	//int ano;
	//string editora;
	//vector<Artigo> artigos;

	Edicao ed1;
	ed1.setAno(1990);
	ed1.setEditora("abc");
	ed1.insertArtigo(artigo1);
	ed1.insertArtigo(artigo2);

	//definir REvistaCientifica
	//string nome;
	//string data;
	//string area;
	//vector<Edicao> edicoes;

	RevistaCientifica revCient;
	revCient.setNome("Revista a");
	revCient.setDate("09/10/1950");
	revCient.setArea("Cientifica");
	revCient.insereEdicoes(ed1);

	return 0;
}
