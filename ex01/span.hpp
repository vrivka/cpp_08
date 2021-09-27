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
	Span( Span const & );
	Span( unsigned int ) throw(std::exception);
	void addNumber( int ) throw(std::exception);
	int shortestSpan() throw(std::exception);
	int longestSpan() throw(std::exception);
	~Span();
	Span &operator=( Span const & );
	template<class TIterator>
	void addNumber( TIterator first, TIterator last ) {
		this->array.insert(this->array.end(), first, last);
		if (!this->array.empty() && this->array.size() > size_max)
			throw std::runtime_error("Cannot add numbers range, because array is full");
		std::sort(this->array.begin(), this->array.end());
	};
};

#endif
