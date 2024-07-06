#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H

#include <string>

using namespace std;

class Astronauta {
private:
    string cpf;
    string nome;
    int idade;
    bool vivo;
    bool disponivel;

public:
    // Construtor
    Astronauta(string cpf, string nome, int idade);

    // Getters
    string getCPF() const;
    string getNome() const;
    int getIdade() const;
    bool getVivo() const;
    bool getDisponivel() const;
    
    // Setters
    void morrer();
    void setDisponivel(bool status);
};

#endif // ASTRONAUTA_H
