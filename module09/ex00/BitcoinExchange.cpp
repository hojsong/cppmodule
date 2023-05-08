#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
	// std::cout << "Default bts create" << std::endl;
}

BitcoinExchange::~BitcoinExchange(){
	// std::cout << "bts destructor" << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj){
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const &obj){
	this->input = obj.input;
	this->data = obj.data;
	return *this;
}


int BitcoinExchange::setFile(FILE *fd){
	std::string dest;
	std::string dust;
	char buffer[1024];
	char* token;
	std::fgets(buffer, 1024, fd);
	token = std::strtok(buffer, "| \n"); 
	if (token != NULL) {
			dest = token;
			if (dest == "date")
				token = std::strtok(NULL, "| \n");
			else
				return 1;
			if (token != NULL)
				dest = token;
			else
				dest = "";
			if (dest == "value")
				token = std::strtok(NULL, "| \n");
			else
				return (1);
	}
	else {
		return (1);
	}
    while (std::fgets(buffer, 1024, fd)) {
        token = std::strtok(buffer, "| \n");
    	while (token != NULL) {
			dest = token;
			input.day.push(dest);
	        token = std::strtok(NULL, "| \n");
			if (token != NULL)
				dest = token;
			else
				dest = "";
			input.value.push(dest);
			token = std::strtok(NULL, "| \n");
    	}
    }
	return (0);
}

int BitcoinExchange::setFile2(FILE *fd){
	std::string dest;
	std::string dust;
	char buffer[1024];
	char* token;
	std::fgets(buffer, 1024, fd);
	token = std::strtok(buffer, ", \n"); 
	if (token != NULL) {
			dest = token;
			if (dest == "date")
				token = std::strtok(NULL, ", \n");
			else
				return 1;
			if (token != NULL)
				dest = token;
			else
				dest = "";
			if (dest == "exchange_rate")
				token = std::strtok(NULL, ", \n");
			else
				return (1);
	}
	else {
		return (1);
	}
    while (std::fgets(buffer, 1024, fd)) {
        token = std::strtok(buffer, ", \n");
    	while (token != NULL) {
			dest = token;
			data.day.push(dest);
	        token = std::strtok(NULL, ", \n");
			if (token != NULL)
				dest = token;
			else
				dest = "";
			data.value.push(dest);
			token = std::strtok(NULL, ", \n");
    	}
    }
	return (0);
}

bool hj_strcomparison(std::string str, std::string str2){
	std::string substr11 = str.substr(0, 4);
    std::string substr12 = str.substr(5, 2);
    std::string substr13 = str.substr(8, 2);
	std::string substr21 = str2.substr(0, 4);
    std::string substr22 = str2.substr(5, 2);
    std::string substr23 = str2.substr(8, 2);
	int	idx = 0;
	for (int i = 0; i < 4; i++){
		if (substr11[i] > substr21[i] && idx == i)
			return false;
		if (substr11[i] == substr21[i])
			idx++;
	}
	for (int i = 0; i < 2; i++){
		if (substr12[i] > substr22[i] && idx == i+4)
			return false;
		if (substr12[i] == substr22[i])
			idx++;
	}
	for (int i = 0; i < 2; i++){
		if (substr13[i] > substr23[i] && idx == i+6)
			return false;
		if (substr13[i] == substr23[i])
			idx++;
	}
	return true;
}

std::string BitcoinExchange::easyfind(std::stack<std::string> con, std::stack<std::string> val, std::string value)
{
    std::stack<std::string> temp_con = con;
    std::stack<std::string> temp_val = val;
	while (!temp_con.empty()) {
        if (temp_con.top() == value) {
            break ;
        }
		else if (hj_strcomparison(temp_con.top(), value))
			break ;
        temp_con.pop();
        temp_val.pop();
    }
	return temp_val.top();
}

int hj_day_true(std::string str){
	int num;
	int	num1;
	int num2;
	std::string substr11 = str.substr(0, 4);
	num = std::atoi(substr11.c_str());
	if (num < 2000)
		return 1;
    std::string substr12 = str.substr(5, 2);
	num1 = std::atoi(substr12.c_str());
	if (num1 < 1 || num1 > 12)
		return 1;
    std::string substr13 = str.substr(8, 2);
	num2 = std::atoi(substr13.c_str());
	if (num1 == 2 && num % 4 == 0 && (num2 > 0 && num2 <= 29))
		return 0;
    else if (num1 == 2 && num % 4 != 0 && (num2 > 0 && num2 <= 28))
		return 0;
	else if (num1 == 1 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 3 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 5 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 7 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 8 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 10 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 12 && (num2 > 0 && num2 <= 31))
		return 0;
	else if (num1 == 4 && (num2 > 0 && num2 <= 30))
		return 0;
	else if (num1 == 6 && (num2 > 0 && num2 <= 30))
		return 0;
	else if (num1 == 9 && (num2 > 0 && num2 <= 30))
		return 0;
	else if (num1 == 11 && (num2 > 0 && num2 <= 30))
		return 0;
	return 1;
}

std::string hj_multiplication(std::string val1, std::string val2){
	float f1 = static_cast<float>(atof(val1.c_str()));
	float f2 = static_cast<float>(atof(val2.c_str()));

	std::string result_str = std::to_string(f1 * f2);
	size_t last_non_zero = result_str.find_last_not_of('0');
	if(last_non_zero != std::string::npos){
		result_str = result_str.substr(0, last_non_zero + 1);
	}
	
	return result_str;
}

std::string BitcoinExchange::easyprint(std::stack<std::string> con, std::stack<std::string> val, std::stack<std::string> con2, std::stack<std::string> val2)
{
	std::stack<std::string> reset;
	std::string save_string = "";
	std::string valued = "";
	long num;
    while (!con.empty())
    {
		num = std::atol(val.top().c_str());
		if (con.top().length() != 10)
			save_string = "Error: bad input => " + con.top();
		else if (hj_day_true(con.top()) == 1)
			save_string = "Error: bad input => " + con.top();
		else if (num < 0)
			save_string = "Error: not a positive number.";
		else if (num > 1000)
			save_string = "Error: too large a number.";
		else{
        	valued = easyfind(con2, val2, con.top());
			save_string = con.top() + " => " + val.top() + " = " + hj_multiplication(val.top(), valued);
		}
		reset.push(save_string);
        con.pop();
        val.pop();
    }
	while (!reset.empty()){
		std::cout << reset.top() << std::endl;
		reset.pop();
	}
    return valued;
}

void BitcoinExchange::print(void){
	easyprint(input.day, input.value, data.day, data.value);
}