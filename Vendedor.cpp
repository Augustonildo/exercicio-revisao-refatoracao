#include "Vendedor.hpp"

#define MESES_ANO 12

void Vendedor::exibirDadosDoMes(double horasTrabalhadas){
	Empregado::exibirDadosDoMes(horasTrabalhadas);
	std::cout << "Quota vendas: " << this->quotaMensalVendas * MESES_ANO << std::endl;  
}
