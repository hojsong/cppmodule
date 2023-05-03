#include "Span.hpp"

Span::Span(){
	this->n_num = NULL;
	this->n_size = 0;
	this->now_idx = 0;
}

Span::Span(unsigned int x){
	this->n_num = new int[x];
	this->n_size = x;
	this->now_idx = 0;
}

Span::Span(const Span& obj){
	this->n_size = obj.n_size;
	this->n_num = new int[n_size];
	for (unsigned int i = 0; i < obj.now_idx; i++){
		addNumber(obj.n_num[i]);
	}
}

Span& Span::operator=(const Span& obj){
	if (this != &obj)
	{
		if (this->get_size() != 0)
			delete n_num;
		this->n_size = obj.n_size;
		this->n_num = new int[n_size];
		for (unsigned int i = 0; i < this->now_idx; i++){
			addNumber(obj.n_num[i]);
		}
	}
	return (*this);
}

Span::~Span(){
	if (this->get_size() != 0)
		delete n_num;
}

void Span::addNumber(const int X){
	if (this->now_idx < this->n_size)
	{
		this->n_num[this->now_idx] = X;
		this->now_idx++;
	}
	else{
		std::ostringstream oss;
		oss << "index max : " << this->n_size << "Span cannot addNum execute";
		throw std::out_of_range(oss.str());
	}
}

int Span::shortestSpan(void){
	if (now_idx < 2){
		std::ostringstream oss;
		oss << "index : " << this->now_idx << " Span Cannot! execute";
		throw std::out_of_range(oss.str());
	}
	int result = this->n_num[0] - this->n_num[1];
	if (result < 0)
		result *= -1;
	int	dest;
	for (unsigned int i = 0; i < this->now_idx; i++){
		for (unsigned int j = 0; j < this->now_idx; j++){
			if (i != j){
				dest = this->n_num[i] - this->n_num[j];
				if (dest < 0)
					dest *= -1;
				if (dest < result)
					result = dest;
			}
		}
	}
	return (result);
}

int Span::longestSpan(void){
	if (now_idx < 2){
		std::ostringstream oss;
		oss << "index : " << this->now_idx << " Span Cannot! execute";
		throw std::out_of_range(oss.str());
	}
	int result = this->n_num[0] - this->n_num[1];
	if (result < 0)
		result *= -1;
	int	dest = 0;
	for (unsigned int i = 0; i < this->now_idx; i++){
		for (unsigned int j = 0; j < this->now_idx; j++){
			if (i != j){
				dest = this->n_num[i] - this->n_num[j];
				if (dest < 0)
					dest *= -1;
				if (dest > result)
					result = dest;
			}
		}
	}
	return (result);
}

unsigned int Span::get_size(void) const{
	return (this->n_size);
}

unsigned int Span::get_idx(void) const{
	return (this->now_idx);
}