#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
	
  public:
    Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome,salarioHora), projetos(projetos) {};
    void exibirDadosDoMes(double horasTrabalhadas);

  private:
	  int projetos;

};

