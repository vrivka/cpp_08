#include "span.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		try {
			Span sp = Span(2);
			sp.addNumber(5);

			Span sp1(sp);
			sp.addNumber(6);
			sp1.addNumber(7);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp1.shortestSpan() << std::endl;
			std::cout << sp1.longestSpan() << std::endl;
		}
		catch ( std::exception &e )
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			int i[6] = {432,123,431,123,31,1};
	//		std::vector<int> a(i, i + sizeof(i) / sizeof(int));
			Span sp(5);

	//		sp.addNumber(a.begin(), a.end());
			sp.addNumber(i, i + 3);
			sp.addNumber(i + 4, i + 5);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e )
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			std::vector<int> a;

			srand(time(NULL));
			for (int i = 1; i < 10001; i++) {
				a.push_back(rand() % i);
			}
			Span sp(100000);

			sp.addNumber(a.begin(), a.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch ( std::exception &e )
		{
			std::cerr << e.what() << std::endl;
		}
	}
}

