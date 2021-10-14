#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <set>

int main() {
	int arr[10] = {123, 3242, 5423, 123343, 4332, 123, 41, 6663, 634, 42};
	{
		try {
			std::vector<int> a(arr, arr + sizeof(arr) / sizeof(int));
			std::vector<int>::iterator it = easyfind(a, 12);

			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	{
		try {
			std::list<int> a;

			a.insert(a.begin(), arr, arr + sizeof(arr) / sizeof(int));

			std::list<int>::iterator it = easyfind(a, 4332);

			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	{
		try {
			std::set<int> a(arr, arr + sizeof(arr) / sizeof(int));

			std::set<int>::iterator it = easyfind(a, 41);
			std::cout << *++it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
}
