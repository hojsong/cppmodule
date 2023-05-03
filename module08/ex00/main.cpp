#include "easyfind.hpp"


int main(void)
{
	std::vector<int> v;
	std::deque<int> d;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}
	try
	{
		std::cout << "Vlen: " << std::distance(v.begin(), v.end()) << " / " << *(easyfind(v, 5)) << " is at " << std::distance(v.begin(), easyfind(v, 5)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Dlen: " << std::distance(d.begin(), d.end()) << " / " << *(easyfind(d, 0)) << " is at " << std::distance(d.begin(), easyfind(d, 0)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Llen: " << std::distance(l.begin(), l.end()) << " / " << *(easyfind(l, 10)) << " is at " << std::distance(l.begin(), easyfind(l, 10)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}