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
    // cpf e voos que o astronauta morto participou
    unordered_map<string, vector<Voo*>> astronautasMortos;
    unordered_map<string, vector<Voo*>> astronautasVooFinalizados;

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
