#ifndef VOO_H
#define VOO_H

#include <vector>
#include "Astronauta.h"

using namespace std;

class Voo {
private:
    int codigoVoo;
    vector<Astronauta*> passageiros;
    bool planejamento;

public:
    Voo(int codigoVoo);

    int getCodigoVoo() const;

    void adicionarPassageiroVoo(Astronauta* astronauta);
    void removerPassageiroVoo(string cpf);
    void lancarVoo();
    void explodirVoo();
    void finalizarVoo(bool sucesso);
    void listarVoos() const;
};

#endif // VOO_H
