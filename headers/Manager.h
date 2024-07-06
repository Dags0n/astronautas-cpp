#ifndef SISTEMA_H
#define SISTEMA_H

#include "Astronauta.h"
#include "Voo.h"
#include <vector>
#include <unordered_map>

class Sistema {
private:
    vector<Astronauta*> astronautas;
    vector<Voo*> voos;
    unordered_map<string, int> astronautasMortos;

public:
    void cadastrarAstronauta();
    void listarAstronautas();
    void cadastrarVoo();
    void listarVoos();
    void adicionarAstronautaEmVoo();
    void removerAstronautaDeVoo();
    void listarAstronautasMortos();
    void lancarVoo();
    void finalizarVoo();
    void explodirVoo();

};

#endif // SISTEMA_H
