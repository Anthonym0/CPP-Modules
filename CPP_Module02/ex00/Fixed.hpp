class Fixed
{
    private:
        int fixed_number;
        static const int frac_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed&);
        ~Fixed();

        Fixed &operator=(const Fixed&);

        int getRawBits( void ) const;
        void    setRawBits( int const raw );
};


