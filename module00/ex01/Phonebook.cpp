#include "Phonebook.hpp"

void Phonebook::print_book(){
	int	i;
	int	num;

	if (idx == 0)
	{
		std::cout << "No Index Phonebook" << std::endl;
		return ;
	}
	i = 0;
	std::cout << "index |  FirstName |   LastName |   NickName" << std::endl;
	while (i < idx && i < 8)
	{
		std::cout << "    " << i + 1 << " | ";
		book[i].printcontact();
		i++;
	}
	while (1)
	{
		std::cout << "What Find Index Number : ";
		std::cin >> num;
		if (std::cin.eof()){
			std::cout << "\nEOF input : EXIT"<< std::endl;
			std::exit(1);
		}
		else if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Wrong input" << std::endl;
		}
		else if(idx < 8 && (num < 1 || num > idx)){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Out of NUM : num is 1 ~ "<< idx << std::endl;	
		}
		else if(num > 8 || num < 1){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Out of NUM : num is 1 ~ 8" << std::endl;	
		}
		else
			break;
	}
	std::cin.ignore();
	book[num-1].allprint();
}

void Phonebook::initPhonebook(){
	book[idx % 8].Contact::initcontact();
	idx++;
}

Phonebook::~Phonebook(){

}

Phonebook::Phonebook(){
	idx = 0;
}
