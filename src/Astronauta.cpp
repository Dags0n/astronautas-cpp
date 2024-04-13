#include <iostream>
#include "../headers/Astronauta.h"

using namespace std;

Astronauta::Astronauta(string cpf, string nome, int idade)
    : cpf(cpf), nome(nome), idade(idade) {}

string Astronauta::getCPF() const {
    return cpf;
}

string Astronauta::getNome() const {
    return nome;
}

int Astronauta::getIdade() const {
    return idade;
}
