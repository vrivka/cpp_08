#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	MutantStack<T>() : std::stack<T>() {};
	MutantStack<T>( MutantStack<T> const &other ) : std::stack<T>(other) {};
	~MutantStack() {};
	MutantStack<T> &operator=( MutantStack<T> const &other ) {
		if (this == &other)
			return *this;
		*this = other;
		return *this;
	};
};

#endif
