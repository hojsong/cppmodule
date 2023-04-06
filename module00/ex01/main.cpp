/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:13:02 by hojsong           #+#    #+#             */
/*   Updated: 2023/04/06 19:30:47 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	Phonebookprint(std::string str);

class Phonebook
{
	private: 
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string Phonenum;
		std::string DarkestSercret;
	public:
		void initPhonebook();
		void printPhonebook();
		~Phonebook();
};

void	Phonebook::initPhonebook()
{
	std::cout << "Firstname : ";
	std::getline(std::cin, FirstName);
	std::cout << "LastName : ";
	std::getline(std::cin, LastName);
	std::cout << "NickName : ";
    std::getline(std::cin, NickName);
    std::cout << "Phonenum : ";
	std::getline(std::cin, Phonenum);
	std::cout << "DarkestSercret : ";
	std::getline(std::cin, DarkestSercret);
}

void	Phonebook::printPhonebook()
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

Phonebook::~Phonebook()
{

}

void print_book(Phonebook *book, int i){
	int	idx;
	int	num;

	idx = 0;
	std::cout << "index |  FirstName |   LastName |   NickName" << std::endl;
	while (idx < i && idx < 8)
	{
		std::cout << "    " << idx + 1 << " | ";
		book[idx].Phonebook::printPhonebook();
		idx++;
	}
	while (1)
	{
		std::cout << "What Find Index Number : ";
		std::cin >> num;
		if (std::cin fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Wrong input" << std::endl;
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
	Phonebookprint(book[num - 1].)
	
}

int	main(void)
{
	Phonebook	book[8];
	std::string	input;
	int	i;
	int idx;

	i = 0;
	while(1)
	{
		std::cout << "Command List : ADD , SEARCH , EXIT" << std::endl;
		std::cout << "Command : ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (i >= 8)
			{
				book[i % 8].Phonebook::~Phonebook();
				book[i % 8].Phonebook::initPhonebook();
			}
			else
				book[i].Phonebook::initPhonebook();
			i++;
		}
		else if (input == "SEARCH")
		{
			print_book(book, i);
		}
		else if (input == "EXIT")
		{
			idx = 0;
			while (idx < i)
			{
				book[idx].Phonebook::~Phonebook();
				idx++;
			}
			return (0);
		}
		else
		{
			std::cout << input << " : command not found" << std::endl;
			continue;
		}
	}
	return (0);
}