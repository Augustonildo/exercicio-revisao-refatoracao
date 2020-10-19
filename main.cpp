#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {
  Engenheiro eng1 = Engenheiro("Joao Snow", 35, 3);
  eng1.exibirDadosDoMes(9.5);
  std::cout << std::endl;
  
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30, 1);
  eng2.exibirDadosDoMes(8);  
  std::cout << std::endl;
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 2);
  eng3.exibirDadosDoMes(8);  
  std::cout << std::endl;
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000);
  vend1.exibirDadosDoMes(6);
  std::cout << std::endl;
  
  Vendedor vend2 = Vendedor("Jose Mormont", 25, 3000);
  vend2.exibirDadosDoMes(8);
  std::cout << std::endl;  
	
  Vendedor vend3 = Vendedor("Sonia Stark", 30, 4000);
  vend3.exibirDadosDoMes(8);  
  
  return 0;	
}