#ifndef SPAN_HPP
#define SPAN_HPP

# include <algorithm>
# include <vector>
# include <iostream>
# include <limits>

class Span
{
    private:
        unsigned int        n;
        int                 stored;
        std::vector<int>    data;

    public:
        Span();
        Span(unsigned int n);
        Span    &operator=(const Span &stats);
        Span(const Span &copy);
        void	addNumber(const int n);
        int		shortestSpan(void) const;
		int		longestSpan(void) const;
        void    fillSpan(int value);
        ~Span();

        class alreadyFull : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					 return ("Span::Exception : data is full");
				}
		};

		class notEnoughNumbers : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					 return ("Span::Exception : not enough numbers");
				}
		};

};

template <typename t_find> int findmin(t_find a)
{
    int tmp = INT_MAX;
    for(int i = 0; i < a.size(); i++)
    {
        if (a[i] < tmp)
            tmp = a[i];
    }
    return(tmp);

}

template <typename t_find> int findmax(t_find a)
{
    int tmp = INT_MIN;
    for(int i = 0; i < a.size(); i++)
    {
        if (a[i] > tmp)
            tmp = a[i];
    }
    return(tmp);

}

#endif