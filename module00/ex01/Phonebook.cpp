#include "Phonebook.hpp"

void	Contact::initcontact()
{
	std::cout << "Firstname : ";
	std::getline(std::cin, FirstName);
	if (std::cin.eof()){
		std::cout << "exit signal"<< std::endl;
		std::exit(1);
	}
	std::cout << "LastName : ";
	std::getline(std::cin, LastName);
	if (std::cin.eof()){
		std::cout << "exit signal"<< std::endl;
		std::exit(1);
	}
	std::cout << "NickName : ";
    std::getline(std::cin, NickName);
	if (std::cin.eof()){
		std::cout << "exit signal"<< std::endl;
		std::exit(1);
	}
    std::cout << "Phonenum : ";
	std::getline(std::cin, Phonenum);
	if (std::cin.eof()){
		std::cout << "exit signal"<< std::endl;
		std::exit(1);
	}
	std::cout << "DarkestSercret : ";
	std::getline(std::cin, DarkestSercret);
	if (std::cin.eof()){
		std::cout << "exit signal"<< std::endl;
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
			std::cout << "exit signal"<< std::endl;
			std::exit(1);
		}
		else if (std::cin.fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Wrong input" << std::endl;
		}
		else if(num > 0 && num < 8 && num > idx){
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

Contact::~Contact(){

}

void Phonebook::initPhonebook(){
	if (idx >= 8)
	{
		book[idx % 8].Contact::~Contact();
		book[idx % 8].Contact::initcontact();
	}
	else
		book[idx].Contact::initcontact();
	idx++;
}

Phonebook::~Phonebook(){
	for (int i=0; i<8; i++){
		book[i].Contact::~Contact();
	}
}

Phonebook::Phonebook(){
	idx = 0;
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
