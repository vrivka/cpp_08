#include "mutantstack.hpp"
#include <algorithm>
#include <iostream>

int main()
{
	std::cout << "\x1b[33mMember functions test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << "Let's create MutantStack that contain ints type values\n";
		std::cout << "Check emptiness with member function \x1b[34mempty()\x1b[0m: ";

		if (mstack.empty())
			std::cout << "\x1b[31mIt's empty\x1b[0m\n";
		else
			std::cout << "\x1b[32mIt's not empty\x1b[0m\n";

		std::cout << "Put 12 on the top of MutantStack with member function \x1b[34mpush()\x1b[0m\n";
		mstack.push(12);

		std::cout << "Check emptiness again: ";

		if (mstack.empty())
			std::cout << "\x1b[31mIt's empty\x1b[0m\n";
		else
			std::cout << "\x1b[32mIt's not empty\x1b[0m\n";

		std::cout << "Put 3, 16, 32, 1 in this order on the top of MutantStack with member function \x1b[34mpush()\x1b[0m\n";

		mstack.push(3);
		mstack.push(16);
		mstack.push(32);
		mstack.push(1);

		std::cout << "Check size with member function \x1b[34msize()\x1b[0m\n";
		std::cout << "Size: " << mstack.size() << std::endl;

		std::cout << "Get value on top of MutantStack with member function \x1b[34mtop()\x1b[0m\n";
		std::cout << "On top: " << mstack.top() << std::endl;

		std::cout << "Remove top value of MutantStack with member function \x1b[34mpop()\x1b[0m\n";
		mstack.pop();

		std::cout << "Size now: " << mstack.size() << std::endl;
		std::cout << "On top now: " << mstack.top() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mIterator test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << "Let's create MutantStack that contain ints type values\n";
		std::cout << "Put 12, 3, 16, 32, 1 in this order on the top of MutantStack with member function \x1b[34mpush()\x1b[0m\n";

		mstack.push(12);
		mstack.push(3);
		mstack.push(16);
		mstack.push(32);
		mstack.push(1);

		std::cout << "Size: " << mstack.size() << std::endl;

		std::cout << "Print values using \x1b[36miterator\x1b[0m from begin to end\n";
		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it = mstack.begin();

		for (int i = 1; it != ite; it++, i++)
			std::cout << i << ") " << *it << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mReverse iterator test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << "Let's create MutantStack that contain ints type values\n";
		std::cout << "Put 12, 3, 16, 32, 1 in this order on the top of MutantStack with member function \x1b[34mpush()\x1b[0m\n";

		mstack.push(12);
		mstack.push(3);
		mstack.push(16);
		mstack.push(32);
		mstack.push(1);

		std::cout << "Size: " << mstack.size() << std::endl;

		std::cout << "Print values using \x1b[36mreverse iterator\x1b[0m from end to begin\n";
		MutantStack<int>::reverse_iterator itre = mstack.rend();
		MutantStack<int>::reverse_iterator it = mstack.rbegin();

		for (int i = 1; it != itre; it++, i++) {
			std::cout << i << ") " << *it << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mCopy constructor test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << "Let's create MutantStack that contains ints type values\n";
		std::cout << "Put 12, 3, 16, 32, 1 in this order on the top of MutantStack with member function \x1b[34mpush()\x1b[0m\n";

		mstack.push(12);
		mstack.push(3);
		mstack.push(16);
		mstack.push(32);
		mstack.push(1);

		std::cout << "Let's create copy of MutantStack that contain ints type values\n";
		MutantStack<int> mstack_copy(mstack);

		std::cout << "Put 15 on the top of original MutantStack with member function \x1b[34mpush()\x1b[0m\n";
		mstack.push(15);
		std::cout << "Put 51 on the top of copy MutantStack with member function \x1b[34mpush()\x1b[0m\n";
		mstack_copy.push(51);

		std::cout << "Original size: " << mstack.size() << std::endl;

		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it = mstack.begin();

		std::cout << "Original contains: \n";
		for (int i = 1; it != ite; it++, i++)
			std::cout << i << ") " << *it << std::endl;
		std::cout << "Copy size: " << mstack_copy.size() << std::endl;

		MutantStack<int>::iterator itec = mstack_copy.end();
		MutantStack<int>::iterator itc = mstack_copy.begin();

		std::cout << "Copy contains: \n";
		for (int i = 1; itc != itec; itc++, i++)
			std::cout << i << ") " << *itc << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mAssignation operator test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;
		MutantStack<int> mstack_copy;

		std::cout << "Let's create two MutantStack that contains ints type values\n";
		std::cout << "Put 12, 3, 16, 32, 1 in this order on the top of first MutantStack with member function \x1b[34mpush()\x1b[0m\n";

		mstack.push(12);
		mstack.push(3);
		mstack.push(16);
		mstack.push(32);
		mstack.push(1);

		std::cout << "Assign first to second\n";
		mstack_copy = mstack;

		std::cout << "Put 15 on the top of original MutantStack with member function \x1b[34mpush()\x1b[0m\n";
		mstack.push(15);
		std::cout << "Put 51 on the top of copy MutantStack with member function \x1b[34mpush()\x1b[0m\n";
		mstack_copy.push(51);

		std::cout << "Original size: " << mstack.size() << std::endl;

		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it = mstack.begin();

		std::cout << "Original contains: \n";
		for (int i = 1; it != ite; it++, i++)
			std::cout << i << ") " << *it << std::endl;
		std::cout << "Copy size: " << mstack_copy.size() << std::endl;

		MutantStack<int>::iterator itec = mstack_copy.end();
		MutantStack<int>::iterator itc = mstack_copy.begin();

		std::cout << "Copy contains: \n";
		for (int i = 1; itc != itec; itc++, i++)
			std::cout << i << ") " << *itc << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mSTL algorithm test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;

		std::cout << "Let's create MutantStack that contain ints type values\n";
		std::cout << "Put 12, 3, 16, 32, 1 in this order on the top of MutantStack with member function \x1b[34mpush()\x1b[0m\n";

		mstack.push(12);
		mstack.push(3);
		mstack.push(16);
		mstack.push(32);
		mstack.push(1);

		std::cout << "Size: " << mstack.size() << std::endl;

		std::cout << "On top before sorting: " << mstack.top() << std::endl;
		std::cout << "Sorting the MutantStack using function \x1b[34msort()\x1b[0m from \x1b[35m<algorithm>\x1b[0m" << std::endl;
		std::sort(mstack.begin(), mstack.end());
		std::cout << "On top now: " << mstack.top() << std::endl;

		std::cout << "Print values using \x1b[36miterator\x1b[0m from begin to end\n";
		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it = mstack.begin();

		for (int i = 1; it != ite; it++, i++)
			std::cout << i << ") " << *it << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\x1b[33mSubject's test:\x1b[0m" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
}

