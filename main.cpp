#include "cpf.hpp" 


int main() {
	
	auto c = std::make_unique<Cpf>(); 
	std::cout << c->m_numbs << '\n';

	return 0; 

}
