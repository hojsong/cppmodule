#include "PmergeMe.hpp"
PmergeMe::PmergeMe(){
	
}

PmergeMe::~PmergeMe(){
	
}

PmergeMe::PmergeMe(PmergeMe const &obj){
	*this = obj;
}

PmergeMe& PmergeMe::operator=(PmergeMe const &obj){
	this->p_ui_s = obj.p_ui_s;
	this->p_ui_e = obj.p_ui_e;
	this->start_time = obj.start_time;
	this->end_time = obj.end_time;
	return (*this);
}

std::string hj_stringjoin(int argc, char **argv){
	std::string result = " ";

	for (int i = 1; i < argc; i++){
		result += argv[i];
		result += " ";
	}
	return result;
}

void	PmergeMe::initPmerge(int argc, char **argv){
	size_t		i;
	std::string str;
	char *cstr; 
	char *token;
	unsigned int num;
	bool is_int;
	
	str = hj_stringjoin(argc, argv);
	cstr = new char[str.length() + 1];
    std::strcpy(cstr, str.c_str());
    token = std::strtok(cstr, " ");
	this->start_time = clock();
    while (token != NULL) {
		is_int = true;
		for (i=0; i<std::strlen(token); i++)
		{
			if (!std::isdigit(token[i]))
        		is_int = false;
		}
		if (is_int){
			num = static_cast<unsigned int>(std::atoi(token));
			p_ui_s.push_back(num);
		}
		else{
			std::ostringstream oss;
			oss << "Error: is not digit or negative int";
			delete[] cstr;
			throw std::out_of_range(oss.str());
		}
        token = std::strtok(NULL, " ");
	}
	delete[] cstr;
}

void	PmergeMe::executePmerge(void){
	std::vector<unsigned int> dest1;
	std::vector<unsigned int> dest2;
	size_t i = 0;

	while (i < p_ui_s.size()/2){
		dest1.push_back(p_ui_s[i]);
		i++;
	}
	while (i < p_ui_s.size()){
		dest2.push_back(p_ui_s[i]);
		i++;
	}

	size_t x = 1;
	size_t y;
	while (x < dest1.size() || x < dest2.size()){
		y = x;
		while (y > 0){
			if (dest1[y] >= dest1[y - 1] && dest2[y] >= dest2[y - 1])
				break ;
			if (y < dest1.size() && y < dest2.size()){
				if (dest1[y - 1] > dest1[y]){
					std::swap(dest1[y - 1],dest1[y]);
				}
				if (dest2[y - 1] > dest2[y]){
					std::swap(dest2[y - 1],dest2[y]);
				}
			}
			else if (y > dest2.size()){
				if (dest1[y - 1] > dest1[y])
				{
					std::swap(dest1[y - 1],dest1[y]);
				}
			}
			else if (y > dest1.size()){
				if (dest2[y - 1] > dest2[y])
				{
					std::swap(dest2[y - 1],dest2[y]);
				}
			}
			y--;
		}
		x++;
	}
	x = 0;
	y = 0;
	while (x < dest1.size() || y < dest2.size()){
		if (y < dest2.size() && dest1[x] >= dest2[y]){
			p_ui_e.push_back(dest2[y]);
			y++;
		}
		else if (x < dest1.size() && dest1[x] < dest2[y]){
			p_ui_e.push_back(dest1[x]);
			x++;
		}
		else if (y >= dest2.size()){
			p_ui_e.push_back(dest1[x]);
			x++;
		}
		else {
			p_ui_e.push_back(dest2[y]);
			y++;
		}
	}
	this->end_time = clock();
}

void	PmergeMe::executePrint(void){
	std::cout << "Before: ";
	for (size_t i=0; i<p_ui_s.size(); i++)
		std::cout << p_ui_s[i] << " ";
	std::cout << std::endl;
	std::cout << "After: ";
	// p_ui_e[0] = 1;
	// p_ui_e[1] = 0;
	for (size_t i=0; i<p_ui_e.size(); i++){
		if (i > 0){
			if (p_ui_e[i - 1] > p_ui_e[i]){
				std::ostringstream oss;
				oss << "\nError: not sort";
				throw std::out_of_range(oss.str());
			}
		}
		std::cout << p_ui_e[i] << " ";
	}
	std::cout << std::endl;
	double time_in_sec = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << p_ui_s.size() <<" elements with: " << std::fixed << std::setprecision(6) << time_in_sec <<"us";
}
