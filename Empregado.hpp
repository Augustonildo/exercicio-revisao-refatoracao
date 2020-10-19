#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    Empregado(std::string nome, double salarioHora) : nome(nome), salarioHora(salarioHora) {};
    void exibirDadosDoMes(double horasTrabalhadas);
	
  private:
    std::string nome;
    double salarioHora;
    double pagamentoMes(double horasTrabalhadas);

};

#endif