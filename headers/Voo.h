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
    bool finalizado;
    bool andamento;
    bool explodido;

public:
    Voo(int codigoVoo);

    int getCodigoVoo() const;
    vector<Astronauta*> getPassageiros() const;
    bool getPlanejamento() const;
    bool getFinalizado() const;
    bool getAndamento() const;
    bool getExplodido() const;

    void setPlanejamento(bool status);
    void setFinalizado(bool status);
    void setAndamento(bool status);
    void setExplodido(bool status);

    void adicionarPassageiroVoo(Astronauta* astronauta);
    void removerPassageiroVoo(string cpf);
    void lancarVoo();
    void explodirVoo();
    void finalizarVoo();
    void listarPassageiros() const;
};

#endif // VOO_H
