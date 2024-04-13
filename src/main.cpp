#include <iostream>
#include "../headers/Astronauta.h"
#include "../headers/Voo.h"
#include "../headers/Manager.h"

using namespace std;

int main() {

  int escolha;
    do {
      cout << "Menu:" << endl;
      cout << "1. Menu de Astronautas" << endl;
      cout << "2. Menu de Voos" << endl;
      cout << "0. Sair" << endl;
      cout << "Escolha uma opcao: ";
      cin >> escolha;

      switch (escolha) {
        case 1: {
          break;
        }
        case 2: {
          break;
        }
        case 0: {
          cout << "Saindo do programa..." << endl;
          // limpar memoria alocada
          
          break;
        }
        default:
          cout << "Opcao invalida. Por favor, escolha uma opcao valida." << endl;
          break;
        }
    } while (escolha != 3);

  return 0;
}
