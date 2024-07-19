#include "cpf.hpp"

Cpf::Cpf(){

	std::srand(std::time(0)); 
	//For to gen the first nine digits 
	for(size_t i {}; i < 9; ++i) { 
		this->m_numbs += std::to_string(std::rand() % 9); 
	}

}
