#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {
  int limiteHoras = 8;
  
  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > limiteHoras) {
    double horasExcedentes = horasTrabalhadas - limiteHoras;
    horasTrabalhadas += horasExcedentes/2;
  }

  return horasTrabalhadas * this->salarioHora;
}

void Empregado::exibirDadosDoMes(double horasTrabalhadas){
  std::cout << "Nome: " << this->nome << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
}