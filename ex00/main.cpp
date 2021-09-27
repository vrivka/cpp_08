#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <set>

int main() {
	{
		try {
			int arr[10] = {123, 3242, 5423, 123343, 4332, 123, 41, 6663, 634, 42};
			std::vector<int> a(arr, arr + sizeof(arr) / sizeof(int));

			std::cout << *(easyfind(a, 12)) << std::endl;
		}
		catch (std::exception &) {
			std::cerr << "some error\n";
		}
	}
	{
		try {
			std::list<int> a;

			a.push_back(12);
			a.push_back(500);
			a.push_back(31);
			a.push_back(654);
			a.push_back(345);
			a.push_back(2);

			std::list<int>::iterator it = easyfind(a, 31);
			std::cout << *it << std::endl;
		}
		catch (std::exception &) {
			std::cerr << "some error\n";
		}
	}
	{
		try {
			int arr[10] = {123, 3242, 5423, 123343, 4332, 123, 41, 6663, 634, 42};
			std::set<int> a(arr, arr + sizeof(arr) / sizeof(int));

			std::set<int>::iterator it = easyfind(a, 41);
			std::cout << *++it << std::endl;
		}
		catch (std::exception &) {
			std::cerr << "some error\n";
		}
	}
}
