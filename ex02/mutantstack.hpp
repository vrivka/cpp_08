#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }
	reverse_iterator rbegin() { return this->c.rbegin(); }
	reverse_iterator rend() { return this->c.rend(); }
	MutantStack<T>() : std::stack<T>() {};
	MutantStack<T>( MutantStack<T> const &other ) : std::stack<T>(other) {};
	~MutantStack() {};
	MutantStack<T> &operator=( MutantStack<T> const &other ) {
		if (this == &other)
			return *this;
		this->c = other.c;
		return *this;
	};
};

#endif
