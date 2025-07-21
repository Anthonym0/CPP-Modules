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

        int toInt( void ) const;
        float toFloat( void ) const;
        int getRawBits( void ) const;
        void    setRawBits( int const raw );

};

std::ostream& operator<<( std::ostream &o, Fixed const &i);