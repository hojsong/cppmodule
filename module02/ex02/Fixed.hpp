#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private :
		int	fixed_int;
		static const int fraction_bit = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &fix);
		Fixed &operator=(const Fixed &fix);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int	toInt(void) const;
		float toFloat(void) const;
		bool operator>(const Fixed &fix) const;
		bool operator<(const Fixed &fix) const;
		bool operator>=(const Fixed &fix) const;
		bool operator<=(const Fixed &fix) const;
		bool operator==(const Fixed &fix) const;
		bool operator!=(const Fixed &fix) const;
		Fixed operator+(const Fixed &fix) const;
		Fixed operator-(const Fixed &fix) const;
		Fixed operator/(const Fixed &fix) const;
		Fixed operator*(const Fixed &fix) const;
		Fixed& operator++(void);
		Fixed& operator--(void);
		const Fixed operator++(int);
		const Fixed operator--(int);
		static Fixed &min(Fixed &fix1, Fixed &fix2);
		static const Fixed &min(const Fixed &fix1, const Fixed &fix2);
		static Fixed &max(Fixed &fix1, Fixed &fix2);
		static const Fixed &max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fix);
#endif
