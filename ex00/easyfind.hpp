#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<class T>
typename T::iterator easyfind( T &cont, int const &tf ) {
	typename T::iterator it;
	typename T::iterator itb = cont.begin();
	typename T::iterator ite = cont.end();

	it = std::find(itb, ite, tf);
	if (*it == *ite)
		throw std::exception();
	return it;
}

#endif
