#include <iostream>
#include "./../headers/Manager.h"

using namespace std;

// Cadastrar astronauta
void Sistema::cadastrarAstronauta() {
    string nome, cpf;
    int idade;
    cout << "Digite o CPF do astronauta: ";
    cin >> cpf;
    cout << "Digite o nome do astronauta: ";
    cin >> nome;
    cout << "Digite a idade do astronauta: ";
    cin >> idade;

    // Verificar se astronauta já foi cadastrado
    for (Astronauta* astronauta : astronautas) {
        if (astronauta->getCPF() == cpf) {
            cout << "Astronauta já cadastrado!\n" << endl;
            return;
        }
    }

    astronautas.push_back(new Astronauta(cpf, nome, idade));
    cout << "Astronauta cadastrado com sucesso!\n" << endl;
}

// Listar astronautas
void Sistema::listarAstronautas() {
    // Verificar se há astronautas cadastrados
    if (astronautas.size() == 0) {
        cout << "Não há astronautas cadastrados!\n" << endl;
        return;
    }
    cout << "-------------------------------------\n" << endl;
    cout << "Astronautas cadastrados:\n" << endl;
    for (Astronauta* astronauta : astronautas) {
        cout << "CPF: " << astronauta->getCPF() << endl;
        cout << "Nome: " << astronauta->getNome() << endl;
        cout << "Idade: " << astronauta->getIdade() << endl;
        cout << endl;
    }
    cout << "-------------------------------------" << endl;
}

// Cadastrar voo
void Sistema::cadastrarVoo() {
    int codigoVoo;
    cout << "Digite o código do voo: ";
    cin >> codigoVoo;

    // Verificar se voo já foi cadastrado
    for (Voo* voo : voos) {
        if (voo->getCodigoVoo() == codigoVoo) {
            cout << "Voo já cadastrado!\n" << endl;
            return;
        }
    }

    voos.push_back(new Voo(codigoVoo));
    cout << "Voo cadastrado com sucesso!\n" << endl;
}

// Listar voos
void Sistema::listarVoos() {
    // Verificar se há voos cadastrados
    if (voos.size() == 0) {
        cout << "Não há voos cadastrados!\n" << endl;
        return;
    }
    cout << "-------------------------------------\n" << endl;
    cout << "Voos cadastrados:\n" << endl;
    // Voos em planejamento
    for (Voo* voo : voos) {
        if (voo->getPlanejamento()) {
            cout << "Código do voo: " << voo->getCodigoVoo() << endl;
            cout << "Status: Planejamento" << endl;
            if (voo->getPassageiros().size() > 0) {
                cout << "Astronautas no voo:" << endl;
                for (Astronauta* astronauta : voo->getPassageiros()) {
                    cout << "CPF: " << astronauta->getCPF() << endl;
                    cout << "Nome: " << astronauta->getNome() << endl;
                    cout << "Idade: " << astronauta->getIdade() << endl;
                    cout << endl;
                }
            }

            cout << endl;
        }
    }

    // Voos em andamento
    for (Voo* voo : voos) {
        if (!voo->getPlanejamento() && !voo->getFinalizado() && !voo->getExplodido()) {
            cout << "Código do voo: " << voo->getCodigoVoo() << endl;
            cout << "Status: Em andamento" << endl;
            if (voo->getPassageiros().size() > 0) {
                cout << "Astronautas no voo:" << endl;
                for (Astronauta* astronauta : voo->getPassageiros()) {
                    cout << "CPF: " << astronauta->getCPF() << endl;
                    cout << "Nome: " << astronauta->getNome() << endl;
                    cout << "Idade: " << astronauta->getIdade() << endl;
                    cout << endl;
                }
            }
            cout << endl;
        }
    }

    // Voos finalizados
    for (Voo* voo : voos) {
        if (voo->getFinalizado()) {
            cout << "Código do voo: " << voo->getCodigoVoo() << endl;
            cout << "Status: Finalizado" << endl;
            if (voo->getPassageiros().size() > 0) {
                cout << "Astronautas no voo:" << endl;
                for (Astronauta* astronauta : voo->getPassageiros()) {
                    cout << "CPF: " << astronauta->getCPF() << endl;
                    cout << "Nome: " << astronauta->getNome() << endl;
                    cout << "Idade: " << astronauta->getIdade() << endl;
                    cout << endl;
                }
            }
            cout << endl;
        }
    }

    // Voos explodidos
    for (Voo* voo : voos) {
        if (voo->getExplodido()) {
            cout << "Código do voo: " << voo->getCodigoVoo() << endl;
            cout << "Status: Explodido" << endl;
            if (voo->getPassageiros().size() > 0) {
                cout << "Astronautas no voo:" << endl;
                for (Astronauta* astronauta : voo->getPassageiros()) {
                    cout << "CPF: " << astronauta->getCPF() << endl;
                    cout << "Nome: " << astronauta->getNome() << endl;
                    cout << "Idade: " << astronauta->getIdade() << endl;
                    cout << endl;
                }
            }
            cout << endl;
        }
    }
    cout << "-------------------------------------" << endl;
}

// Adicionar astronauta em voo
void Sistema::adicionarAstronautaEmVoo() {
    string cpf;
    int codigoVoo;
    cout << "Digite o CPF do astronauta: ";
    cin >> cpf;
    cout << "Digite o código do voo: ";
    cin >> codigoVoo;
    
    // Verificar se astronauta existe
    Astronauta* astronauta = nullptr;
    for (Astronauta* a : astronautas) {
        if (a->getCPF() == cpf) {
            astronauta = a;
            break;
        }
    }
    if (astronauta == nullptr) {
        cout << "Astronauta não encontrado!\n" << endl;
        return;
    }

    // Verificar se voo existe
    Voo* voo = nullptr;
    for (Voo* v : voos) {
        if (v->getCodigoVoo() == codigoVoo) {
            voo = v;
            break;
        }
    }
    if (voo == nullptr) {
        cout << "Voo não encontrado!\n" << endl;
        return;
    }

    voo->adicionarPassageiroVoo(astronauta);
}

// Remover astronauta de voo
void Sistema::removerAstronautaDeVoo() {
    string cpf;
    int codigoVoo;
    cout << "Digite o CPF do astronauta: ";
    cin >> cpf;
    cout << "Digite o código do voo: ";
    cin >> codigoVoo;
    
    // Verificar se astronauta existe
    Astronauta* astronauta = nullptr;
    for (Astronauta* a : astronautas) {
        if (a->getCPF() == cpf) {
            astronauta = a;
            break;
        }
    }
    if (astronauta == nullptr) {
        cout << "Astronauta não encontrado!\n" << endl;
        return;
    }

    // Verificar se voo existe
    Voo* voo = nullptr;
    for (Voo* v : voos) {
        if (v->getCodigoVoo() == codigoVoo) {
            voo = v;
            break;
        }
    }
    if (voo == nullptr) {
        cout << "Voo não encontrado!\n" << endl;
        return;
    }

    voo->removerPassageiroVoo(cpf);
}

// Lançar voo
void Sistema::lancarVoo() {
    int codigoVoo;
    cout << "Digite o código do voo: ";
    cin >> codigoVoo;

    // Verificar se voo existe
    Voo* voo = nullptr;
    for (Voo* v : voos) {
        if (v->getCodigoVoo() == codigoVoo) {
            voo = v;
            break;
        }
    }
    if (voo == nullptr) {
        cout << "Voo não encontrado!\n" << endl;
        return;
    }

    voo->lancarVoo();
}

// Explodir voo
void Sistema::explodirVoo() {
    int codigoVoo;
    cout << "Digite o código do voo: ";
    cin >> codigoVoo;

    // Verificar se voo existe
    Voo* voo = nullptr;
    for (Voo* v : voos) {
        if (v->getCodigoVoo() == codigoVoo) {
            voo = v;
            break;
        }
    }
    if (voo == nullptr) {
        cout << "Voo não encontrado!\n" << endl;
        return;
    }

    voo->explodirVoo();

    // Adicionar astronautas mortos se e somente se o voo explodir
    if (voo->getExplodido()) {
        for (Astronauta* astronauta : voo->getPassageiros()) {
            astronautasMortos[astronauta->getCPF()].push_back(voo);
        }
    }
}

// Finalizar voo
void Sistema::finalizarVoo() {
    int codigoVoo;
    cout << "Digite o código do voo: ";
    cin >> codigoVoo;

    // Verificar se voo existe
    Voo* voo = nullptr;
    for (Voo* v : voos) {
        if (v->getCodigoVoo() == codigoVoo) {
            voo = v;
            break;
        }
    }
    if (voo == nullptr) {
        cout << "Voo não encontrado!\n" << endl;
        return;
    }

    voo->finalizarVoo();

    // Adicionar voos finalizados para quando/se o astronauta morrer
    if (voo->getFinalizado()) {
        for (Astronauta* astronauta : voo->getPassageiros()) {
            astronautasVooFinalizados[astronauta->getCPF()].push_back(voo);
        }
    }
}

// Listar passageiros mortos
void Sistema::listarAstronautasMortos() {
    // Verificar se há astronautas mortos
    if (astronautasMortos.size() == 0) {
        cout << "Não há astronautas mortos!\n" << endl;
        return;
    }
    cout << "-------------------------------------\n" << endl;
    cout << "Astronautas mortos:" << endl;
    for (auto it = astronautasMortos.begin(); it != astronautasMortos.end(); it++) {
        cout << "CPF: " << it->first << endl;
        cout << "Nome: ";
        for (Astronauta* astronauta : astronautas) {
            if (astronauta->getCPF() == it->first) {
                cout << astronauta->getNome() << endl;
                break;
            }
        }
        cout << "Voo que o astronauta foi de arrasta:" << endl;
        for (Voo* voo : it->second) {
            cout << "Código do voo: " << voo->getCodigoVoo() << endl;            
        }
        //voos que o astronauta finalizou com sucesso
        cout << "Voos que o astronauta participou:" << endl;
        for (auto it2 = astronautasVooFinalizados.begin(); it2 != astronautasVooFinalizados.end(); it2++) {
            if (it2->first == it->first) {
                for (Voo* voo : it2->second) {
                    cout << "Código do voo: " << voo->getCodigoVoo() << endl;
                }
            }
        }

        
        cout << endl;
    }
    cout << "-------------------------------------\n" << endl;
    cout << endl;
}