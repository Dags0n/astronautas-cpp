#include <iostream>
#include "../headers/Astronauta.h"
#include "../headers/Voo.h"
#include "../headers/Manager.h"

using namespace std;

int main() {

  Sistema sistema;

  int escolha, escolha1, escolha2;
    do {
      cout << "====================================\n";
      cout << "|          Menu Principal          |\n";
      cout << "------------------------------------\n";
      cout << "| 1 - Menu de Astronautas          |\n";
      cout << "| 2 - Menu de Voos                 |\n";
      cout << "| 0 - Finalizar Programa           |\n";
      cout << "====================================\n";
      cout << "Escolha uma opcao: ";
      cin >> escolha;
      cout << endl;

      switch (escolha) {
        case 1: {
          cout << "====================================\n";
          cout << "|          Menu Astronautas        |\n";
          cout << "------------------------------------\n";
          cout << "| 1 - Cadastrar Astronauta         |\n";
          cout << "| 2 - Adicionar Astronauta em Voo  |\n";
          cout << "| 3 - Remover Astronauta de Voo    |\n";
          cout << "| 4 - Listar Astronautas           |\n";
          cout << "| 5 - Listar Astronautas Mortos    |\n";
          cout << "| 0 - Voltar                       |\n";
          cout << "====================================\n";
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
          cout << "====================================\n";
          cout << "|            Menu Voos             |\n";
          cout << "------------------------------------\n";
          cout << "| 1 - Cadastrar Voo                |\n";
          cout << "| 2 - Lançar Voo                   |\n";
          cout << "| 3 - Explodir Voo                 |\n";
          cout << "| 4 - Finalizar Voo                |\n";
          cout << "| 5 - Listar Voos                  |\n";
          cout << "| 0 - Voltar                       |\n";
          cout << "====================================\n";
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
