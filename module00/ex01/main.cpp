/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:13:02 by hojsong           #+#    #+#             */
/*   Updated: 2023/02/28 13:13:10 by hojsong          ###   ########.fr       */
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
	std::cin >> FirstName;
	std::cout << "LastName : ";
	std::cin >> LastName;
	std::cout << "NickName : ";
    std::cin >> NickName;
    std::cout << "Phonenum : ";
	std::cin >> Phonenum;
	std::cout << "DarkestSercret : ";
	std::cin >> DarkestSercret;
}

void	Phonebook::printPhonebook()
{
	Phonebookprint(FirstName);
	std::cout << " | ";
	Phonebookprint(LastName);
   	std::cout << " | ";
    Phonebookprint(NickName);
    std::cout << " | ";
    Phonebookprint(Phonenum);
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

int	main(void)
{
	Phonebook	book[8];
	std::string	input;
	int	i;
	int idx;

	i = 0;
	while(1)
	{
		std::cin >> input;
		if (input == "ADD")
		{
			if (i == 8)
			{
				idx = -1;
				while (++idx < 7)
					book[idx] = book[idx + 1];
				book[i - 1].Phonebook::~Phonebook();
				book[i - 1].Phonebook::initPhonebook();
			}
			else
			{
				book[i].Phonebook::initPhonebook();
				i++;
			}
		}
		if (input == "SEARCH")
		{
    		idx = 0;
			while (idx < i)
			{
				book[idx].Phonebook::printPhonebook();
				idx++;
			}
		}
		if (input == "EXIT")
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
			continue;
	}
	return (0);
}