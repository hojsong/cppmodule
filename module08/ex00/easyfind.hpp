#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>


template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end()) 
	{
		throw std::runtime_error("value is not in this container");
	}
	return iter;
}

#endif