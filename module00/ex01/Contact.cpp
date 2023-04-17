#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

void	Contact::initcontact()
{
	while (1)
	{
		std::cout << "Firstname : ";
		std::getline(std::cin, FirstName);
		if (std::cin.eof()){
			std::cout << "\nEOF input : EXIT"<< std::endl;
			std::exit(1);
		}
		else if (FirstName.length() != 0)
			break ;
		std::cout << "Wrong input : " << std::endl;
	}
	while (1)
	{
		std::cout << "LastName : ";
		std::getline(std::cin, LastName);
		if (std::cin.eof()){
			std::cout << "\nEOF input : EXIT"<< std::endl;
			std::exit(1);
		}
		else if (LastName.length() != 0)
			break ;
		std::cout << "Wrong input : " << std::endl;
	}
	while (1)
	{
		std::cout << "NickName : ";
		std::getline(std::cin, NickName);
		if (std::cin.eof()){
			std::cout << "\nEOF input : EXIT"<< std::endl;
			std::exit(1);
		}
		else if (NickName.length() != 0)
			break ;
		std::cout << "Wrong input : " << std::endl;
	}
	while (1)
	{
		std::cout << "Phonenum : ";
		std::getline(std::cin, Phonenum);
		if (std::cin.eof()){
			std::cout << "\nEOF input : EXIT"<< std::endl;
			std::exit(1);
		}
		else if (Phonenum.length() != 0)
			break ;
		std::cout << "Wrong input : " << std::endl;
	}
	while (1)
	{
		std::cout << "DarkestSercret : ";
		std::getline(std::cin, DarkestSercret);
		if (std::cin.eof()){
			std::cout << "\nEOF input : EXIT"<< std::endl;
			std::exit(1);
		}
		else if (DarkestSercret.length() != 0)
			break ;
		std::cout << "Wrong input : " << std::endl;
	}
}

void	Contact::printcontact()
{
	Phonebookprint(FirstName);
	std::cout << " | ";
	Phonebookprint(LastName);
   	std::cout << " | ";
	Phonebookprint(NickName);
    std::cout << std::endl;
}

void Contact::allprint(void){
	std::cout << "FirstName : " << FirstName<< std::endl;
	std::cout << "LastName : " << LastName<< std::endl;
	std::cout << "NickName : " << NickName<< std::endl;
	std::cout << "Phonenum : " << Phonenum<< std::endl;
	std::cout << "DarkestSercret : " << DarkestSercret << std::endl;
}

void	Phonebookprint(std::string str)
{
	std::string str2;

	if (str.length() < 10)
		std::cout << std::setw(10) << std::setfill(' ') << str;
	else {
		str2 = str.substr(0, 9);
		std::cout << str2 << ".";
	}
}
