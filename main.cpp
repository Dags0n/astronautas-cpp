#include <iostream>
#include <string>

using namespace std;

class Astronautas {
  private:
  string cpf;
  string nome;
  int idade;

  public:

  Astronautas(string cpf, string nome, int idade) {
    this->cpf = cpf;
    this->nome = nome;
    this->idade = idade;
  }
};

class Voo {
  private:
  string codigo;
  Astronautas *astronauta;

  public:

  Voo(string codigo, Astronautas *astronauta) {
    this->codigo = codigo;
    this->astronauta = astronauta;
  }
};

int main() {

  return 0;
}
