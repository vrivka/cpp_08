#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template<class T>
typename T::iterator easyfind( T &cont, int const &tf ) throw (std::exception) {
	typename T::iterator it;
	typename T::iterator itb = cont.begin();
	typename T::iterator ite = cont.end();

	it = std::find(itb, ite, tf);
	if (*it == *ite)
		throw std::runtime_error("cannot found value");
	return it;
}

#endif
