/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:13:02 by hojsong           #+#    #+#             */
/*   Updated: 2023/04/07 13:21:49 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebookprint(std::string str);

int	main(void)
{
	Phonebook	book;
	std::string input;
	
	while(1)
	{
		std::cout << "Command List : ADD , SEARCH , EXIT" << std::endl;
		std::cout << "Command : ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			book.initPhonebook();
		}
		else if (input == "SEARCH")
		{
			book.print_book();
		}
		else if (input == "EXIT")
		{
			book.Phonebook::~Phonebook();
			return (0);
		}
		else if (std::cin.eof()){
			std::cout << "exit signal"<< std::endl;
			std::exit(1);
		}
		else
		{
			std::cout << input << " : command not found" << std::endl;
			continue;
		}
	}
	return (0);
}