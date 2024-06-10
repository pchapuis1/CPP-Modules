#include "MutantStack.hpp"
#include <list>

int	main() {
	std::cout << "----------------STACK----------------" << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
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

	std::cout << std::endl << "----------------LIST----------------" << std::endl << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "top: " << list.back() << std::endl;
	list.pop_back();
	std::cout << "size: " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	//[...]
	list.push_back(0);
	std::list<int>::iterator list_it = list.begin();
	std::list<int>::iterator list_ite = list.end();
	++list_it;
	--list_it;
	while (list_it != list_ite)
	{
	std::cout << *list_it << std::endl;
	++list_it;
	}
	std::list<int> s_list(list);
	
	std::cout << "----------------CONST STACK----------------" << std::endl << std::endl;
	MutantStack<int> const_mstack;
	const_mstack.push(5);
	const_mstack.push(17);
	std::cout << "top: " << const_mstack.top() << std::endl;
	const_mstack.pop();
	std::cout << "size: " << const_mstack.size() << std::endl;
	const_mstack.push(3);
	const_mstack.push(5);
	const_mstack.push(737);
	//[...]
	const_mstack.push(0);

	for (MutantStack<int>::const_iterator it = const_mstack.begin(); it != const_mstack.end(); ++it)
		std::cout << *it << std::endl;
	std::stack<int> const_s(const_mstack);
	return 0;
}