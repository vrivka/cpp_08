#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
private:
	std::vector<int> array;
	unsigned int size_max;
	Span();
public:
	int shortestSpan() throw(std::exception);
	int longestSpan() throw(std::exception);
	void addNumber( int ) throw(std::exception);

	template<class iterator>
	void addNumber( iterator first, iterator last ) {
		this->array.insert(this->array.end(), first, last);
		if (!this->array.empty() && this->array.size() > size_max)
			throw std::runtime_error("Cannot add numbers range, because array is full");
		std::sort(this->array.begin(), this->array.end());
	};

	Span( Span const & );
	explicit Span( unsigned int ) throw(std::exception);
	~Span();
	Span &operator=( Span const & );
};

#endif
