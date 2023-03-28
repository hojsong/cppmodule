#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixed_int = 0;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &fix){
	std::cout << "Copy constructor called" << std::endl;
	*this = fix;
}
Fixed &Fixed::operator=(const Fixed &fix){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fix)
	{
		this->fixed_int = fix.getRawBits();
	}
	return (*this);
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_int);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_int = raw;
}