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
    Astronauta(string cpf, string nome, int idade);

    string getCPF() const;
    string getNome() const;
    int getIdade() const;
    bool getVivo() const;
    bool getDisponivel() const;
    
    void morrer();
    void setDisponivel(bool status);
};

#endif // ASTRONAUTA_H
