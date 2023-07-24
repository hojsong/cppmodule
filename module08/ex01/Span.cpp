#include "Span.hpp"

Span::Span(){
	this->n_size = 0;
}

Span::Span(unsigned int x){
	this->n_size = x;
}

Span::Span(const Span& obj){
	this->n_size = obj.n_size;
	for (unsigned int i = 0; i < obj.n_num.size(); i++){
		addNumber(obj.n_num[i]);
	}
}

Span& Span::operator=(const Span& obj){
	if (this != &obj)
	{
		this->n_size = obj.n_size;
		for (unsigned int i = 0; i < obj.n_num.size(); i++){
			addNumber(obj.n_num[i]);
		}
	}
	return (*this);
}

Span::~Span(){
}

void Span::addNumber(const int X){
	if (this->n_num.size() < this->n_size)
	{
		this->n_num.push_back(X);
	}
	else{
		std::ostringstream oss;
		oss << "index max : " << this->n_size << " Span cannot addNum execute";
		throw std::overflow_error(oss.str());
	}
}

int Span::shortestSpan(void){
	if (this->n_num.size() <= 2){
		std::ostringstream oss;
		oss << "index : " << this->n_num.size() << " Span Cannot! execute";
		throw std::overflow_error(oss.str());
	}
	std::vector<int> sortedVector = this->n_num;
  	std::sort(sortedVector.begin(), sortedVector.end());
    int shortest = sortedVector[1] - sortedVector[0];
    for (size_t i = 2; i < sortedVector.size(); i++) {
        int diff = sortedVector[i] - sortedVector[i - 1];
        if (diff < shortest) {
            shortest = diff;
        }
    }
	// std::cout << "max : " << n_num[n_num.size()-1] << std::endl;
	// std::cout << "min : " << n_num[0] << std::endl;
    return shortest;
}

void Span::easyadd(std::vector<int> con){
	if(this->get_idx() + con.size() > this->get_size()){
		std::ostringstream oss;
		oss << "this Span MaxSize : " << this->get_size() << " but You input size : " << this->get_idx() + con.size() ;
		throw std::overflow_error(oss.str());
	}
	n_num.insert(n_num.end(), con.begin(), con.end());
}


int Span::longestSpan(void){
	if (this->n_num.size() <= 2){
		std::ostringstream oss;
		oss << "index : " << this->n_num.size() << " Span Cannot! execute";
		throw std::overflow_error(oss.str());
	}
	std::vector<int>::iterator maxElement = std::max_element(n_num.begin(), n_num.end());
	std::vector<int>::iterator minElement = std::min_element(n_num.begin(), n_num.end());
	return (*maxElement - *minElement);
}

unsigned int Span::get_size(void) const{
	return (this->n_size);
}

unsigned int Span::get_idx(void) const{
	return (this->n_num.size());
}