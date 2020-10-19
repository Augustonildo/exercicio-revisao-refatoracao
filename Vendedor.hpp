#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome,salarioHora), quotaMensalVendas(quotaMensalVendas) {};
    void exibirDadosDoMes(double horasTrabalhadas);

  private:
    double quotaMensalVendas;

};

