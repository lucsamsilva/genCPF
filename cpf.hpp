#pragma once 

#include <iostream> 
#include <memory> 
#include <cstdlib> // for std::rand 
#include <ctime>
#include <algorithm> 

class Cpf{ 
	public: 
		Cpf(); 
		std::string m_numbs;
	  void generate_digit_one(); 
		void generate_digit_two(); 
};
