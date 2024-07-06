#include <iostream>
#include "../headers/Astronauta.h"

using namespace std;

// Construtor
Astronauta::Astronauta(string cpf, string nome, int idade)
    : cpf(cpf), nome(nome), idade(idade), vivo(true), disponivel(true) {}

// Getters
string Astronauta::getCPF() const {
    return cpf;
}

string Astronauta::getNome() const {
    return nome;
}

int Astronauta::getIdade() const {
    return idade;
}

bool Astronauta::getVivo() const {
    return vivo;
}

bool Astronauta::getDisponivel() const {
    return disponivel;
}

// Matar astronauta
void Astronauta::morrer() {
    vivo = false;
}

// Disponibilizar astronauta
void Astronauta::setDisponivel(bool status) {
    disponivel = status;
}