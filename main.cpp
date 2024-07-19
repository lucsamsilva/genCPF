#include "cpf.hpp" 


int main() {
	
	std::unique_ptr<Cpf> c = std::make_unique<Cpf>(); 
	std::cout << c->m_numbs << '\n';

	return 0; 

}
