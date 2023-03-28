#include "Fixed.hpp"

Fixed::Fixed(){
	this->fixed_int = 0;
}

Fixed::~Fixed(){

}

Fixed::Fixed(const Fixed &fix){
	*this = fix;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_int);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_int = raw;
}

Fixed::Fixed(const int num)
{
	this->fixed_int = num << fraction_bit;
}
Fixed::Fixed(const float num)
{
	this->fixed_int = roundf(num * 256);
}

int Fixed::toInt( void ) const
{
	return (this->fixed_int >> this->fraction_bit);
}

float Fixed::toFloat( void ) const
{
	return((float)this->fixed_int / 256);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fix)
{
	out << fix.toFloat();
	return (out);
}

Fixed &Fixed::operator=(const Fixed &fix){
	if (this != &fix)
	{
		this->fixed_int = fix.getRawBits();
	}
	return (*this);
}

bool Fixed::operator>(const Fixed &fix) const{
	return (this->getRawBits() > fix.getRawBits());
}
bool Fixed::operator<(const Fixed &fix) const{
	return (this->getRawBits() < fix.getRawBits());
}
bool Fixed::operator>=(const Fixed &fix) const{
	return (this->getRawBits() >= fix.getRawBits());
}
bool Fixed::operator<=(const Fixed &fix) const{
	return (this->getRawBits() <= fix.getRawBits());
}
bool Fixed::operator==(const Fixed &fix) const{
	return (this->getRawBits() == fix.getRawBits());
}
bool Fixed::operator!=(const Fixed &fix) const{
	return (this->getRawBits() != fix.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fix) const{
	Fixed result(this->toFloat() + fix.toFloat());
	return (result);
}
Fixed Fixed::operator-(const Fixed &fix) const{
	Fixed result(this->toFloat() - fix.toFloat());
	return (result);
}
Fixed Fixed::operator/(const Fixed &fix) const{
	Fixed result(this->toFloat() / fix.toFloat());
	return (result);
}
Fixed Fixed::operator*(const Fixed &fix) const{
	Fixed result(this->toFloat() * fix.toFloat());
	return (result);
}
Fixed& Fixed::operator++(void){
	this->fixed_int++;
	return (*this);
}
Fixed& Fixed::operator--(void){
	this->fixed_int--;
	return (*this);
}
const Fixed Fixed::operator++(int){
	const Fixed dest(*this);
	this->fixed_int++;
	return (dest);
}
const Fixed Fixed::operator--(int){
	const Fixed dest(*this);
	this->fixed_int--;
	return (dest);
}
Fixed &Fixed::min(Fixed &fix1, Fixed &fix2){
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}
const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2){
	if (fix1 <= fix2)
		return (fix1);
	return (fix2);
}
Fixed &Fixed::max(Fixed &fix1, Fixed &fix2){
	if (fix1 <= fix2)
		return (fix2);
	return (fix1);
}
const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2){
	if (fix1 <= fix2)
		return (fix2);
	return (fix1);
}