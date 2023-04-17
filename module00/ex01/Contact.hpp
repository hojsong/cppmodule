#ifndef CONTACT_HPP
#define CONTACT_HPP

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
		Contact();
};

void	Phonebookprint(std::string str);

#endif