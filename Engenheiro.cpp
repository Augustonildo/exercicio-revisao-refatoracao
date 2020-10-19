#include "Engenheiro.hpp"

void Engenheiro::exibirDadosDoMes(double horasTrabalhadas){
  Empregado::exibirDadosDoMes(horasTrabalhadas);
  std::cout << "Projetos: " << this->projetos << std::endl;
}