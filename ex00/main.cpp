#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>

int main() {
	int arr[10] = {123, 3242, 5423, 123343, 4332, 123, 41, 6663, 634, 42};
	std::cout << "Let's create array of ints with value: \"123, 3242, 5423, 123343, 4332, 123, 41, 6663, 634, 42\"\n\n";
	{
		std::cout << "Now let's create container vector and put array to him.\nThen found 12 value in container: ";
		try {
			std::vector<int> a(arr, arr + sizeof(arr) / sizeof(int));
			std::vector<int>::iterator it = easyfind(a, 12);

			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Now let's create container deque and put array to him.\nThen found 4332 value in container: ";
		try {
			std::deque<int> a;

			a.insert(a.begin(), arr, arr + sizeof(arr) / sizeof(int));

			std::deque<int>::iterator it = easyfind(a, 4332);

			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Now let's create container list and put array to him.\nThen found 43 value in container: ";
		try {
			std::list<int> a;

			a.insert(a.begin(), arr, arr + sizeof(arr) / sizeof(int));

			std::list<int>::iterator it = easyfind(a, 43);

			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "Now let's create container set and put array to him.\nThen found 41 value in container: ";
		try {
			std::set<int> a(arr, arr + sizeof(arr) / sizeof(int));

			std::set<int>::iterator it = easyfind(a, 41);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
}
