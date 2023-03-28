#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
	private :
		Fixed x;
		Fixed y;
	public :
		Point(void);
		Point(float const x, float const y);
		Point(const Point &po);
		Point &operator=(const Point &po);
		Fixed getX(void) const;
		Fixed getY(void) const;
		~Point(void);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
