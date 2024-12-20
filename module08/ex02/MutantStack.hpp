#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>{
	public :
		MutantStack() {};
		virtual ~MutantStack() {};
		MutantStack(const MutantStack& obj) {*this = obj;};
		MutantStack& operator=(const MutantStack& obj) {*this = obj; return (*this);}
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		iterator begin(void) {return this->c.begin();}
		iterator end(void) {return this->c.end();}

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin(void) {return this->c.rbegin();}
		reverse_iterator rend(void) {return this->c.rend();}

		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		const_iterator cbegin(void) {return this->c.cbegin();}
		const_iterator cend(void) {return this->c.cend();}

		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
		const_iterator crbegin(void) {return this->c.crbegin();}
		const_iterator crend(void) {return this->c.crend();}
};

#endif