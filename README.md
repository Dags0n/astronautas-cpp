# Sistema de Gestão de Astronautas e Voos Espaciais
Este projeto é um sistema simples de gestão de astronautas em C++ para a disciplina Linguagem de Programação I. O sistema permite cadastrar astronautas, voos, adicionar e remover astronautas de voos, lançar voos, explodir voos, finalizar voos com sucesso ou não, listar voos planejados, em curso e finalizados, além de manter registro dos astronautas mortos.

## Funcionalidades Implementadas
<ul style="font-family: Arial, sans-serif">
  <li>Cadastro de astronautas com CPF, nome e idade.</li>
  <li>Cadastro de voos com código único.</li>
  <li>Adição e remoção de astronautas de voos.</li>
  <li>Lançamento de voos após planejamento.</li>
  <li>Explosão de voos (marca astronautas como mortos).</li>
  <li>Finalização de voos, indicando sucesso ou não.</li>
  <li>Listagem de voos planejados, em curso e finalizados.</li>
  <li>Registro e listagem de astronautas mortos, com detalhes de participação em voos.</li>
</ul>

## Estrutura do Projeto
#### O projeto está estruturado em três principais classes:
<ol style="font-family: Arial, sans-serif">
  <li>Astronauta: Representa um astronauta com CPF, nome, idade e status de vida.</li>
  <li>Voo: Representa um voo espacial com um código único e uma lista de passageiros (astronautas).</li>
  <li>Sistema: Gerencia todas as operações do sistema, incluindo cadastro, manipulação e listagem de astronautas e voos.</li>
</ol>

## Como executar numa Máquina Unix
**Clone o projeto**:
```bash
  git clone https://github.com/Dags0n/astronautas-cpp
```

**Navegue até diretório do projeto**:
```bash
  cd astronautas-cpp/src
```

**Instale as ferramentas essenciais para compilar C++**:
```bash
  sudo apt update
  sudo apt install build-essential
```

**Tendo um compilador, compile o código com**:
```bash
  g++ main.cpp Astronauta.cpp Voo.cpp Manager.cpp -o astronauta
```

**Agora é só executar o programa**:
```bash
  ./astronauta
```
