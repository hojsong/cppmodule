#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

class Contact{
	private :
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string Phonenum;
		std::string DarkestSercret;
	public :
		void initcontact(void);
		void printcontact(void);
		void allprint(void);
		~Contact();
};

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