#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
	private: 
		Contact book[8];
		int		idx;	
	public:
		void initPhonebook();
		void print_book();
		~Phonebook();
		Phonebook();
};

void	Phonebookprint(std::string str);

#endif