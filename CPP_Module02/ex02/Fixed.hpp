#include <iostream>

class Fixed
{
    private:
        int fixed_number;
        static const int frac_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed&);
        Fixed(const int number);
        Fixed(const float number);
        ~Fixed();

        Fixed &operator=(const Fixed&);
        bool operator!=(Fixed a);
        bool operator==(Fixed a);
        bool operator<=(Fixed a);
        bool operator>=(Fixed a);
        bool operator<(Fixed a);
        bool operator>(Fixed a);
        Fixed operator+(Fixed const &a);
        Fixed operator-(Fixed const &a);
        Fixed operator*(Fixed const &a);
        Fixed operator/(Fixed const &a);
        Fixed operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        int toInt( void ) const;
        float toFloat( void ) const;
        int getRawBits( void ) const;
        void    setRawBits( int const raw );
        static Fixed min(Fixed const &a, Fixed const &b);
        static Fixed min(Fixed &a, Fixed &b);
        static Fixed max(Fixed const &a, Fixed const &b);
        static Fixed max(Fixed &a, Fixed &b);

};

std::ostream& operator<<( std::ostream &o, Fixed const &i);