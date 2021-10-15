#include "span.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
	std::cout << "\x1b[33m0/5, 1/5 values, overflow and invalid constructor parameter test:\x1b[0m" << std::endl;
	{
		Span sp(5);

		try {
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
		try {
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
		sp.addNumber(5);
		try {
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
		try {
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
		try {
			sp.addNumber(3);
			sp.addNumber(67);
			sp.addNumber(12);
			sp.addNumber(43);
			sp.addNumber(123);
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
		try {
			Span invalid(0);
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
		try {
			Span invalid(1);
		}
		catch (std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mSubject's test:\x1b[0m" << std::endl;
	{
		Span sp(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mCopy constructor test:\x1b[0m" << std::endl;
	{
		try {
			Span sp = Span(3);
			sp.addNumber(5);

			Span sp_copy(sp);

			sp.addNumber(6);
			sp.addNumber(7);
			sp_copy.addNumber(7);
			sp_copy.addNumber(8);

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

			std::cout << "Shortest span: " << sp_copy.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp_copy.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mAssignation operator test:\x1b[0m" << std::endl;
	{
		try {
			Span sp = Span(3);
			sp.addNumber(5);

			Span sp_assign(2);

			sp_assign = sp;
			sp.addNumber(6);
			sp.addNumber(7);
			sp_assign.addNumber(7);
			sp_assign.addNumber(8);

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;

			std::cout << "Shortest span: " << sp_assign.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp_assign.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mIterator test:\x1b[0m" << std::endl;
	{
		try {
			int i[6] = {432,123,431,123,31,1};
			std::vector<int> a(i, i + sizeof(i) / sizeof(int));
			Span sp(6);

			sp.addNumber(a.begin(), a.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\x1b[33m10000 pseudo-random values test:\x1b[0m" << std::endl;
	{
		try {
			std::vector<int> a;

			srand(time(NULL));
			for (int i = 1; i < 10001; i++) {
				a.push_back(rand() % i);
			}

			Span sp(100000);

			sp.addNumber(a.begin(), a.end());
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e ) {
			std::cerr << "\x1b[31m" << e.what() << "\x1b[0m" << std::endl;
		}
	}
}

