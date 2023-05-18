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
	std::vector<int>  copy = data;
    int min;
    int max;
	if (stored <= 1)
		throw Span::notEnoughNumbers();
	std::sort(copy.begin(), copy.end());
	min = *std::min_element(copy.begin(), copy.end());
	max = *std::max_element(copy.begin(), copy.end());
	return (max - min);
}

int		Span::shortestSpan(void) const
{
	std::vector<int>	copy2 = data;
	long				minSpan = std::numeric_limits<long>::max();

	if (stored <= 1)
		throw Span::notEnoughNumbers();
	
	sort(copy2.begin(), copy2.end());
	for (size_t i = 0; i + 1 < data.size(); i++)
		minSpan = std::min(minSpan, static_cast<long>(copy2[i + 1] - copy2[i]));
	return (minSpan);
}

void	Span::fillSpan(unsigned int value)
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
