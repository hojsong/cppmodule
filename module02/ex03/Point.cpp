#include "Point.hpp"

Point::Point(void){
	this->x = Fixed(0);
	this->y = Fixed(0);
}

Point::Point(float const x, float const y){
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &po){
	this->x = po.getX();
	this->y = po.getY();
}

Point &Point::operator=(const Point &po){
	if (this != &po)
	{
		this->x = po.getX();
		this->y = po.getY();
	}
	return (*this);
}

Fixed Point::getX(void) const{
	return (this->x);
}

Fixed Point::getY(void) const{
	return (this->y);
}

Point::~Point(void){
}

float t_wh(const Point a, const Point b, const Point c)
{
	float result;

	result = (((a.getX().toFloat() * b.getY().toFloat()) + \
	(b.getX().toFloat() * c.getY().toFloat()) + \
	(c.getX().toFloat() * a.getY().toFloat())) \
	- ((b.getX().toFloat() * a.getY().toFloat()) + \
	(c.getX().toFloat() * b.getY().toFloat()) + \
	(a.getX().toFloat() * c.getY().toFloat()))) * 0.5f;
	if (result < 0)
		return (result * -1);
	return result;
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	float	abcwh;
	float	fwh;
	float	tf;

	fwh = 0;
	tf = 0;
	abcwh = t_wh(a, b, c);
	fwh = t_wh(a, b, point);
	if (fwh == 0)
		return (0);
	tf += fwh;
	fwh = t_wh(a, c, point);
	if (fwh == 0)
		return (0);
	tf += fwh;
	fwh = t_wh(c, b, point);
	if (fwh == 0)
		return (0);
	tf += fwh;
	if (tf == abcwh)
		return (1);
	return (0);
}