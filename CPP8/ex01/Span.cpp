#include "Span.hpp"

Span::Span()
{
    return ;
}

Span::Span(unsigned int n)
{
    this->n = n;
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=( const Span &stats )
{
    this->n = stats.n;
    this->data = stats.data;
    return (*this);
}



void Span::addNumber(const int number)
{
    if (stored >= n)
		throw Span::alreadyFull();
	data.push_back(number);
	stored++;
}

int		Span::longestSpan(void) const
{
    int min;
    int max;
	if (stored <= 1)
		throw Span::notEnoughNumbers();

	min = findmin(data);
	max = findmax(data);
	return (max - min);
}

int		Span::shortestSpan(void) const
{
	std::vector<int>	copy = data;
	long				minSpan = std::numeric_limits<long>::max();

	if (stored <= 1)
		throw Span::notEnoughNumbers();
	
	sort(copy.begin(), copy.end());
	for (size_t i = 0; i + 1 < data.size(); i++)
		minSpan = std::min(minSpan, static_cast<long>(copy[i + 1] - copy[i]));
	return (minSpan);
}

void	Span::fillSpan(int value)
{
    int k;
	k = 0;
    for (int i = 0; i < value; i++)
    {   
        srand(time(0));
        int random = rand() % 20+1;  
        k += random;
        data.push_back(k);
		stored++;
    }
}

Span::~Span()
{
    return ;
}