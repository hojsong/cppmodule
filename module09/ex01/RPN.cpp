#include "RPN.hpp"

RPN::RPN(){

}

RPN::~RPN(){

}

RPN::RPN(RPN const &obj){
	*this = obj;
}

RPN& RPN::operator=(RPN const &obj){
	this->result = obj.result;
	return *this;
}

void RPN::resultinit(char *str){
	size_t i;
	int save;
	for (i=0; str[i] != '\0'; i++){
		if (str[i] >= '0' && str[i] <= '9')
			result.push_back(str[i] - '0');
		else if (str[i] == '-' || str[i] == '+'  || str[i] == '/' || str[i] == '*')
			execve(str[i]);
		else if (str[i] != ' ')
			throw std::out_of_range("Error");
		if (str[i] != ' ' && (str[i + 1] && str[i + 1] != ' '))
			throw std::out_of_range("Error");
	}
	save = result.back();
	result.pop_back();
	if (result.empty())
		std::cout << save << std::endl;
	else
		throw std::out_of_range("Error");
}

void	RPN::execve(char str){
	int	a;
	int	b;
	int p;

	a = result.back();
	result.pop_back();
	b = result.back();
	result.pop_back();
	if (str == '-')
		p = b - a;
	else if (str == '+')
		p = b + a;
	else if (str == '/' && a == 0)
		throw std::out_of_range("Error: not divisible by 0");
	else if (str == '/')
		p = b / a;
	else
		p = b * a;
	result.push_back(p);
}