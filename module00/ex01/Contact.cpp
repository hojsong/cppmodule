#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

void	Contact::initcontact()
{
	std::cout << "Firstname : ";
	std::getline(std::cin, FirstName);
	if (std::cin.eof()){
		std::cout << "\nEOF input : EXIT"<< std::endl;
		std::exit(1);
	}
	std::cout << "LastName : ";
	std::getline(std::cin, LastName);
	if (std::cin.eof()){
		std::cout << "\nEOF input : EXIT"<< std::endl;
		std::exit(1);
	}
	std::cout << "NickName : ";
    std::getline(std::cin, NickName);
	if (std::cin.eof()){
		std::cout << "\nEOF input : EXIT"<< std::endl;
		std::exit(1);
	}
    std::cout << "Phonenum : ";
	std::getline(std::cin, Phonenum);
	if (std::cin.eof()){
		std::cout << "\nEOF input : EXIT"<< std::endl;
		std::exit(1);
	}
	std::cout << "DarkestSercret : ";
	std::getline(std::cin, DarkestSercret);
	if (std::cin.eof()){
		std::cout << "\nEOF input : EXIT"<< std::endl;
		std::exit(1);
	}
}

void	Contact::printcontact()
{
	unsigned long	i;
	
	if (FirstName.length() < 10)
		for (i = 0; i < 10 - FirstName.length(); i++)
			std::cout << " ";
	Phonebookprint(FirstName);
	std::cout << " | ";
	if (LastName.length() < 10)
		for (i = 0; i < 10 - LastName.length(); i++)
			std::cout << " ";
	Phonebookprint(LastName);
   	std::cout << " | ";
	if (NickName.length() < 10)
		for (i = 0; i < 10 - NickName.length(); i++)
			std::cout << " ";
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
	int	i;

	i = 0;
	while (i < 9 && str[i])
	{
		std::cout << str[i];
		i++;
	}
	if (str[i])
		std::cout << ".";
}
