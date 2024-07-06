#include <iostream>
#include "../headers/Astronauta.h"
#include "../headers/Voo.h"
#include "../headers/Manager.h"

using namespace std;

int main() {

  Sistema sistema;

  int escolha, escolha1, escolha2;
    do {
      cout << "Menu:" << endl;
      cout << "1. Menu de Astronautas" << endl;
      cout << "2. Menu de Voos" << endl;
      cout << "0. Sair" << endl;
      cout << "Escolha uma opcao: ";
      cin >> escolha;
      cout << endl;

      switch (escolha) {
        case 1: {
          cout << "Menu:" << endl;
          cout << "1. Cadastrar astronauta" << endl;
          cout << "2. Adicionar astronauta em voo" << endl;
          cout << "3. Remover astronauta de voo" << endl;
          cout << "4. Listar astronautas" << endl;
          cout << "5. Listar astronautas mortos" << endl;
          cout << "0. Sair" << endl;
          cout << "Escolha uma opcao: ";
          cin >> escolha1;
          cout << endl;

          switch (escolha1)
          {
          case 1:
            sistema.cadastrarAstronauta();
            break;
          case 2:
            sistema.adicionarAstronautaEmVoo();
            break;
          case 3:
            sistema.removerAstronautaDeVoo();
            break;
          case 4:
            sistema.listarAstronautas();
            break;
          case 5:
            sistema.listarAstronautasMortos();
            break;
          case 0:
            cout << "Saindo do menu de astronautas..." << endl;
            break;
          default:
            cout << "Opcao invalida. Por favor, escolha uma opcao valida." << endl;
            break;
          }
          break;
        }
        case 2: {
          cout << "Menu:" << endl;
          cout << "1. Cadastrar voo" << endl;
          cout << "2. Lançar voo" << endl;
          cout << "3. Explodir voo" << endl;
          cout << "4. Finalizar voo" << endl;
          cout << "5. Listar voos" << endl;
          cout << "0. Sair" << endl;
          cout << "Escolha uma opcao: ";
          cin >> escolha2;
          cout << endl;

          switch (escolha2)
          {
          case 1:
            sistema.cadastrarVoo();
            break;
          case 2:
            sistema.lancarVoo();
            break;
          case 3:
            sistema.explodirVoo();
            break;
          case 4:
            sistema.finalizarVoo();
            break;
          case 5:
            sistema.listarVoos();
            break;
          case 0:
            cout << "Saindo do menu de voos..." << endl;
            break;
          default:
            cout << "Opcao invalida. Por favor, escolha uma opcao valida." << endl;
            break;
          }
          break;
        }
        case 0: {
          cout << "Saindo do programa..." << endl;
          break;
        }
        default:
          cout << "Opcao invalida. Por favor, escolha uma opcao valida." << endl;
          break;
        }
    } while (escolha != 0);

  return 0;
}
