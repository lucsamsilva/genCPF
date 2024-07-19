#include "cpf.hpp"

Cpf::Cpf(){

	std::srand(std::time(0)); 
	//For to gen the first nine digits 
	for(size_t i {}; i < 9; ++i) { 
		this->m_numbs += std::to_string(std::rand() % 9); 
	}

	generate_digit_one(); 
	generate_digit_two();
}


void Cpf::generate_digit_one() { 
	int digit1{}; 

	for (size_t i {}, k{10}; i < m_numbs.size(); ++i, --k) {
		digit1 += std::stoi(m_numbs.substr(i,1)) * k; 
	}


	(digit1 % 11 < 2) ? 
		this->m_numbs += "0" : 
		this->m_numbs += std::to_string(11-(digit1 % 11)); 

}

void Cpf::generate_digit_two() { 
	int digit2{}; 

	for (size_t i {}, k{10}; i < m_numbs.size() - 1; ++i, --k) {
		digit2 += std::stoi(m_numbs.substr(i+1,1)) * k; 
	}


	(digit2 % 11 < 2) ? 
		this->m_numbs += "0" : 
		this->m_numbs += std::to_string(11-(digit2 % 11)); 

}




