#include "span.hpp"

int Span::shortestSpan() throw(std::exception) {
	if (this->array.empty())
		throw std::runtime_error("Array is empty, there is no span to find");
	else if (this->array.size() == 1)
		throw std::runtime_error("Array has one element, there is no span to find");
	return *++this->array.begin() - *this->array.begin();
}

int Span::longestSpan() throw(std::exception) {
	if (this->array.empty())
		throw std::runtime_error("Array is empty, there is no span to find");
	else if (this->array.size() == 1)
		throw std::runtime_error("Array has one element, there is no span to find");
	return *--this->array.end() - *this->array.begin();
}

void Span::addNumber( int num ) throw(std::exception) {
	if (!this->array.empty() && this->array.size() == size_max)
		throw std::runtime_error("Cannot add number, because array is full");
	this->array.push_back(num);
	std::sort(this->array.begin(), this->array.end());
}

Span::Span() : size_max(0) {}

Span::Span( Span const &other ) : array(other.array), size_max(other.size_max) {}

Span::Span( unsigned int size ) throw(std::exception) : size_max(size) {
	if (size == 0 || size == 1)
		throw std::runtime_error("Cannot create Span object with 0 or 1 element");
}

Span::~Span() {}

Span &Span::operator=( Span const &other ) {
	if (this == &other)
		return *this;
	this->array.clear();
	this->array = other.array;
	return *this;
}
