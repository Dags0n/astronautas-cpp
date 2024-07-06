#include <iostream>
#include "./../headers/Voo.h"

Voo::Voo(int codigoVoo) : codigoVoo(codigoVoo), planejamento(true), finalizado(false), andamento(false), explodido(false) {}

int Voo::getCodigoVoo() const {
    return codigoVoo;
}
bool Voo::getPlanejamento() const {
    return planejamento;
}
bool Voo::getFinalizado() const {
    return finalizado;
}
bool Voo::getAndamento() const {
    return andamento;
}
bool Voo::getExplodido() const {
    return explodido;
}
vector<Astronauta*> Voo::getPassageiros() const {
    return passageiros;
}

// Setters
void Voo::setPlanejamento(bool status) {
    planejamento = status;
}
void Voo::setFinalizado(bool status) {
    finalizado = status;
}
void Voo::setAndamento(bool status) {
    andamento = status;
}
void Voo::setExplodido(bool status) {
    explodido = status;
}

// Adiconar passageiro ao voo
void Voo::adicionarPassageiroVoo(Astronauta* astronauta) {
    // Verificar se o astronauta está disponível
    if (astronauta->getDisponivel() == false) {
        cout << "Astronauta não está disponível!\n" << endl;
        return;
    }
    if (planejamento) {
        for (Astronauta* a : passageiros) {
            if (a->getCPF() == astronauta->getCPF()) {
                cout << "Astronauta já está no voo!\n" << endl;
                return;
            }
        }
        passageiros.push_back(astronauta);
        cout << "Astronauta adicionado ao voo!\n" << endl;
    } else {
        cout << "Não é possível adicionar astronauta ao voo, pois ele já foi lançado!\n" << endl;
    }
}

// Remover passageiro do voo
void Voo::removerPassageiroVoo(string cpf) {
    if (planejamento) {
        for (int i = 0; i < passageiros.size(); i++) {
            if (passageiros[i]->getCPF() == cpf) {
                passageiros.erase(passageiros.begin() + i);
                cout << "Astronauta removido do voo!\n" << endl;
                return;
            }
        }
        cout << "Astronauta não encontrado no voo!\n" << endl;
    } else {
        cout << "Não é possível remover astronauta do voo, pois ele já foi lançado!\n" << endl;
    }
}

// Lançar voo
void Voo::lancarVoo() {
    if (planejamento) {
        // Verificar se há astronautas no voo
        if (passageiros.size() == 0) {
            cout << "Não é possível lançar o voo sem astronautas!\n" << endl;
            return;
        }

        // Verificar se todos os astronautas estão disponíveis
        for (Astronauta* a : passageiros) {
            if (a->getDisponivel() == false) {
                cout << "Astronauta " << a->getNome() << " não está disponível!\n" << endl;
                return;
            }
        }

        // Lançar voo
        setPlanejamento(false);
        setAndamento(true);
        for (Astronauta* a : passageiros) {
            a->setDisponivel(false);
        }
        cout << "Voo lançado!\n" << endl;
    } else {
        cout << "Voo já foi lançado!\n" << endl;
    }
}

// Finalizar voo
void Voo::finalizarVoo() {
    if (planejamento) {
        cout << "Voo ainda está em planejamento!\n" << endl;
    } else if (explodido) {
        cout << "Não é possível, pois o voo foi explodido!\n" << endl;
    } else if (finalizado) {
        cout << "Voo já foi finalizado!\n" << endl; 
    } else {
        setFinalizado(true);
        setAndamento(false);
        for(Astronauta* a : passageiros) {
            a->setDisponivel(true);
        }
        cout << "Voo finalizado com sucesso!\n" << endl;
    }
}

// Explodir voo
void Voo::explodirVoo() {
    if (planejamento) {
        cout << "Voo ainda está em planejamento!\n" << endl;
    } else if (finalizado) {
        cout << "Não é possível, pois o voo já foi finalizado!\n" << endl;
    } else if (explodido) {
        cout << "Voo já foi explodido!\n" << endl;
    } else {
        setExplodido(true);
        setAndamento(false);
        for(Astronauta* a : passageiros) {
            a->morrer();
            a->setDisponivel(false);
        }
        cout << "Voo explodido!\n" << endl;
    }
}