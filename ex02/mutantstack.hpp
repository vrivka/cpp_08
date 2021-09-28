#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() {
		iterator itb = this->c.begin();
		return itb;
	}
	iterator end() {
		iterator ite = this->c.end();
		return ite;
	}
	MutantStack<T>() : std::stack<T>() {};
	MutantStack<T>( MutantStack<T> const &other ) : std::stack<T>(other) {};
	~MutantStack() {};
	MutantStack<T> &operator=( MutantStack<T> const &other ) {};
};

#endif
